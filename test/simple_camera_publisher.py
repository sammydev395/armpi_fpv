#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from sensor_msgs.msg import CameraInfo
import subprocess
import numpy as np
from std_msgs.msg import Header
import threading
import time
import io

class SimpleCameraPublisher(Node):
    def __init__(self):
        super().__init__('simple_camera_publisher')
        
        # Publishers
        self.image_pub = self.create_publisher(Image, '/arducam/image_raw', 10)
        self.camera_info_pub = self.create_publisher(CameraInfo, '/arducam/camera_info', 10)
        
        # Camera parameters
        self.width = 1280
        self.height = 720
        self.fps = 10
        
        # Timer for publishing camera info and status
        self.timer = self.create_timer(1.0, self.publish_status)
        
        # Camera process
        self.camera_process = None
        self.image_data = None
        self.image_lock = threading.Lock()
        
        self.start_camera_stream()
        
        self.get_logger().info('Simple Camera Publisher started')

    def start_camera_stream(self):
        """Start libcamera video stream"""
        try:
            # Use libcamera-vid to stream raw video data
            cmd = [
                'libcamera-vid',
                '--width', str(self.width),
                '--height', str(self.height),
                '--framerate', str(self.fps),
                '--timeout', '0',  # Run continuously
                '--codec', 'yuv420',
                '--output', '-'  # Output to stdout
            ]
            
            self.get_logger().info(f'Starting camera with command: {" ".join(cmd)}')
            
            # Start the process
            self.camera_process = subprocess.Popen(
                cmd,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                bufsize=-1
            )
            
            # Start reading thread
            self.read_thread = threading.Thread(target=self.read_camera_data, daemon=True)
            self.read_thread.start()
            
            self.get_logger().info('Camera stream started successfully')
            
        except Exception as e:
            self.get_logger().error(f'Failed to start camera: {str(e)}')

    def read_camera_data(self):
        """Read camera data in background thread"""
        frame_size = self.width * self.height * 3 // 2  # YUV420 format
        
        while self.camera_process and self.camera_process.poll() is None:
            try:
                # Read raw frame data
                data = self.camera_process.stdout.read(frame_size)
                
                if len(data) == frame_size:
                    with self.image_lock:
                        self.image_data = data
                else:
                    self.get_logger().warn(f'Incomplete frame: {len(data)}/{frame_size}', throttle_duration_sec=2.0)
                    
            except Exception as e:
                self.get_logger().error(f'Error reading camera data: {str(e)}')
                break

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

    def yuv420_to_rgb_simple(self, yuv_data):
        """Simple YUV420 to RGB conversion"""
        try:
            # Extract Y, U, V planes
            y_size = self.width * self.height
            uv_size = y_size // 4
            
            y_plane = np.frombuffer(yuv_data[:y_size], dtype=np.uint8).reshape(self.height, self.width)
            u_plane = np.frombuffer(yuv_data[y_size:y_size + uv_size], dtype=np.uint8).reshape(self.height//2, self.width//2)
            v_plane = np.frombuffer(yuv_data[y_size + uv_size:], dtype=np.uint8).reshape(self.height//2, self.width//2)
            
            # Simple conversion - just use Y channel as grayscale
            # This is a simplification since we don't have OpenCV for proper YUV conversion
            gray_image = y_plane
            
            # Convert to 3-channel BGR for ROS
            rgb_image = np.stack([gray_image, gray_image, gray_image], axis=2)
            
            return rgb_image
            
        except Exception as e:
            self.get_logger().error(f'YUV conversion error: {str(e)}')
            return None

    def publish_status(self):
        """Publish camera info and attempt to publish image if available"""
        # Always publish camera info
        camera_info = self.create_camera_info()
        camera_info.header.stamp = self.get_clock().now().to_msg()
        camera_info.header.frame_id = "camera_link"
        self.camera_info_pub.publish(camera_info)
        
        # Try to publish image if we have data
        with self.image_lock:
            if self.image_data is not None:
                try:
                    # Convert YUV to RGB
                    rgb_data = self.yuv420_to_rgb_simple(self.image_data)
                    
                    if rgb_data is not None:
                        # Create ROS image message
                        image_msg = Image()
                        image_msg.header.stamp = self.get_clock().now().to_msg()
                        image_msg.header.frame_id = "camera_link"
                        image_msg.height = self.height
                        image_msg.width = self.width
                        image_msg.encoding = "bgr8"
                        image_msg.is_bigendian = False
                        image_msg.step = self.width * 3
                        image_msg.data = rgb_data.tobytes()
                        
                        self.image_pub.publish(image_msg)
                        self.get_logger().info(f'Published image: {self.width}x{self.height}', throttle_duration_sec=2.0)
                    
                except Exception as e:
                    self.get_logger().error(f'Error publishing image: {str(e)}')
            else:
                self.get_logger().info('Waiting for camera data...', throttle_duration_sec=5.0)

    def __del__(self):
        if self.camera_process:
            self.camera_process.terminate()

def main(args=None):
    rclpy.init(args=args)
    
    node = SimpleCameraPublisher()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.camera_process:
            node.camera_process.terminate()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
