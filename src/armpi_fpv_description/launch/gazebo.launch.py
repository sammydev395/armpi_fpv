#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Get the package share directories
    pkg_share = FindPackageShare('armpi_fpv_description')
    gazebo_pkg_share = FindPackageShare('gazebo_ros')
    
    # URDF file path
    urdf_path = PathJoinSubstitution([pkg_share, 'urdf', 'armpi_fpv.urdf'])
    
    # Include Gazebo empty world launch
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([gazebo_pkg_share, '/launch', '/gazebo.launch.py'])
    )
    
    # TF static transform publisher for base_footprint
    tf_footprint_base_node = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='tf_footprint_base',
        arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'base_footprint']
    )
    
    # Spawn model in Gazebo
    spawn_model_node = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_model',
        arguments=[
            '-file', urdf_path,
            '-entity', 'armpi_fpv'
        ],
        output='screen'
    )
    
    # Fake joint calibration publisher
    fake_joint_calibration_node = Node(
        package='ros2',
        executable='topic',
        name='fake_joint_calibration',
        arguments=['pub', '/calibrated', 'std_msgs/msg/Bool', 'data: true']
    )
    
    return LaunchDescription([
        gazebo_launch,
        tf_footprint_base_node,
        spawn_model_node,
        fake_joint_calibration_node
    ]) 