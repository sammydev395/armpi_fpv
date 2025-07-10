#!/usr/bin/env python3
# encoding: utf-8
# ROS 2 imports - will be available after migration
# type: ignore
import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter
from hiwonder_servo_driver.hiwonder_servo_serialproxy import SerialProxy
from hiwonder_servo_controllers.action_group_runner import ActionGroupRunner
from hiwonder_servo_controllers.joint_position_controller import JointPositionController
from hiwonder_servo_controllers.joint_trajectory_action_controller import JointTrajectoryActionController

class ControllerManager(Node):
    def __init__(self):
        super().__init__('hiwonder_servo_manager')

        self.waiting_meta_controllers = []
        self.controllers = {}
        self.controllers_by_id = {}
        self.serial_proxies = {}

        self.manager_name = self.get_name().replace('/', '')
        serial_ports = self.get_parameter_or('serial_ports', Parameter('serial_ports', value=[])).value

        for serial in serial_ports:
            port_id = str(serial['port_id'])
            min_motor_id = serial['min_motor_id'] if 'min_motor_id' in serial else 0
            max_motor_id = serial['max_motor_id'] if 'max_motor_id' in serial else 253
            update_rate = serial['update_rate'] if 'update_rate' in serial else 5
            fake_read = serial['fake_read'] if 'fake_read' in serial else False
            connected_ids = serial['connected_ids'] if 'connected_ids' in serial else []

            serial_proxy = SerialProxy(str(port_id),
                                       min_motor_id,
                                       max_motor_id,
                                       connected_ids,
                                       update_rate,
                                       fake_read)
            serial_proxy.connect()
            self.serial_proxies[port_id] = serial_proxy

        controllers_param = self.get_parameter_or('controllers', Parameter('controllers', value={})).value
        items_ = controllers_param.items()
        for ctl_name, ctl_params in items_:
            if ctl_params['type'] == 'JointPositionController':
                self.start_position_controller(ctl_name, ctl_params)

        for ctl_name, ctl_params in items_:
            if ctl_params['type'] == 'JointTrajectoryActionController':
                self.start_trajectory_action_controller(ctl_name, ctl_params)

        self.set_parameter(Parameter('init_finish', value=True))

    def on_shutdown(self):
        pass

    def check_deps(self):
        controllers_still_waiting = []

        for i, (ctl_name, deps, kls) in enumerate(self.waiting_meta_controllers):
            if not set(deps).issubset(self.controllers.keys()):
                controllers_still_waiting.append(self.waiting_meta_controllers[i])
                self.get_logger().warn('[%s] not all dependencies started, still waiting for %s...' % (
                    ctl_name, str(list(set(deps).difference(self.controllers.keys())))))
            else:
                dependencies = [self.controllers[dep_name] for dep_name in deps]
                controller = kls(ctl_name, dependencies)
                if controller.initialize(self):
                    controller.start()
                    self.controllers[ctl_name] = controller

        self.waiting_meta_controllers = controllers_still_waiting[:]

    def start_position_controller(self, ctl_name, ctl_params):
        if ctl_name in self.controllers:
            return False
        port_id = str(ctl_params['port_id'])
        if port_id in self.serial_proxies:
            controller = JointPositionController(self.serial_proxies[port_id].servo_io,
                                                 ctl_name,
                                                 '/' + self.manager_name + "/controllers/" + ctl_name,
                                                 port_id)
            
            if ctl_name == 'r_joint_controller': 
                if controller.initialize(180):
                    controller.start()
                    self.controllers[ctl_name] = controller
                    self.controllers_by_id[controller.servo_id] = controller
                    self.check_deps()           
            else:
                if controller.initialize():
                    controller.start()
                    self.controllers[ctl_name] = controller
                    self.controllers_by_id[controller.servo_id] = controller
                    self.check_deps()

    def start_trajectory_action_controller(self, ctl_name, ctl_params):
        dependencies = ctl_params['joint_controllers']
        self.waiting_meta_controllers.append((ctl_name, dependencies, JointTrajectoryActionController))
        self.check_deps()

    def set_multi_pos(self, poss):
        for id_, pos_, dur_ in poss:
            self.controllers_by_id[id_].set_position_in_rad(pos_, dur_)

def main(args=None):
    rclpy.init(args=args)
    try:
        manager = ControllerManager()
        runner = ActionGroupRunner('ActionGroupRunner', manager.set_multi_pos)
        runner.start()
        rclpy.spin(manager)

    except KeyboardInterrupt:
        pass
    finally:
        manager.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
