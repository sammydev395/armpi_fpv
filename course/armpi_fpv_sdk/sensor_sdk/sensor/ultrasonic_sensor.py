#!/usr/bin/env python3
import time
from smbus2 import SMBus, i2c_msg
#幻尔科技iic超声波使用例程#

class Ultrasonic:

    __units = {"mm":0, "cm":1}
    __dist_reg = 0

    __RGB_MODE = 2
    __RGB1_R = 3
    __RGB1_G = 4
    __RGB1_B = 5
    __RGB2_R = 6
    __RGB2_G = 7
    __RGB2_B = 8

    __RGB1_R_BREATHING_CYCLE = 9
    __RGB1_G_BREATHING_CYCLE = 10
    __RGB1_B_BREATHING_CYCLE = 11
    __RGB2_R_BREATHING_CYCLE = 12
    __RGB2_G_BREATHING_CYCLE = 13
    __RGB2_B_BREATHING_CYCLE = 14
    def __init__(self, bus=1):
        self.i2c_addr = 0x77
        self.bus = SMBus(bus)
        self.R1 = 0
        self.G1 = 0
        self.B1 = 0
        self.R2 = 0
        self.G2 = 0
        self.B2 = 0
        self.RGBMode = 0

    def __getattr(self, attr):
        if attr in self.__units:
            return self.__units[attr]
        if attr == "Distance":
            return self.getDistance()
        else:
            raise AttributeError('Unknow attribute : %s'%attr)
    
    #设置灯的模式，0为彩灯模式，1为呼吸灯模式
    def setRGBMode(self, mode):
        self.bus.write_byte_data(self.i2c_addr, self.__RGB_MODE, mode)
    
    #设置灯的颜色
    #参数1：0表示左边的灯，1表示右边
    #参数2：颜色的rgb比例值，以元组形式传入，范围0-255, 依次为r，g，b
    def setRGB(self, index, rgb):
        start_reg = 3 if index == 1 else 6
        self.bus.write_byte_data(self.i2c_addr, start_reg, rgb[0])
        self.bus.write_byte_data(self.i2c_addr, start_reg+1, rgb[1])
        self.bus.write_byte_data(self.i2c_addr, start_reg+2, rgb[2])
    
    #呼吸灯模式
    #参数1：0表示左边的灯，1表示右边
    #参数2：颜色通道， 0表示r，1表示g， 2表示b
    #参数3：颜色变化周期，单位ms
    def setBreathCycle(self, index, rgb, cycle):
        start_reg = 9 if index == 1 else 12
        cycle = int(cycle / 100)
        self.bus.write_byte_data(self.i2c_addr, start_reg + rgb, cycle)

    def startSymphony(self):
        self.setRGBMode(1)
        self.setBreathCycle(1, 0, 2000)
        time.sleep(2)
        self.setBreathCycle(1, 1, 3300)
        time.sleep(2)
        self.setBreathCycle(1, 2, 4700)
        time.sleep(2)
        self.setBreathCycle(0, 0, 4600)
        time.sleep(2)
        self.setBreathCycle(0, 1, 2000)
        time.sleep(2)
        self.setBreathCycle(0, 2, 3400)
        time.sleep(2)

    #获取距离, 单位mm
    def getDistance(self):
        msg = i2c_msg.write(self.i2c_addr, [0,])
        self.bus.i2c_rdwr(msg)
        read = i2c_msg.read(self.i2c_addr, 2)
        self.bus.i2c_rdwr(read)
        dist = int.from_bytes(bytes(list(read)), byteorder='little', signed=False)
        if dist > 5000:
            dist = 5000
        return dist

if __name__ == '__main__':
    s = Ultrasonic()
    s.setRGBMode(0)
    s.setRGB(1, (35, 205, 55))
    s.setRGB(0, (235, 205, 55))
    time.sleep(1)
    s.setRGB(1, (0, 0, 0))
    s.setRGB(0, (0, 0, 0))
    s.startSymphony()
    while True:
        time.sleep(1)
        print('%smm'%s.getDistance())

