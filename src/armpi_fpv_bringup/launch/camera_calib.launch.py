#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare launch arguments
    size_arg = DeclareLaunchArgument(
        'size',
        default_value='9x6',
        description='Size of the calibration pattern'
    )
    
    square_arg = DeclareLaunchArgument(
        'square',
        default_value='0.023',
        description='Size of the square in meters'
    )
    
    # Get package share directory
    pkg_share = FindPackageShare('armpi_fpv_bringup')
    
    # Include USB camera launch
    usb_cam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            pkg_share,
            '/launch/usb_cam.launch.py'
        ])
    )
    
    # Camera calibration node
    camera_calibrator_node = Node(
        package='camera_calibration',
        executable='cameracalibrator.py',
        name='camera_calibrator',
        output='screen',
        arguments=[
            '--size', LaunchConfiguration('size'),
            '--square', LaunchConfiguration('square'),
            '--k-coefficients=3',
            '--no-service-check',
            'image:=/usb_cam/image_raw',
            'camera:=usb_cam'
        ]
    )
    
    return LaunchDescription([
        size_arg,
        square_arg,
        usb_cam_launch,
        camera_calibrator_node
    ]) 