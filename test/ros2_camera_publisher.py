#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from sensor_msgs.msg import CameraInfo
from cv_bridge import CvBridge
import cv2
import numpy as np
import subprocess
import threading
import time
from std_msgs.msg import Header

class ArducamPublisher(Node):
    def __init__(self):
        super().__init__('arducam_publisher')
        
        # Publishers
        self.image_pub = self.create_publisher(Image, '/arducam/image_raw', 10)
        self.camera_info_pub = self.create_publisher(CameraInfo, '/arducam/camera_info', 10)
        
        # CV Bridge
        self.bridge = CvBridge()
        
        # Camera parameters
        self.width = 1280
        self.height = 720
        self.fps = 10
        
        # Timer for publishing
        self.timer = self.create_timer(1.0/self.fps, self.publish_image)
        
        # Camera capture
        self.cap = None
        self.setup_camera()
        
        self.get_logger().info('ArduCam ROS 2 Publisher started')

    def setup_camera(self):
        """Setup camera capture using OpenCV with v4l2 backend"""
        try:
            # Try different video devices that might work with libcamera
            for device_id in [0, 4, 10, 11, 12, 13]:
                try:
                    self.get_logger().info(f'Trying camera device {device_id}')
                    cap = cv2.VideoCapture(device_id, cv2.CAP_V4L2)
                    if cap.isOpened():
                        # Test if we can read a frame
                        ret, frame = cap.read()
                        if ret and frame is not None:
                            self.cap = cap
                            self.get_logger().info(f'Camera opened successfully on device {device_id}')
                            break
                        cap.release()
                except Exception as e:
                    self.get_logger().info(f'Device {device_id} failed: {str(e)}')
                    continue
            
            if self.cap is None:
                self.get_logger().error('No working camera device found')
                return
                
            # Set camera properties
            self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
            self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)
            self.cap.set(cv2.CAP_PROP_FPS, self.fps)
            
            # Get actual values
            actual_width = int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH))
            actual_height = int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
            actual_fps = self.cap.get(cv2.CAP_PROP_FPS)
            
            self.get_logger().info(f'Camera configured: {actual_width}x{actual_height} @ {actual_fps}fps')
            
        except Exception as e:
            self.get_logger().error(f'Camera setup failed: {str(e)}')
            self.cap = None

    def create_camera_info(self):
        """Create camera info message"""
        camera_info = CameraInfo()
        camera_info.header.frame_id = "camera_link"
        camera_info.width = self.width
        camera_info.height = self.height
        camera_info.distortion_model = "plumb_bob"
        
        # Simple camera matrix (needs proper calibration)
        camera_info.k = [800.0, 0.0, float(self.width/2), 
                        0.0, 800.0, float(self.height/2), 
                        0.0, 0.0, 1.0]
        camera_info.d = [0.0, 0.0, 0.0, 0.0, 0.0]
        camera_info.r = [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]
        camera_info.p = [800.0, 0.0, float(self.width/2), 0.0, 
                        0.0, 800.0, float(self.height/2), 0.0, 
                        0.0, 0.0, 1.0, 0.0]
        
        return camera_info

    def publish_image(self):
        """Capture and publish image"""
        if self.cap is None:
            # Try to reinitialize camera
            self.setup_camera()
            return
            
        try:
            ret, frame = self.cap.read()
            
            if ret and frame is not None:
                # Create ROS image message
                header = Header()
                header.stamp = self.get_clock().now().to_msg()
                header.frame_id = "camera_link"
                
                # Convert to ROS image
                image_msg = self.bridge.cv2_to_imgmsg(frame, "bgr8")
                image_msg.header = header
                
                # Create camera info
                camera_info = self.create_camera_info()
                camera_info.header = header
                
                # Publish
                self.image_pub.publish(image_msg)
                self.camera_info_pub.publish(camera_info)
                
                self.get_logger().info(f'Published image: {frame.shape}', throttle_duration_sec=2.0)
                
            else:
                self.get_logger().warn('Failed to read frame', throttle_duration_sec=1.0)
                
        except Exception as e:
            self.get_logger().error(f'Error publishing image: {str(e)}')

    def __del__(self):
        if self.cap is not None:
            self.cap.release()

def main(args=None):
    rclpy.init(args=args)
    
    # Check if cv_bridge is available
    try:
        from cv_bridge import CvBridge
    except ImportError:
        print("ERROR: cv_bridge not available. Install with: sudo apt install ros-iron-cv-bridge")
        return
    
    node = ArducamPublisher()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
