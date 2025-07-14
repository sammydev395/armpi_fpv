#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Declare launch arguments
    camera_name_arg = DeclareLaunchArgument(
        'camera_name',
        default_value='usb_cam',
        description='Name of the camera'
    )
    
    # USB camera node
    usb_cam_node = Node(
        package='usb_cam',
        executable='usb_cam_node',
        name=LaunchConfiguration('camera_name'),
        output='screen',
        parameters=[{
            'video_device': '/dev/video0',
            'image_width': 640,
            'image_height': 480,
            'pixel_format': 'yuyv',
            'camera_frame_id': LaunchConfiguration('camera_name'),
            'io_method': 'mmap'
        }]
    )
    
    return LaunchDescription([
        camera_name_arg,
        usb_cam_node
    ]) 