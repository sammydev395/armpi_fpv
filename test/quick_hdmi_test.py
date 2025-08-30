#!/usr/bin/env python3
"""
Quick HDMI Test for ArduCam IMX477
Simple script to verify camera works on HDMI display
"""

import cv2
import time
import os

def quick_camera_test():
    """Quick camera test for HDMI display"""
    print("🚀 Quick ArduCam IMX477 Test")
    print("📺 Run this on HDMI display to verify camera")
    
    # Set V4L2 backend
    os.environ['OPENCV_VIDEOIO_PRIORITY_V4L2'] = '1'
    
    # Open camera
    cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
    if not cap.isOpened():
        print("❌ Could not open camera")
        return False
    
    # Set properties
    cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)
    cap.set(cv2.CAP_PROP_FPS, 30)
    
    print("✅ Camera opened successfully")
    print("📱 Press 'q' to quit, 's' to save image")
    
    # Create window
    cv2.namedWindow('ArduCam Quick Test', cv2.WINDOW_NORMAL)
    cv2.resizeWindow('ArduCam Quick Test', 1280, 720)
    
    frame_count = 0
    start_time = time.time()
    
    while True:
        ret, frame = cap.read()
        if ret:
            frame_count += 1
            
            # Add info overlay
            cv2.putText(frame, f"Frame: {frame_count}", (10, 30), 
                      cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
            
            cv2.imshow('ArduCam Quick Test', frame)
            
            key = cv2.waitKey(1) & 0xFF
            if key == ord('q'):
                break
            elif key == ord('s'):
                filename = f"quick_test_{int(time.time())}.jpg"
                cv2.imwrite(filename, frame)
                print(f"💾 Saved: {filename}")
        else:
            print("⚠️  Frame read failed")
            break
    
    # Calculate FPS
    elapsed = time.time() - start_time
    fps = frame_count / elapsed if elapsed > 0 else 0
    
    print(f"📊 Test completed: {frame_count} frames, {fps:.1f} FPS")
    
    cap.release()
    cv2.destroyAllWindows()
    return True

if __name__ == "__main__":
    try:
        quick_camera_test()
    except KeyboardInterrupt:
        print("\n🛑 Test interrupted")
    except Exception as e:
        print(f"❌ Error: {e}")
