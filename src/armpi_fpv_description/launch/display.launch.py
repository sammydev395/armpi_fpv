#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare the launch arguments
    model_arg = DeclareLaunchArgument(
        'model',
        default_value='',
        description='Path to the URDF model file'
    )

    # Get the package share directory
    pkg_share = FindPackageShare('armpi_fpv_description')
    
    # Default URDF file path
    default_urdf_path = PathJoinSubstitution([pkg_share, 'urdf', 'armpi_fpv.urdf'])
    
    # Robot description parameter
    robot_description_content = LaunchConfiguration('robot_description')
    
    # Joint state publisher GUI node
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )
    
    # Robot state publisher node
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_content}]
    )
    
    # RViz2 node
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', PathJoinSubstitution([pkg_share, 'urdf.rviz'])],
        output='screen'
    )
    
    return LaunchDescription([
        model_arg,
        joint_state_publisher_gui_node,
        robot_state_publisher_node,
        rviz_node
    ]) 