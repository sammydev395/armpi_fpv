#!/usr/bin/python3
# coding=utf8
# 第15章 拓展课程之传感器开发与应用\2.拓展课程-传感器应用开发课程\第9课 机械臂形状AI识别并显示(15. expanded course of sensor development and application\1. sensor basic application course\Lesson 9 shape AI recognition and display)
import os
import cv2
import math
import time
import threading
import numpy as np
from sensor import dot_matrix_sensor
from common.yaml_handle import get_yaml_data
from common.ros_robot_controller_sdk import Board
from kinematics.kinematics_controller import KinematicsController

board = Board()
controller = KinematicsController(board)
controller.go_pose_target([0.15, 0, 0.25], 0, [-90, 90], 0, 1)
dms = dot_matrix_sensor.TM1640(dio=24, clk=22)
time.sleep(1)

range_rgb = {
    'red': (0, 0, 255),
    'blue': (255, 0, 0),
    'green': (0, 255, 0),
    'black': (0, 0, 0),
    'white': (255, 255, 255),
}
lab_data = get_yaml_data(os.path.join(os.path.split(os.path.realpath(__file__))[0], 'lab_config.yaml'))['color_range_list']

# 找出面积最大的轮廓(find out the contour with largest area)
# 参数为要比较的轮廓的列表(the parameter is a list of contours to be compared)
def getAreaMaxContour(contours):
    contour_area_temp = 0
    contour_area_max = 0
    area_max_contour = None

    for c in contours:  # 历遍所有轮廓(iterate through all contours)
        contour_area_temp = math.fabs(cv2.contourArea(c))  # 计算轮廓面积(calculate contour area)
        if contour_area_temp > contour_area_max:
            contour_area_max = contour_area_temp
            if contour_area_temp > 50:  # 只有在面积大于50时，最大面积的轮廓才是有效的，以过滤干扰(only when contours with an area greater than 300 are considered valid, and the contour with the maximum area is used to filter out interference)
                area_max_contour = c

    return area_max_contour, contour_area_max  # 返回最大的轮廓(return the largest contour)

shape_length = 0

def display():
    global shape_length
    
    while True:
        if shape_length == 3:
            print('三角形')
            ## 显示'三角形'(display 'triangle')
            dms.display_buf = (0x80, 0xc0, 0xa0, 0x90, 0x88, 0x84, 0x82, 0x81,
                              0x81, 0x82, 0x84,0x88, 0x90, 0xa0, 0xc0, 0x80)
            dms.update_display()
            
        elif shape_length == 4:
            print('矩形')
            ## 显示'矩形'(display 'rectangle')
            dms.display_buf = (0x00, 0x00, 0x00, 0x00, 0xff, 0x81, 0x81, 0x81,
                              0x81, 0x81, 0x81,0xff, 0x00, 0x00, 0x00, 0x00)
            dms.update_display()
            
        elif shape_length >= 6:           
            print('圆')
            ## 显示'圆形'(display 'circle')
            dms.display_buf = (0x00, 0x00, 0x00, 0x00, 0x1c, 0x22, 0x41, 0x41,
                              0x41, 0x22, 0x1c,0x00, 0x00, 0x00, 0x00, 0x00)
            dms.update_display()
        else:
            dms.clear()
            time.sleep(0.01)
       
# 运行子线程(run sub threat)
th = threading.Thread(target=display)
th.setDaemon(True)
th.start()

shape_list = []

if __name__ == '__main__':
    cap = cv2.VideoCapture(-1)
    while True:
        ret, img = cap.read()
        if ret:
            img_copy = img.copy()
            img_h, img_w = img.shape[:2]
            frame_gb = cv2.GaussianBlur(img_copy, (3, 3), 3)      
            frame_lab = cv2.cvtColor(frame_gb, cv2.COLOR_BGR2LAB)  # 将图像转换到LAB空间(convert the image to the LAB space)
            max_area = 0
            color_area_max = None    
            areaMaxContour_max = 0

            for i in ['red', 'green', 'blue']:
                if i in lab_data:
                    frame_mask = cv2.inRange(frame_lab, (lab_data[i]['min'][0],
                                                         lab_data[i]['min'][1],
                                                         lab_data[i]['min'][2]),
                                                        (lab_data[i]['max'][0],
                                                         lab_data[i]['max'][1],
                                                         lab_data[i]['max'][2])) #对原图像和掩模进行位运算(perform bitwise operation on the original image and the mask)
                    opened = cv2.morphologyEx(frame_mask, cv2.MORPH_OPEN, np.ones((6,6),np.uint8))  #开运算(opening operation)
                    closed = cv2.morphologyEx(opened, cv2.MORPH_CLOSE, np.ones((6,6),np.uint8)) #闭运算(closing operation)
                    contours = cv2.findContours(closed, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)[-2]  #找出轮廓(find out contour)
                    areaMaxContour, area_max = getAreaMaxContour(contours)  #找出最大轮廓(find out the largest contour)
                    if areaMaxContour is not None:
                        if area_max > max_area:#找最大面积(find the largest area)
                            max_area = area_max
                            color_area_max = i
                            areaMaxContour_max = areaMaxContour
            if max_area > 200:                   
                cv2.drawContours(img, areaMaxContour_max, -1, (0, 0, 255), 2)
                # 识别形状(recognize shape)
                # 周长  0.035 根据识别情况修改，识别越好，越小(perimeter 0.035 modify based on recognition performance, smaller for better recognition)
                epsilon = 0.035 * cv2.arcLength(areaMaxContour_max, True)
                # 轮廓相似(contour similar)
                approx = cv2.approxPolyDP(areaMaxContour_max, epsilon, True)
                shape_list.append(len(approx))
                if len(shape_list) == 30:
                    shape_length = int(round(np.mean(shape_list))) 
                    shape_list = []
                    # print(shape_length)
            cv2.imshow('img', img)
            key = cv2.waitKey(1)
            if key == 27:
                break
        else:
            time.sleep(0.01)
    cap.release()
    cv2.destroyAllWindows()
