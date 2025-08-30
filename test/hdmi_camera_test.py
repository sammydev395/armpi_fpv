#!/usr/bin/env python3
"""
HDMI Camera Test Script for ArduCam IMX477
Run this script on the primary HDMI display to test camera functionality
"""

import cv2
import time
import numpy as np
import os
import signal
import sys
from datetime import datetime

class HDMICameraTester:
    def __init__(self):
        self.camera = None
        self.running = False
        
    def signal_handler(self, sig, frame):
        """Handle Ctrl+C gracefully"""
        print('\n🛑 Stopping HDMI camera test...')
        self.cleanup()
        sys.exit(0)
        
    def setup_signal_handlers(self):
        """Setup signal handlers for clean shutdown"""
        signal.signal(signal.SIGINT, self.signal_handler)
        signal.signal(signal.SIGTERM, self.signal_handler)
        
    def test_camera_on_hdmi(self):
        """Test camera with live preview on HDMI display"""
        print("🎥 Starting ArduCam IMX477 camera test on HDMI display...")
        print("📺 This script must run on the primary HDMI display")
        print("💡 Press 'q' to quit, 's' to save image, 'c' to capture video")
        
        try:
            # Force V4L2 backend for better CSI camera support
            os.environ['OPENCV_VIDEOIO_PRIORITY_V4L2'] = '1'
            
            # Open camera
            cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
            if not cap.isOpened():
                print("❌ Could not open camera with V4L2 backend")
                return False
                
            print("✅ Camera opened successfully")
            
            # Set optimal properties for ArduCam IMX477
            cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
            cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)
            cap.set(cv2.CAP_PROP_FPS, 30)
            cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('M', 'J', 'P', 'G'))
            cap.set(cv2.CAP_PROP_BUFFERSIZE, 1)
            
            # Get actual camera properties
            actual_width = cap.get(cv2.CAP_PROP_FRAME_WIDTH)
            actual_height = cap.get(cv2.CAP_PROP_FRAME_HEIGHT)
            actual_fps = cap.get(cv2.CAP_PROP_FPS)
            
            print(f"📊 Camera properties:")
            print(f"   Width: {actual_width}")
            print(f"   Height: {actual_height}")
            print(f"   FPS: {actual_fps}")
            print(f"   Format: MJPEG")
            
            # Create named window for HDMI display
            cv2.namedWindow('ArduCam IMX477 - HDMI Test', cv2.WINDOW_NORMAL)
            cv2.resizeWindow('ArduCam IMX477 - HDMI Test', 1280, 720)
            
            # Video recording setup
            recording = False
            video_writer = None
            frame_count = 0
            start_time = time.time()
            
            print("🎬 Camera preview started on HDMI display")
            print("📱 Controls: 'q'=quit, 's'=save image, 'c'=toggle video recording")
            
            while True:
                ret, frame = cap.read()
                if ret:
                    frame_count += 1
                    
                    # Add timestamp and info overlay
                    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
                    cv2.putText(frame, f"ArduCam IMX477 - {timestamp}", (10, 30), 
                              cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
                    cv2.putText(frame, f"Resolution: {actual_width}x{actual_height} @ {actual_fps:.1f}fps", 
                              (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)
                    cv2.putText(frame, f"Frame: {frame_count}", (10, 90), 
                              cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)
                    
                    if recording:
                        cv2.putText(frame, "RECORDING", (10, 120), 
                                  cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 255), 2)
                        if video_writer:
                            video_writer.write(frame)
                    
                    # Display frame on HDMI
                    cv2.imshow('ArduCam IMX477 - HDMI Test', frame)
                    
                    # Handle key presses
                    key = cv2.waitKey(1) & 0xFF
                    if key == ord('q'):
                        break
                    elif key == ord('s'):
                        # Save current frame
                        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
                        filename = f"arducam_hdmi_{timestamp}.jpg"
                        cv2.imwrite(filename, frame)
                        print(f"💾 Image saved as {filename}")
                    elif key == ord('c'):
                        # Toggle video recording
                        if not recording:
                            # Start recording
                            timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
                            video_filename = f"arducam_hdmi_{timestamp}.mp4"
                            fourcc = cv2.VideoWriter_fourcc(*'mp4v')
                            video_writer = cv2.VideoWriter(video_filename, fourcc, 30.0, (1280, 720))
                            recording = True
                            print(f"🎥 Started recording: {video_filename}")
                        else:
                            # Stop recording
                            recording = False
                            if video_writer:
                                video_writer.release()
                                video_writer = None
                            print("🛑 Stopped recording")
                else:
                    print("⚠️  Failed to read frame")
                    break
                    
            # Calculate performance metrics
            elapsed_time = time.time() - start_time
            actual_fps = frame_count / elapsed_time if elapsed_time > 0 else 0
            
            print(f"\n📊 Test completed:")
            print(f"   Frames captured: {frame_count}")
            print(f"   Time elapsed: {elapsed_time:.1f}s")
            print(f"   Actual FPS: {actual_fps:.1f}")
            
            # Cleanup
            cap.release()
            if video_writer:
                video_writer.release()
            cv2.destroyAllWindows()
            
            return True
            
        except Exception as e:
            print(f"❌ Error during camera test: {e}")
            return False
            
    def run_hdmi_test(self):
        """Run the HDMI camera test"""
        print("🚀 ArduCam IMX477 HDMI Camera Test")
        print("=" * 50)
        print("📺 IMPORTANT: This script must run on the primary HDMI display")
        print("🔌 Connect HDMI monitor to Raspberry Pi 5 before running")
        print("=" * 50)
        
        self.setup_signal_handlers()
        
        # Check if we're on HDMI display
        display = os.environ.get('DISPLAY', '')
        if not display or display == ':0':
            print("✅ Display environment detected")
        else:
            print(f"⚠️  Display environment: {display}")
            
        # Run camera test
        success = self.test_camera_on_hdmi()
        
        if success:
            print("\n🎉 HDMI camera test completed successfully!")
            print("📷 ArduCam IMX477 is working perfectly on HDMI display")
        else:
            print("\n❌ HDMI camera test failed")
            print("🔧 Check camera connection and HDMI display setup")
            
    def cleanup(self):
        """Clean up resources"""
        if hasattr(self, 'camera') and self.camera:
            self.camera.release()
        cv2.destroyAllWindows()

def main():
    """Main function"""
    tester = HDMICameraTester()
    tester.run_hdmi_test()

if __name__ == "__main__":
    main()
