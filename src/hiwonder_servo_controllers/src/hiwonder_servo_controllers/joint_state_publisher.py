#!/usr/bin/env python3
# encoding: utf-8
# ROS 2 imports - will be available after migration
# type: ignore
import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from rclpy.qos import QoSProfile, ReliabilityPolicy
from sensor_msgs.msg import JointState as RosJointState
from hiwonder_servo_msgs.msg import JointState as HiwonderJointState

class JointStateMessage:
    def __init__(self, name, position, velocity, effort):
        self.name = name
        self.position = position
        self.velocity = velocity
        self.effort = effort

class JointStatePublisher(Node):
    def __init__(self):
        super().__init__('hiwonder_joint_state_publisher')

        rate = self.get_parameter_or('rate', Parameter('rate', value=20)).value
        self.base_frame = self.get_parameter_or('base_frame', Parameter('base_frame', value='base_link')).value
        self.joints = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'r_joint']

        self.servos = []
        self.controllers = []
        self.joint_states = {}

        for controller in sorted(self.joints):
            self.joint_states[controller] = JointStateMessage(controller, 0.0, 0.0, 0.0)
            self.controllers.append(controller)

        # Create QoS profile
        qos = QoSProfile(depth=1, reliability=ReliabilityPolicy.RELIABLE)

        # Start controller state subscribers
        for c in self.controllers:
            self.create_subscription(
                HiwonderJointState,
                c + '_controller' + '/state',
                self.controller_state_handler,
                qos
            )

        # Start publisher
        self.joint_states_pub = self.create_publisher(RosJointState, '/joint_states', qos)

        self.get_logger().info("Starting Joint State Publisher at " + str(rate) + "Hz")

        self.set_parameter(Parameter('init_finish', value=True))
        
        # Create timer for publishing
        self.create_timer(1.0 / rate, self.publish_joint_states)

    def controller_state_handler(self, msg):
        js = JointStateMessage(msg.name, msg.current_pos, msg.velocity, 0)
        self.joint_states[msg.name] = js

    def publish_joint_states(self):
        # Construct message & publish joint states
        msg = RosJointState()
        msg.name = []
        msg.position = []
        msg.velocity = []
        msg.effort = []

        for joint in self.joint_states.values():
            msg.name.append(joint.name)
            msg.position.append(joint.position)
            msg.velocity.append(0)
            msg.effort.append(0)

        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.base_frame
        self.joint_states_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    try:
        publisher = JointStatePublisher()
        rclpy.spin(publisher)
    except KeyboardInterrupt:
        pass
    finally:
        publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
