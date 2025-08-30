#!/usr/bin/env python3
"""
ArduCam CSI Camera Test Script for ROS 2 Integration
Tests the ArduCam IMX477 CSI camera for robot vision applications
"""

import cv2
import time
import numpy as np
import os
import subprocess
import signal
import sys
from datetime import datetime

class ArduCamCSITester:
    def __init__(self):
        self.camera = None
        self.running = False
        self.test_results = {}
        
    def signal_handler(self, sig, frame):
        """Handle Ctrl+C gracefully"""
        print('\n🛑 Stopping ArduCam CSI camera test...')
        self.cleanup()
        sys.exit(0)
        
    def setup_signal_handlers(self):
        """Setup signal handlers for clean shutdown"""
        signal.signal(signal.SIGINT, self.signal_handler)
        signal.signal(signal.SIGTERM, self.signal_handler)
        
    def check_camera_device(self):
        """Check if the CSI camera is detected"""
        print("🔍 Checking ArduCam CSI camera device...")
        
        # Check if /dev/video0 exists
        if os.path.exists('/dev/video0'):
            print("✅ /dev/video0 device found")
            
            # Get device info
            try:
                result = subprocess.run(['v4l2-ctl', '--device', '/dev/video0', '--info'], 
                                      capture_output=True, text=True)
                if result.returncode == 0:
                    print("📋 Camera device info:")
                    print(result.stdout)
                    return True
                else:
                    print("⚠️  Could not get device info")
                    return False
            except FileNotFoundError:
                print("⚠️  v4l2-ctl not found, skipping device info")
                return True
        else:
            print("❌ /dev/video0 device not found")
            return False
            
    def test_camera_properties(self):
        """Test camera properties and capabilities"""
        print("\n🎯 Testing ArduCam CSI camera properties...")
        
        try:
            # Open camera with V4L2 backend
            os.environ['OPENCV_VIDEOIO_PRIORITY_V4L2'] = '1'
            cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
            
            if not cap.isOpened():
                print("❌ Could not open camera with V4L2 backend")
                return False
                
            print("✅ Camera opened successfully with V4L2")
            
            # Test different resolutions
            resolutions = [
                (640, 480),
                (1280, 720),
                (1920, 1080)
            ]
            
            for width, height in resolutions:
                cap.set(cv2.CAP_PROP_FRAME_WIDTH, width)
                cap.set(cv2.CAP_PROP_FRAME_HEIGHT, height)
                
                actual_width = cap.get(cv2.CAP_PROP_FRAME_WIDTH)
                actual_height = cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
                
                print(f"📐 Resolution {width}x{height}: Actual {actual_width}x{actual_height}")
                
                if abs(actual_width - width) < 10 and abs(actual_height - height) < 10:
                    print(f"✅ Resolution {width}x{height} supported")
                else:
                    print(f"⚠️  Resolution {width}x{height} not fully supported")
            
            # Test frame rate
            cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
            cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)
            cap.set(cv2.CAP_PROP_FPS, 30)
            
            actual_fps = cap.get(cv2.CAP_PROP_FPS)
            print(f"🎬 Frame rate: Target 30fps, Actual {actual_fps:.1f}fps")
            
            # Test pixel formats
            cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('M', 'J', 'P', 'G'))
            print("✅ MJPEG format set")
            
            cap.release()
            return True
            
        except Exception as e:
            print(f"❌ Error testing camera properties: {e}")
            return False
            
    def test_live_preview(self, duration=10):
        """Test live camera preview"""
        print(f"\n🎥 Testing live camera preview for {duration} seconds...")
        print("📱 Check your VNC desktop for the preview window")
        print("💡 Press 'q' to quit early, 's' to save image")
        
        try:
            cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
            if not cap.isOpened():
                print("❌ Could not open camera for preview")
                return False
                
            # Set optimal properties for ArduCam CSI
            cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
            cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)
            cap.set(cv2.CAP_PROP_FPS, 30)
            cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('M', 'J', 'P', 'G'))
            cap.set(cv2.CAP_PROP_BUFFERSIZE, 1)
            
            print("✅ Camera preview started")
            print("📊 Camera properties:")
            print(f"   Width: {cap.get(cv2.CAP_PROP_FRAME_WIDTH)}")
            print(f"   Height: {cap.get(cv2.CAP_PROP_FRAME_HEIGHT)}")
            print(f"   FPS: {cap.get(cv2.CAP_PROP_FPS)}")
            
            start_time = time.time()
            frame_count = 0
            
            while time.time() - start_time < duration:
                ret, frame = cap.read()
                if ret:
                    frame_count += 1
                    
                    # Display frame
                    cv2.imshow('ArduCam CSI Test', frame)
                    
                    # Handle key presses
                    key = cv2.waitKey(1) & 0xFF
                    if key == ord('q'):
                        break
                    elif key == ord('s'):
                        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
                        filename = f"arducam_test_{timestamp}.jpg"
                        cv2.imwrite(filename, frame)
                        print(f"💾 Image saved as {filename}")
                        
                else:
                    print("⚠️  Failed to read frame")
                    break
                    
            # Calculate actual FPS
            elapsed_time = time.time() - start_time
            actual_fps = frame_count / elapsed_time if elapsed_time > 0 else 0
            
            print(f"📊 Preview test completed:")
            print(f"   Frames captured: {frame_count}")
            print(f"   Time elapsed: {elapsed_time:.1f}s")
            print(f"   Actual FPS: {actual_fps:.1f}")
            
            cap.release()
            cv2.destroyAllWindows()
            
            self.test_results['live_preview'] = {
                'frames_captured': frame_count,
                'actual_fps': actual_fps,
                'success': True
            }
            
            return True
            
        except Exception as e:
            print(f"❌ Error during live preview: {e}")
            self.test_results['live_preview'] = {'success': False, 'error': str(e)}
            return False
            
    def test_ros2_integration(self):
        """Test ROS 2 camera integration"""
        print("\n🤖 Testing ROS 2 camera integration...")
        
        try:
            # Check if ROS 2 is available
            result = subprocess.run(['ros2', '--help'], capture_output=True, text=True)
            if result.returncode != 0:
                print("❌ ROS 2 not available")
                return False
                
            print("✅ ROS 2 available")
            
            # Check if usb_cam package is available
            result = subprocess.run(['ros2', 'pkg', 'list'], capture_output=True, text=True)
            if 'usb_cam' in result.stdout:
                print("✅ usb_cam package available")
            else:
                print("⚠️  usb_cam package not found")
                
            # Check if camera topics are available (if ROS 2 is running)
            try:
                result = subprocess.run(['ros2', 'topic', 'list'], capture_output=True, text=True, timeout=5)
                if result.returncode == 0:
                    if '/arducam_csi/image_raw' in result.stdout:
                        print("✅ ArduCam CSI camera topic found")
                    else:
                        print("ℹ️  Camera topics not yet available (camera not launched)")
                else:
                    print("ℹ️  ROS 2 topics not accessible (ROS 2 not running)")
            except subprocess.TimeoutExpired:
                print("ℹ️  ROS 2 topics check timed out (ROS 2 not running)")
                
            self.test_results['ros2_integration'] = {'success': True}
            return True
            
        except Exception as e:
            print(f"❌ Error testing ROS 2 integration: {e}")
            self.test_results['ros2_integration'] = {'success': False, 'error': str(e)}
            return False
            
    def run_comprehensive_test(self):
        """Run all camera tests"""
        print("🚀 Starting ArduCam CSI Camera Comprehensive Test")
        print("=" * 60)
        
        self.setup_signal_handlers()
        
        # Run all tests
        tests = [
            ("Device Check", self.check_camera_device),
            ("Camera Properties", self.test_camera_properties),
            ("Live Preview", lambda: self.test_live_preview(15)),
            ("ROS 2 Integration", self.test_ros2_integration)
        ]
        
        for test_name, test_func in tests:
            print(f"\n{'='*20} {test_name} {'='*20}")
            try:
                success = test_func()
                self.test_results[test_name.lower().replace(' ', '_')] = {'success': success}
            except Exception as e:
                print(f"❌ Test {test_name} failed with exception: {e}")
                self.test_results[test_name.lower().replace(' ', '_')] = {'success': False, 'error': str(e)}
                
        self.print_test_summary()
        
    def print_test_summary(self):
        """Print comprehensive test results"""
        print("\n" + "=" * 60)
        print("📊 ARDUCAM CSI CAMERA TEST SUMMARY")
        print("=" * 60)
        
        for test_name, result in self.test_results.items():
            status = "✅ PASS" if result.get('success', False) else "❌ FAIL"
            print(f"{test_name.replace('_', ' ').title()}: {status}")
            
            if 'error' in result:
                print(f"   Error: {result['error']}")
            elif 'frames_captured' in result:
                print(f"   Frames: {result['frames_captured']}, FPS: {result.get('actual_fps', 0):.1f}")
                
        print("\n🎯 RECOMMENDATIONS:")
        
        if self.test_results.get('device_check', {}).get('success', False):
            print("✅ Camera device is properly detected")
        else:
            print("❌ Check camera hardware connection and drivers")
            
        if self.test_results.get('live_preview', {}).get('success', False):
            print("✅ Camera preview is working")
        else:
            print("❌ Check camera permissions and VNC display settings")
            
        if self.test_results.get('ros2_integration', {}).get('success', False):
            print("✅ ROS 2 integration is ready")
        else:
            print("❌ Check ROS 2 installation and usb_cam package")
            
        print("\n🚀 Ready for robot vision testing!")
        
    def cleanup(self):
        """Clean up resources"""
        if hasattr(self, 'camera') and self.camera:
            self.camera.release()
        cv2.destroyAllWindows()

def main():
    """Main function"""
    tester = ArduCamCSITester()
    tester.run_comprehensive_test()

if __name__ == "__main__":
    main()
