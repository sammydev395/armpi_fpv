#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # Declare launch arguments
    freq_arg = DeclareLaunchArgument(
        'freq',
        default_value='100',
        description='Frequency of the controller node'
    )
    
    imu_link_arg = DeclareLaunchArgument(
        'imu_link',
        default_value='imu_link',
        description='IMU link frame name'
    )
    
    # ROS robot controller node
    ros_robot_controller_node = Node(
        package='ros_robot_controller',
        executable='ros_robot_controller_node.py',
        name='ros_robot_controller',
        output='screen',
        parameters=[{
            'freq': LaunchConfiguration('freq'),
            'imu_frame': LaunchConfiguration('imu_link')
        }]
    )
    
    return LaunchDescription([
        freq_arg,
        imu_link_arg,
        ros_robot_controller_node
    ]) 