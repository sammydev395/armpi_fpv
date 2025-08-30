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
        default_value='arducam_csi',
        description='Name of the ArduCam CSI camera'
    )
    
    # ArduCam CSI camera node using usb_cam package
    # The CSI camera appears as /dev/video0 on Raspberry Pi 5
    arducam_csi_node = Node(
        package='usb_cam',
        executable='usb_cam_node',
        name=LaunchConfiguration('camera_name'),
        output='screen',
        parameters=[{
            'video_device': '/dev/video0',
            'image_width': 1280,
            'image_height': 720,
            'pixel_format': 'mjpeg',  # MJPEG for better compatibility
            'camera_frame_id': LaunchConfiguration('camera_name'),
            'io_method': 'mmap',
            'fps': 30,
            'camera_info_url': '',  # Will be set during calibration
            'camera_name': LaunchConfiguration('camera_name')
        }]
    )
    
    return LaunchDescription([
        camera_name_arg,
        arducam_csi_node
    ])
