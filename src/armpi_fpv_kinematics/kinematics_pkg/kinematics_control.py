#!/usr/bin/env python3
# encoding: utf-8
# @data:2023/03/21
# @author:aiden
# 机械臂运动学调用(robotic arm kinematics call)
try:
    import rclpy  # type: ignore
    from rclpy.node import Node  # type: ignore
except ImportError:
    pass
import armpi_fpv_kinematics.transform as transform
# from hiwonder_servo_controllers import bus_servo_control  # Not needed for migration
try:
    from armpi_fpv_kinematics.srv import SetRobotPose, SetJointValue  # type: ignore
except ImportError:
    pass

class KinematicsControl(Node):
    def __init__(self):
        super().__init__('kinematics_control')
        self.cli_set_pose = self.create_client(SetRobotPose, '/kinematics/set_pose_target')
        self.cli_set_joint = self.create_client(SetJointValue, '/kinematics/set_joint_value_target')
        while not self.cli_set_pose.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /kinematics/set_pose_target service...')
        while not self.cli_set_joint.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /kinematics/set_joint_value_target service...')

    def set_pose_target(self, position, pitch, pitch_range=[-180, 180], roll=0.0, resolution=1):
        req = SetRobotPose.Request()
        req.position = position
        req.pitch = pitch
        req.pitch_range = pitch_range
        req.roll = roll
        req.resolution = resolution
        future = self.cli_set_pose.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()
        return [res.success, list(res.pulse), list(res.current_pulse), list(res.rpy), res.min_variation]

    def set_joint_value_target(self, joint_value):
        req = SetJointValue.Request()
        req.joint_value = joint_value
        future = self.cli_set_joint.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

if __name__ == "__main__":
    import time
    rclpy.init()  # type: ignore
    node = KinematicsControl()
    res = node.set_pose_target([transform.link3 + transform.tool_link, 0, 0.36], 0, [-180, 180], 0)
    print('ik', res)
    if res[1] != []:
        res2 = node.set_joint_value_target(res[1])
        print('fk', res2)
    rclpy.shutdown()  # type: ignore
