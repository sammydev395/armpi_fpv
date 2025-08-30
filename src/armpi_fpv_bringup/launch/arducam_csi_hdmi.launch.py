#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.conditions import IfCondition


def generate_launch_description():
    # Declare launch arguments
    camera_name_arg = DeclareLaunchArgument(
        'camera_name',
        default_value='arducam_csi',
        description='Name of the ArduCam CSI camera'
    )
    
    enable_preview_arg = DeclareLaunchArgument(
        'enable_preview',
        default_value='true',
        description='Enable camera preview on HDMI display'
    )
    
    preview_duration_arg = DeclareLaunchArgument(
        'preview_duration',
        default_value='30',
        description='Duration of camera preview in seconds (0 = continuous)'
    )
    
    # ArduCam CSI camera node using usb_cam package
    arducam_csi_node = Node(
        package='usb_cam',
        executable='usb_cam_node',
        name=LaunchConfiguration('camera_name'),
        output='screen',
        parameters=[{
            'video_device': '/dev/video0',
            'image_width': 1280,
            'image_height': 720,
            'pixel_format': 'mjpeg',
            'camera_frame_id': LaunchConfiguration('camera_name'),
            'io_method': 'mmap',
            'fps': 30,
            'camera_info_url': '',
            'camera_name': LaunchConfiguration('camera_name')
        }]
    )
    
    # Camera preview node for HDMI display
    camera_preview_node = Node(
        package='rqt_image_view',
        executable='rqt_image_view',
        name='arducam_preview',
        output='screen',
        arguments=['/arducam_csi/image_raw'],
        condition=IfCondition(LaunchConfiguration('enable_preview'))
    )
    
    # Image viewer node for HDMI display
    image_view_node = Node(
        package='image_view',
        executable='image_view',
        name='arducam_image_view',
        output='screen',
        parameters=[{
            'image_transport': 'raw',
            'autosize': True
        }],
        remappings=[
            ('image', '/arducam_csi/image_raw')
        ],
        condition=IfCondition(LaunchConfiguration('enable_preview'))
    )
    
    # Camera info publisher node
    camera_info_node = Node(
        package='camera_calibration',
        executable='camerainfo_publisher',
        name='arducam_info_publisher',
        output='screen',
        parameters=[{
            'camera_name': LaunchConfiguration('camera_name'),
            'camera_info_url': '',
            'frame_id': LaunchConfiguration('camera_name')
        }]
    )
    
    # Camera status monitor node
    camera_monitor_node = Node(
        package='diagnostic_aggregator',
        executable='aggregator_node',
        name='arducam_monitor',
        output='screen',
        parameters=[{
            'analyzers': {
                'camera': {
                    'type': 'diagnostic_aggregator/GenericAnalyzer',
                    'timeout': 5.0,
                    'find_and_remove_prefix': 'arducam_csi'
                }
            }
        }]
    )
    
    # Optional: Start camera preview with rpicam-still for HDMI display
    # This will show the camera feed directly on the HDMI monitor
    hdmi_preview_process = ExecuteProcess(
        cmd=[
            'rpicam-still',
            '-t', LaunchConfiguration('preview_duration'),
            '--width', '1280',
            '--height', '720',
            '--inline',
            '--nopreview'
        ],
        output='screen',
        condition=IfCondition(LaunchConfiguration('enable_preview'))
    )
    
    # Timer to start HDMI preview after camera node is ready
    hdmi_preview_timer = TimerAction(
        period=5.0,  # Wait 5 seconds for camera to initialize
        actions=[hdmi_preview_process]
    )
    
    return LaunchDescription([
        camera_name_arg,
        enable_preview_arg,
        preview_duration_arg,
        
        # Start camera node first
        arducam_csi_node,
        
        # Start camera info publisher
        camera_info_node,
        
        # Start camera monitor
        camera_monitor_node,
        
        # Start preview nodes if enabled
        camera_preview_node,
        image_view_node,
        
        # Start HDMI preview with delay
        hdmi_preview_timer,
    ])
