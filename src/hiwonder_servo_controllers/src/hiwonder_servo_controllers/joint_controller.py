#!/usr/bin/env python3
# encoding: utf-8
import rclpy
from rclpy.node import Node

from hiwonder_servo_msgs.msg import ServoStateList
from hiwonder_servo_msgs.msg import JointState
from hiwonder_servo_msgs.msg import CommandDuration

from std_msgs.msg import Float64


class JointController(Node):
    def __init__(self, servo_io, controller_namespace, param_namespace, port_id):
        super().__init__('joint_controller')
        self.running = False
        self.servo_io = servo_io
        self.controller_namespace = controller_namespace
        self.param_namespace = param_namespace
        self.port_id = str(port_id)
        self.joint_name = self.get_parameter(self.param_namespace + '/joint_name').value
        self.joint_speed = self.get_parameter_or(self.param_namespace + '/joint_speed', 1.0).value

    def initialize(self):
        raise NotImplementedError

    def start(self):
        self.running = True
        self.joint_state_pub = self.create_publisher(JointState, self.controller_namespace + '/state', 1)
        self.command_sub = self.create_subscription(Float64, self.controller_namespace + '/command', self.process_command, 10)
        self.command_time_sub = self.create_subscription(CommandDuration, self.controller_namespace + '/command_duration',
                                                 self.process_command_duration, 10)
        self.servo_states_sub = self.create_subscription(ServoStateList, '/servo_controllers/port_id_%s/servo_states' % self.port_id,
                                                 self.process_servo_states, 10)

    def stop(self):
        self.running = False
        self.destroy_publisher(self.joint_state_pub)
        self.destroy_subscription(self.servo_states_sub)
        self.destroy_subscription(self.command_sub)
        self.destroy_subscription(self.command_time_sub)

    def process_servo_states(self,  req):
        pass

    def process_command_duration(self, req):
        pass

    def process_command(self, msg):
        raise NotImplementedError

    def rad_to_raw(self, angle, initial_position_raw, flipped, encoder_ticks_per_radian):
        """ angle is in radians """
        angle_raw = angle * encoder_ticks_per_radian
        return int(round(initial_position_raw - angle_raw if flipped else initial_position_raw + angle_raw))

    def raw_to_rad(self, raw, initial_position_raw, flipped, radians_per_encoder_tick):
        return (initial_position_raw - raw if flipped else raw - initial_position_raw) * radians_per_encoder_tick
