#!/usr/bin/env python3
# encoding: utf-8
from threading import Thread

# ROS 2 imports - will be available after migration
# type: ignore
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.parameter import Parameter
from rclpy.qos import QoSProfile, ReliabilityPolicy
from trajectory_msgs.msg import JointTrajectory
from control_msgs.action import FollowJointTrajectory
from control_msgs.msg import FollowJointTrajectoryFeedback
from control_msgs.msg import FollowJointTrajectoryResult
from builtin_interfaces.msg import Duration


class Segment:
    def __init__(self, num_joints):
        self.start_time = 0.0  # trajectory segment start time
        self.duration = 0.0  # trajectory segment duration
        self.positions = [0.0] * num_joints
        self.velocities = [0.0] * num_joints


class JointTrajectoryActionController:
    def __init__(self, controller_namespace, controllers):
        self.update_rate = 200
        self.state_update_rate = 20
        self.trajectory = []

        self.controller_namespace = controller_namespace
        self.joint_names = [c.joint_name for c in controllers]

        self.joint_to_controller = {}
        for c in controllers:
            self.joint_to_controller[c.joint_name] = c

        self.port_to_joints = {}
        for c in controllers:
            if c.port_id not in self.port_to_joints:
                self.port_to_joints[c.port_id] = []
            self.port_to_joints[c.port_id].append(c.joint_name)

        self.port_to_io = {}
        for c in controllers:
            if c.port_id in self.port_to_io:
                continue
            self.port_to_io[c.port_id] = c.servo_io

        self.joint_states = dict(zip(self.joint_names, [c.joint_state for c in controllers]))
        self.num_joints = len(self.joint_names)
        self.joint_to_idx = dict(zip(self.joint_names, range(self.num_joints)))

    def initialize(self, node):
        self.node = node
        ns = self.controller_namespace + '/joint_trajectory_action_node/constraints'
        
        # Get parameters with defaults
        self.stopped_velocity_tolerance = self.node.get_parameter_or(
            ns + '/stopped_velocity_tolerance', 
            Parameter(ns + '/stopped_velocity_tolerance', value=0.01)
        ).value
        
        self.min_velocity = self.node.get_parameter_or(
            self.controller_namespace + '/joint_trajectory_action_node/min_velocity',
            Parameter(self.controller_namespace + '/joint_trajectory_action_node/min_velocity', value=0.1)
        ).value

        self.goal_constraints = []
        self.trajectory_constraints = []

        for joint in self.joint_names:
            goal_constraint = self.node.get_parameter_or(
                ns + '/' + joint + '/goal',
                Parameter(ns + '/' + joint + '/goal', value=-1.0)
            ).value
            trajectory_constraint = self.node.get_parameter_or(
                ns + '/' + joint + '/trajectory',
                Parameter(ns + '/' + joint + '/trajectory', value=-1.0)
            ).value
            self.goal_constraints.append(goal_constraint)
            self.trajectory_constraints.append(trajectory_constraint)

        # Message containing current state for all controlled joints
        self.msg = FollowJointTrajectoryFeedback()
        self.msg.joint_names = self.joint_names
        self.msg.desired.positions = [0.0] * self.num_joints
        self.msg.desired.velocities = [0.0] * self.num_joints
        self.msg.desired.accelerations = [0.0] * self.num_joints
        self.msg.actual.positions = [0.0] * self.num_joints
        self.msg.actual.velocities = [0.0] * self.num_joints
        self.msg.error.positions = [0.0] * self.num_joints
        self.msg.error.velocities = [0.0] * self.num_joints

        return True

    def start(self):
        self.running = True

        # Create callback group for action server
        callback_group = ReentrantCallbackGroup()

        # Create QoS profile
        qos = QoSProfile(depth=1, reliability=ReliabilityPolicy.RELIABLE)

        self.command_sub = self.node.create_subscription(
            JointTrajectory,
            self.controller_namespace + '/command',
            self.process_command,
            qos,
            callback_group=callback_group
        )
        
        self.state_pub = self.node.create_publisher(
            FollowJointTrajectoryFeedback,
            self.controller_namespace + '/state',
            qos
        )
        
        self.action_server = ActionServer(
            self.node,
            FollowJointTrajectory,
            self.controller_namespace + '/follow_joint_trajectory',
            self.process_follow_trajectory,
            callback_group=callback_group
        )
        
        Thread(target=self.update_state).start()

    def stop(self):
        self.running = False

    def process_command(self, msg):
        if self.action_server.is_active(): 
            self.action_server.set_preempted()

        while self.action_server.is_active():
            rclpy.sleep(0.01)

        self.process_trajectory(msg)

    def process_follow_trajectory(self, goal_handle):
        self.process_trajectory(goal_handle.request.trajectory, goal_handle)

    def process_trajectory(self, traj, goal_handle=None):
        num_points = len(traj.points)

        if num_points == 0:
            msg = 'Incoming trajectory is empty'
            self.node.get_logger().error(msg)
            if goal_handle:
                result = FollowJointTrajectoryResult()
                result.error_code = FollowJointTrajectoryResult.INVALID_GOAL
                goal_handle.abort()
            return

        # correlate the joints we're commanding to the joints in the message
        # map from an index of joint in the controller to an index in the trajectory
        lookup = [traj.joint_names.index(joint) for joint in self.joint_names]
        durations = [0.0] * num_points

        # find out the duration of each segment in the trajectory
        durations[0] = self._duration_to_sec(traj.points[0].time_from_start)

        for i in range(1, num_points):
            durations[i] = self._duration_to_sec(traj.points[i].time_from_start) - self._duration_to_sec(traj.points[i - 1].time_from_start)

        if not traj.points[0].positions:
            if goal_handle:
                result = FollowJointTrajectoryResult()
                result.error_code = FollowJointTrajectoryResult.INVALID_GOAL
                msg = 'First point of trajectory has no positions'
                self.node.get_logger().error(msg)
                goal_handle.abort()
            return

        trajectory = []
        time = self.node.get_clock().now() + Duration(seconds=0.01)

        for i in range(num_points):
            seg = Segment(self.num_joints)

            if traj.header.stamp.sec == 0 and traj.header.stamp.nanosec == 0:
                seg.start_time = self._time_to_sec(time) + self._duration_to_sec(traj.points[i].time_from_start) - durations[i]
            else:
                seg.start_time = self._time_to_sec(traj.header.stamp) + self._duration_to_sec(traj.points[i].time_from_start) - durations[i]

            seg.duration = durations[i]

            # Checks that the incoming segment has the right number of elements.
            # if traj.points[i].velocities and len(traj.points[i].velocities) != self.num_joints:
            #     if goal_handle:
            #         result = FollowJointTrajectoryResult()
            #         result.error_code = FollowJointTrajectoryResult.INVALID_GOAL
            #         msg = 'Command point %d has %d elements for the velocities' % (i, len(traj.points[i].velocities))
            #         self.node.get_logger().error(msg)
            #         goal_handle.abort()
            #     return
            #
            # if len(traj.points[i].positions) != self.num_joints:
            #     if goal_handle:
            #         result = FollowJointTrajectoryResult()
            #         result.error_code = FollowJointTrajectoryResult.INVALID_GOAL
            #         msg = 'Command point %d has %d elements for the positions' % (i, len(traj.points[i].positions))
            #         self.node.get_logger().error(msg)
            #         goal_handle.abort()
            #     return

            for j in range(self.num_joints):
                if traj.points[i].positions:
                    seg.positions[j] = traj.points[i].positions[lookup[j]]

            trajectory.append(seg)

        self.node.get_logger().info('Trajectory start requested at %.3lf, waiting...', self._time_to_sec(traj.header.stamp))
        rate = self.node.create_rate(self.update_rate)

        while self._time_to_sec(traj.header.stamp) > self._time_to_sec(time):
            time = self.node.get_clock().now()
            rate.sleep()

        end_time = self._time_to_sec(traj.header.stamp) + sum(durations)
        seg_end_times = [trajectory[seg].start_time + durations[seg] for seg in range(len(trajectory))]

        self.node.get_logger().info('Trajectory start time is %.3lf, end time is %.3lf, total duration is %.3lf', 
                                   self._time_to_sec(time), end_time, sum(durations))

        self.trajectory = trajectory

        for seg in range(len(trajectory)):
            self.node.get_logger().debug('current segment is %d time left %f cur time %f' % (
                seg, durations[seg] - (self._time_to_sec(time) - trajectory[seg].start_time), self._time_to_sec(time)))
            self.node.get_logger().debug('goal positions are: %s' % str(trajectory[seg].positions))

            # first point in trajectories calculated by OMPL is current position with duration of 0 seconds, skip it
            if durations[seg] == 0:
                self.node.get_logger().debug('skipping segment %d with duration of 0 seconds' % seg)
                continue

            multi_packet = {}

            for port, joints in self.port_to_joints.items():
                vals = []

                for joint in joints:
                    j = self.joint_names.index(joint)
                    desired_position = trajectory[seg].positions[j]
                    self.msg.desired.positions[j] = desired_position
                    servo_id = self.joint_to_controller[joint].servo_id
                    pos = self.joint_to_controller[joint].pos_rad_to_raw(desired_position)
                    vals.append((servo_id, pos))

                multi_packet[port] = vals

            for port, vals in multi_packet.items():
                # dur = durations[seg] * 1000 + 1
                # dur = dur if dur > 30 else 30
                for id_, pos_ in vals:
                    self.port_to_io[port].set_position(id_, pos_, durations[seg])

            while self._time_to_sec(time) < seg_end_times[seg]:
                # check if new trajectory was received, if so abort current trajectory execution
                # by setting the goal to the current position
                if goal_handle and goal_handle.is_cancel_requested:
                    msg = 'New trajectory received. Exiting.'
                    goal_handle.canceled()
                    self.node.get_logger().info(msg)
                    return

                rate.sleep()
                time = self.node.get_clock().now()

            # Verifies trajectory constraints
            for j, joint in enumerate(self.joint_names):
                if self.trajectory_constraints[j] > 0 and self.msg.error.positions[j] > self.trajectory_constraints[j]:
                    if goal_handle:
                        result = FollowJointTrajectoryResult()
                        result.error_code = FollowJointTrajectoryResult.PATH_TOLERANCE_VIOLATED
                        msg = 'Unsatisfied position constraint for %s, trajectory point %d, %f is larger than %f' % \
                              (joint, seg, self.msg.error.positions[j], self.trajectory_constraints[j])
                        self.node.get_logger().warn(msg)
                        goal_handle.abort()
                    return

        # Checks that we have ended inside the goal constraints
        for (joint, pos_error, pos_constraint) in zip(self.joint_names, self.msg.error.positions,
                                                      self.goal_constraints):
            if pos_constraint > 0 and abs(pos_error) > pos_constraint:
                if goal_handle:
                    result = FollowJointTrajectoryResult()
                    result.error_code = FollowJointTrajectoryResult.GOAL_TOLERANCE_VIOLATED
                    msg = 'Aborting because %s joint wound up outside the goal constraints, %f is larger than %f' % \
                          (joint, pos_error, pos_constraint)
                    self.node.get_logger().warn(msg)
                    goal_handle.abort()
                break
        else:
            msg = 'Trajectory execution successfully completed'
            self.node.get_logger().info(msg)
            if goal_handle:
                result = FollowJointTrajectoryResult()
                result.error_code = FollowJointTrajectoryResult.SUCCESSFUL
                goal_handle.succeed()

    def _duration_to_sec(self, duration):
        """Convert ROS 2 Duration to seconds"""
        return duration.sec + duration.nanosec / 1e9

    def _time_to_sec(self, time):
        """Convert ROS 2 Time to seconds"""
        return time.nanoseconds / 1e9

    def update_state(self):
        rate = self.node.create_rate(self.state_update_rate)
        while self.running and rclpy.ok():
            self.msg.header.stamp = self.node.get_clock().now().to_msg()

            # Publish current joint state
            for i, joint in enumerate(self.joint_names):
                state = self.joint_states[joint]
                self.msg.actual.positions[i] = state.current_pos
                self.msg.actual.velocities[i] = abs(state.velocity)
                self.msg.error.positions[i] = self.msg.actual.positions[i] - self.msg.desired.positions[i]
                self.msg.error.velocities[i] = self.msg.actual.velocities[i] - self.msg.desired.velocities[i]

            self.state_pub.publish(self.msg)
            rate.sleep()
