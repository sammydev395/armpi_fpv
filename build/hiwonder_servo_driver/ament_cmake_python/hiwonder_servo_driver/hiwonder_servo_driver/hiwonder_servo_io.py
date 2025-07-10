#!/usr/bin/env python3
# encoding: utf-8
import os
import sys
import time
import rclpy
from rclpy.node import Node
from ros_robot_controller.srv import GetBusServoState
from ros_robot_controller.msg import BusServoState, GetBusServoCmd, SetBusServoState

exception = None


class servo_state:
    def __init__(self):
        self.start_timestamp = time.time()
        self.end_timestamp = time.time()
        self.speed = 200
        self.goal = 500
        self.estimated_pos = 500


class HiwonderServoIO(Node):
    def __init__(self):
        super().__init__('hiwonder_servo_io')
        self.ser = None
        self.timeout = 10
        self.host_name = os.environ.get('ROBOT_HOST')
        self.servos = {1: servo_state(), 2: servo_state(), 3: servo_state(), 4: servo_state(), 5: servo_state(),
                       6: servo_state(), 7: servo_state(), 8: servo_state(), 9: servo_state(), 10: servo_state()}
        self.servo_state_pub = self.create_publisher(SetBusServoState, 'ros_robot_controller/bus_servo/set_state', 10)
        self.get_state_client = self.create_client(GetBusServoState, '/ros_robot_controller/bus_servo/get_state')

    def ping(self, servo_id):
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_id = 1
        for i in range(0, 20):
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].present_id == servo_id:
                    return True
        return False

    def get_position(self, servo_id, fake_read=False):
        if fake_read:
            return self.servos[servo_id].goal
        else:
            count = 0
            msg = GetBusServoCmd()
            msg.id = servo_id
            msg.get_position = 1
            while True:
                count += 1
                request = GetBusServoState.Request()
                request.cmd = msg
                future = self.get_state_client.call_async(request)
                rclpy.spin_once(self, timeout_sec=0.1)
                if future.done():
                    res = future.result()
                    if res.state[0].position != []:
                        return res.state[0].position
                if count > self.timeout:
                    return None

    def get_voltage(self, servo_id):
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_voltage = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].voltage != []:
                    return res.state[0].voltage
            if count > self.timeout:
                return None

    def get_feedback(self, servo_id, fake_read=False):
        position = self.get_position(servo_id, fake_read)
        if position != []:
            time.sleep(0.01)
            goal = self.servos[servo_id].goal
            error = position - goal
            voltage = 9000
            timestamp = time.time()

            return {'timestamp': timestamp,
                    'id': servo_id,
                    'goal': goal,
                    'position': position,
                    'error': error,
                    'voltage': voltage,
                    }
        else:
            return None

    def set_timeout(self, t=10):
        self.timeout = t

    def set_servo_id(self, oldid, newid):
        '''
        配置舵机id号, 出厂默认为1(configure servo id, factory default is 1)
        :param oldid: 原来的id， 出厂默认为1(original id, factory default is 1)
        :param newid: 新的id(new id)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, oldid]
        servo_state.target_id = [1, newid]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_id(self, servo_id=None):
        '''
        读取串口舵机id(read interface servo id)
        :param id: 默认为空(default is none)
        :return: 返回舵机id(return servo id)
        '''
        count = 0
        msg = GetBusServoCmd()
        if servo_id is None:
            msg.id = 254
        else:
            msg.id = servo_id
        msg.get_id = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].present_id != []:
                    return res.state[0].present_id
            if count > self.timeout:
                return None

    def set_position(self, servo_id, position, duration=None):
        """
        驱动串口舵机转到指定位置(drive interface servo rotate to the designated position
        :param id: 要驱动的舵机id(the id of servo to be driven)
        :pulse: 位置(position)
        :use_time: 转动需要的时间(the time required for rotation)
        """
        # print("id:{}, pos:{}, duration:{}".format(servo_id, position, duration))
        servo = self.servos[servo_id]

        current_timestamp = time.time()
        if duration is None:
            duration = 0.02
        servo.goal = int(position)
        duration = 0 if duration < 0 else 30 if duration > 30 else duration
        position = 0 if position < 0 else 1000 if position > 1000 else position
        duration = duration
        position = int(position)

        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.position = [1, position]
        data = SetBusServoState()
        data.state = [servo_state]
        data.duration = duration
        self.servo_state_pub.publish(data)

    def stop(self, servo_id):
        '''
        停止舵机运行(stop running servo)
        :param id:
        :return:
        '''
        # Stop servo by setting position to current position
        current_pos = self.get_position(servo_id)
        if current_pos is not None:
            self.set_position(servo_id, current_pos, 0.0)

    def set_servo_offset(self, servo_id, offset=0):
        '''
        调整偏差(adjust deviation)
        :param id: 舵机id(servo id)
        :param d:  偏差(deviation)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.offset = [1, offset]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def save_servo_offset(self, servo_id):
        '''
        配置偏差，掉电保护(configure deviation, power loss protection)
        :param id: 舵机id(servo id)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.save_offset = [1, 1]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_offset(self, servo_id):
        '''
        读取偏差值(read deviation value)
        :param id: 舵机号(servo number)
        :return:
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_offset = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].offset != []:
                    return res.state[0].offset
            if count > self.timeout:
                return None

    def set_servo_range(self, servo_id, low, high):
        '''
        设置舵机转动范围(set servo rotation range)
        :param id: 舵机id(servo id)
        :param low: 最小角度(minimum angle)
        :param high: 最大角度(maximum angle)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.angle_range = [2, low, high]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_range(self, servo_id):
        '''
        读取舵机转动范围(read servo rotation range)
        :param id: 舵机id(servo id)
        :return: 返回范围(return range)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_angle_range = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].angle_range != []:
                    return res.state[0].angle_range
            if count > self.timeout:
                return None

    def set_servo_vin_range(self, servo_id, low, high):
        '''
        设置舵机电压范围(set servo voltage range)
        :param id: 舵机id(servo id)
        :param low: 最小电压(minimum voltage)
        :param high: 最大电压(maximum voltage)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.vin_range = [2, low, high]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_vin_range(self, servo_id):
        '''
        读取舵机电压范围(read servo voltage range)
        :param id: 舵机id(servo id)
        :return: 返回电压范围(return voltage range)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_vin_range = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].vin_range != []:
                    return res.state[0].vin_range
            if count > self.timeout:
                return None

    def set_servo_temp_range(self, servo_id, m_temp):
        '''
        设置舵机温度范围(set servo temperature range)
        :param id: 舵机id(servo id)
        :param m_temp: 最大温度(maximum temperature)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.temp_range = [1, m_temp]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_temp_range(self, servo_id):
        '''
        读取舵机温度范围(read servo temperature range)
        :param id: 舵机id(servo id)
        :return: 返回温度范围(return temperature range)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_temp_range = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].temp_range != []:
                    return res.state[0].temp_range
            if count > self.timeout:
                return None

    def get_servo_temp(self, servo_id):
        '''
        读取舵机温度(read servo temperature)
        :param id: 舵机id(servo id)
        :return: 返回温度(return temperature)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_temp = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].temp != []:
                    return res.state[0].temp
            if count > self.timeout:
                return None

    def get_servo_vin(self, servo_id):
        '''
        读取舵机电压(read servo voltage)
        :param id: 舵机id(servo id)
        :return: 返回电压(return voltage)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_vin = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].vin != []:
                    return res.state[0].vin
            if count > self.timeout:
                return None

    def reset_offset(self, servo_id):
        # 舵机清零偏差和P值中位（500） 
        self.set_servo_offset(servo_id, 0)
        self.save_servo_offset(servo_id)

    def enable_servo_torque(self, servo_id, torque=False):
        '''
        设置舵机扭力模式(set servo torque mode)
        :param id: 舵机id(servo id)
        :param torque: 扭力模式(torque mode)
        '''
        servo_state = BusServoState()
        servo_state.present_id = [1, servo_id]
        servo_state.torque_enable = [1, 1 if torque else 0]
        msg = SetBusServoState()
        msg.state = [servo_state]
        self.servo_state_pub.publish(msg)

    def get_servo_torque(self, servo_id):
        '''
        读取舵机扭力模式(read servo torque mode)
        :param id: 舵机id(servo id)
        :return: 返回扭力模式(return torque mode)
        '''
        count = 0
        msg = GetBusServoCmd()
        msg.id = servo_id
        msg.get_torque_enable = 1
        while True:
            count += 1
            request = GetBusServoState.Request()
            request.cmd = msg
            future = self.get_state_client.call_async(request)
            rclpy.spin_once(self, timeout_sec=0.1)
            if future.done():
                res = future.result()
                if res.state[0].torque_enable != []:
                    return res.state[0].torque_enable
            if count > self.timeout:
                return None

    def exception_on_error(self, error_code, servo_id, command_failed):
        global exception
        exception = ErrorCodeError('Command failed on servo %d: %s' % (servo_id, command_failed), error_code)

class FatalErrorCodeError(Exception):
    def __init__(self, message, ec_const):
        self.message = message
        self.ec_const = ec_const

    def __str__(self):
        return self.message


class NonfatalErrorCodeError(Exception):
    def __init__(self, message, ec_const):
        self.message = message
        self.ec_const = ec_const

    def __str__(self):
        return self.message


class ErrorCodeError(Exception):
    def __init__(self, message, ec_const):
        self.message = message
        self.ec_const = ec_const

    def __str__(self):
        return self.message


class DroppedPacketError(Exception):
    def __init__(self, message):
        self.message = message

    def __str__(self):
        return self.message


class UnsupportedFeatureError(Exception):
    def __init__(self, model_id, feature_id):
        self.message = 'Model %d does not support feature %d' % (model_id, feature_id)

    def __str__(self):
        return self.message
