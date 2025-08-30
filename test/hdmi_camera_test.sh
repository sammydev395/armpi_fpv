#!/bin/bash

# ArduCam IMX477 HDMI Camera Test Script
# Run this script on the primary HDMI display to test camera functionality

set -e  # Exit on any error

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

print_header() {
    echo -e "${BLUE}================================${NC}"
    echo -e "${BLUE}$1${NC}"
    echo -e "${BLUE}================================${NC}"
}

# Function to check if HDMI display is available
check_hdmi_display() {
    print_header "Checking HDMI Display"
    
    if [ -z "$DISPLAY" ]; then
        export DISPLAY=:0
        print_warning "DISPLAY not set, using :0"
    fi
    
    if xset q >/dev/null 2>&1; then
        print_status "HDMI display is accessible"
        return 0
    else
        print_error "HDMI display is not accessible"
        print_error "Please connect HDMI monitor and ensure X11 is running"
        return 1
    fi
}

# Function to check camera configuration
check_camera_config() {
    print_header "Checking Camera Configuration"
    
    # Check if IMX477 overlay is configured
    if grep -q "dtoverlay=imx477" /boot/firmware/config.txt; then
        print_status "IMX477 overlay is configured"
    else
        print_error "IMX477 overlay not found in /boot/firmware/config.txt"
        print_error "Please add 'dtoverlay=imx477' and reboot"
        return 1
    fi
    
    # Check if camera auto-detect is disabled
    if grep -q "camera_auto_detect=0" /boot/firmware/config.txt; then
        print_status "Camera auto-detect is disabled"
    else
        print_warning "Camera auto-detect not explicitly disabled"
    fi
    
    return 0
}

# Function to check camera detection
check_camera_detection() {
    print_header "Checking Camera Detection"
    
    # Check if video device exists
    if [ -e "/dev/video0" ]; then
        print_status "Video device /dev/video0 found"
    else
        print_error "Video device /dev/video0 not found"
        return 1
    fi
    
    # Check if rpicam-apps are available
    if command -v rpicam-still >/dev/null 2>&1; then
        print_status "rpicam-still is available"
        
        # List available cameras
        print_status "Listing available cameras:"
        rpicam-still --list-cameras 2>/dev/null || print_warning "Could not list cameras"
    else
        print_warning "rpicam-still not available, trying libcamera-still"
        
        if command -v libcamera-still >/dev/null 2>&1; then
            print_status "libcamera-still is available"
        else
            print_error "Neither rpicam-still nor libcamera-still is available"
            return 1
        fi
    fi
    
    return 0
}

# Function to test camera with rpicam-still
test_camera_rpicam() {
    print_header "Testing Camera with rpicam-still"
    
    print_status "Starting live preview (press Ctrl+C to stop)..."
    print_status "You should see camera preview on HDMI display"
    
    # Start live preview
    rpicam-still -t 0 --width 1280 --height 720 --inline --nopreview || {
        print_error "rpicam-still failed"
        return 1
    }
}

# Function to test camera with libcamera-still
test_camera_libcamera() {
    print_header "Testing Camera with libcamera-still"
    
    print_status "Starting live preview (press Ctrl+C to stop)..."
    print_status "You should see camera preview on HDMI display"
    
    # Start live preview
    libcamera-still -t 0 --width 1280 --height 720 --inline --nopreview || {
        print_error "libcamera-still failed"
        return 1
    }
}

# Function to capture test image
capture_test_image() {
    print_header "Capturing Test Image"
    
    timestamp=$(date +"%Y%m%d_%H%M%S")
    filename="arducam_test_${timestamp}.jpg"
    
    print_status "Capturing image: $filename"
    
    if command -v rpicam-still >/dev/null 2>&1; then
        rpicam-still -t 2000 -o "$filename" --width 1280 --height 720
    elif command -v libcamera-still >/dev/null 2>&1; then
        libcamera-still -t 2000 -o "$filename" --width 1280 --height 720
    else
        print_error "No camera capture tool available"
        return 1
    fi
    
    if [ -f "$filename" ]; then
        print_status "Image captured successfully: $filename"
        print_status "Image size: $(du -h "$filename" | cut -f1)"
    else
        print_error "Failed to capture image"
        return 1
    fi
}

# Function to test camera with OpenCV
test_camera_opencv() {
    print_header "Testing Camera with OpenCV"
    
    print_status "Starting OpenCV camera test..."
    print_status "This will show camera preview on HDMI display"
    
    # Create Python script for OpenCV test
    cat > /tmp/opencv_test.py << 'EOF'
#!/usr/bin/env python3
import cv2
import time

print("🎥 Starting OpenCV camera test...")
cap = cv2.VideoCapture(0, cv2.CAP_V4L2)

if not cap.isOpened():
    print("❌ Could not open camera")
    exit(1)

cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1280)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 720)
cap.set(cv2.CAP_PROP_FPS, 30)

print("✅ Camera opened successfully")
print("📱 Press 'q' to quit")

cv2.namedWindow('ArduCam IMX477 - OpenCV Test', cv2.WINDOW_NORMAL)
cv2.resizeWindow('ArduCam IMX477 - OpenCV Test', 1280, 720)

while True:
    ret, frame = cap.read()
    if ret:
        cv2.imshow('ArduCam IMX477 - OpenCV Test', frame)
        
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        print("⚠️  Failed to read frame")
        break

cap.release()
cv2.destroyAllWindows()
print("✅ OpenCV test completed")
EOF

    # Run OpenCV test
    python3 /tmp/opencv_test.py
    
    # Cleanup
    rm -f /tmp/opencv_test.py
}

# Main function
main() {
    print_header "ArduCam IMX477 HDMI Camera Test"
    print_status "This script tests the ArduCam IMX477 camera on HDMI display"
    print_status "Make sure HDMI monitor is connected to Raspberry Pi 5"
    
    # Check prerequisites
    check_hdmi_display || exit 1
    check_camera_config || exit 1
    check_camera_detection || exit 1
    
    print_header "Camera Test Options"
    echo "1. Test with rpicam-still (live preview)"
    echo "2. Test with libcamera-still (live preview)"
    echo "3. Test with OpenCV (live preview)"
    echo "4. Capture test image"
    echo "5. Run all tests"
    echo "6. Exit"
    
    read -p "Choose an option (1-6): " choice
    
    case $choice in
        1)
            test_camera_rpicam
            ;;
        2)
            test_camera_libcamera
            ;;
        3)
            test_camera_opencv
            ;;
        4)
            capture_test_image
            ;;
        5)
            print_header "Running All Tests"
            capture_test_image
            echo
            print_status "Press Enter to continue to live preview tests..."
            read
            test_camera_rpicam
            ;;
        6)
            print_status "Exiting..."
            exit 0
            ;;
        *)
            print_error "Invalid option"
            exit 1
            ;;
    esac
    
    print_header "Test Completed"
    print_status "Camera test finished successfully!"
    print_status "Check the HDMI display for camera preview"
}

# Run main function
main "$@"
