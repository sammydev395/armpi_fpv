#!/usr/bin/env python3
# encoding: utf-8
# Date:2021/07/24
# 串口舵机代码控制例程
import rclpy
from rclpy.node import Node
import signal
from hiwonder_servo_msgs.msg import MultiRawIdPosDur, RawIdPosDur


def set_servos(pub, duration, pos_s):
    msg = MultiRawIdPosDur(id_pos_dur_list=list(map(lambda x: RawIdPosDur(int(x[0]), int(x[1]), duration), pos_s)))
    pub.publish(msg)


class ServoControlExample(Node):
    def __init__(self):
        super().__init__('servo_control_example')
        self.running = True
        
        # 发布舵机位置
        self.joints_pub = self.create_publisher(MultiRawIdPosDur, '/servo_controllers/port_id_1/multi_id_pos_dur', 1)
        
        def shutdown(signum, frame):
            self.running = False
            self.get_logger().info('shutdown')
            rclpy.shutdown()

        signal.signal(signal.SIGINT, shutdown)

    def run(self):
        while self.running and rclpy.ok():
            try:
                # 参数1:发布句柄
                # 参数2:运行时间(ms)
                # 参数3:((舵机id, 舵机位置(脉宽)), (舵机id, 舵机位置(脉宽), ...)
                # set_servos(self.joints_pub, 0.5, ((6, 460), (5, 633), (4, 500), (3, 410), (2, 666)))
                # 延时，等待舵机转到指定位置
                # rclpy.sleep(0.5)

                set_servos(self.joints_pub, 1, ((2, 400),))
                rclpy.sleep(1)

                set_servos(self.joints_pub, 1, ((2, 600),))
                rclpy.sleep(1)
            except Exception as e:
                print(e)
                break


if __name__ == '__main__':
    rclpy.init()
    node = ServoControlExample()
    node.run()
    rclpy.shutdown()
