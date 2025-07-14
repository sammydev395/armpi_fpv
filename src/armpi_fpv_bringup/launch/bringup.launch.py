#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare launch arguments
    unregister_timeout_arg = DeclareLaunchArgument(
        'unregister_timeout',
        default_value='3600000',
        description='Unregister timeout for rosbridge'
    )

    # Get package share directories
    pkg_share = FindPackageShare('armpi_fpv_bringup')
    
    # Include other launch files
    ros_robot_controller_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('ros_robot_controller'),
            '/launch/ros_robot_controller_node.launch.py'
        ])
    )
    
    hiwonder_servo_controllers_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('hiwonder_servo_controllers'),
            '/launch/start.launch.py'
        ])
    )
    
    armpi_fpv_kinematics_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('armpi_fpv_kinematics'),
            '/launch/kinematics_node.launch.py'
        ])
    )
    
    usb_cam_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            pkg_share,
            '/launch/usb_cam.launch.py'
        ])
    )
    
    lab_config_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('lab_config'),
            '/launch/lab_config_manager.launch.py'
        ])
    )
    
    rosbridge_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('rosbridge_server'),
            '/launch/rosbridge_websocket.launch.py'
        ]),
        launch_arguments={
            'unregister_timeout': LaunchConfiguration('unregister_timeout')
        }.items()
    )
    
    # Load configuration file
    config_file = PathJoinSubstitution([pkg_share, 'config', 'config.yaml'])
    
    # Web video server node
    web_video_server_node = Node(
        package='web_video_server',
        executable='web_video_server',
        name='web_video_server',
        output='screen'
    )
    
    # Object sorting node
    object_sorting_node = Node(
        package='object_sorting',
        executable='sorting.py',
        name='object_sorting',
        output='screen'
    )
    
    # Object tracking node
    object_tracking_node = Node(
        package='object_tracking',
        executable='tracking.py',
        name='object_tracking',
        output='screen'
    )
    
    # Object pallezting node
    object_pallezting_node = Node(
        package='object_pallezting',
        executable='pallezting.py',
        name='object_pallezting',
        output='screen'
    )
    
    # Face detect node
    face_detect_node = Node(
        package='face_detect',
        executable='face.py',
        name='face_detect',
        output='screen'
    )
    
    # Warehouse nodes
    warehouse_in_node = Node(
        package='warehouse',
        executable='in.py',
        name='in',
        output='screen'
    )
    
    warehouse_out_node = Node(
        package='warehouse',
        executable='out.py',
        name='out',
        output='screen'
    )
    
    warehouse_exchange_node = Node(
        package='warehouse',
        executable='exchange.py',
        name='exchange',
        output='screen'
    )
    
    return LaunchDescription([
        unregister_timeout_arg,
        ros_robot_controller_launch,
        hiwonder_servo_controllers_launch,
        armpi_fpv_kinematics_launch,
        usb_cam_launch,
        lab_config_launch,
        rosbridge_launch,
        web_video_server_node,
        object_sorting_node,
        object_tracking_node,
        object_pallezting_node,
        face_detect_node,
        warehouse_in_node,
        warehouse_out_node,
        warehouse_exchange_node
    ]) 