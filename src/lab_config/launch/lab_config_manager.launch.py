#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare launch arguments
    kernel_erode_arg = DeclareLaunchArgument(
        'kernel_erode',
        default_value='5',
        description='Kernel erode parameter'
    )
    
    kernel_dilate_arg = DeclareLaunchArgument(
        'kernel_dilate',
        default_value='5',
        description='Kernel dilate parameter'
    )
    
    config_file_path_arg = DeclareLaunchArgument(
        'config_file_path',
        default_value=PathJoinSubstitution([
            FindPackageShare('lab_config'),
            'config',
            'lab_config.yaml'
        ]),
        description='Path to lab config file'
    )
    
    # Create the lab config manager node
    lab_config_manager_node = Node(
        package='lab_config',
        executable='lab_config_manager.py',
        name='lab_config_manager',
        output='screen',
        parameters=[{
            'kernel_erode': LaunchConfiguration('kernel_erode'),
            'kernel_dilate': LaunchConfiguration('kernel_dilate'),
            'config_file_path': LaunchConfiguration('config_file_path'),
        }],
        required=True
    )
    
    return LaunchDescription([
        kernel_erode_arg,
        kernel_dilate_arg,
        config_file_path_arg,
        lab_config_manager_node,
    ]) 