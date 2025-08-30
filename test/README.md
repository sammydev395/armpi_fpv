# 🧪 Test Scripts for ArduCam IMX477 Camera Integration

This folder contains all the testing scripts and tools for verifying the ArduCam IMX477 CSI camera integration with ROS 2 Iron.

## 📁 **Available Test Scripts**

### **1. `quick_hdmi_test.py` - Quick Camera Verification**
- **Purpose**: Fast camera test for HDMI display
- **Features**: Basic preview, frame counter, image save
- **Usage**: `python3 quick_hdmi_test.py`
- **Best for**: Quick verification that camera is working

### **2. `hdmi_camera_test.py` - Comprehensive Python Test**
- **Purpose**: Full-featured camera testing with recording
- **Features**: Live preview, video recording, performance metrics, image capture
- **Controls**: 'q'=quit, 's'=save image, 'c'=toggle video recording
- **Usage**: `python3 hdmi_camera_test.py`
- **Best for**: Thorough camera testing and performance analysis

### **3. `hdmi_camera_test.sh` - Interactive Bash Script**
- **Purpose**: Menu-driven testing with multiple camera tools
- **Features**: rpicam-still, libcamera-still, OpenCV, image capture
- **Options**: 6 different testing methods
- **Usage**: `./hdmi_camera_test.sh`
- **Best for**: Testing different camera interfaces and tools

### **4. `arducam_csi_test.py` - ROS 2 Integration Test**
- **Purpose**: Test camera integration with ROS 2
- **Features**: Device detection, camera properties, ROS 2 compatibility
- **Usage**: `python3 arducam_csi_test.py`
- **Best for**: Verifying ROS 2 camera integration

## 🚀 **Quick Start Guide**

### **Prerequisites**
- HDMI monitor connected to Raspberry Pi 5
- ArduCam IMX477 camera properly configured
- ROS 2 Iron workspace sourced

### **Step 1: Quick Verification**
```bash
cd test
python3 quick_hdmi_test.py
```
**Expected**: Camera preview window appears on HDMI display

### **Step 2: Comprehensive Testing**
```bash
cd test
python3 hdmi_camera_test.py
```
**Expected**: Full camera functionality with recording capabilities

### **Step 3: Interactive Testing**
```bash
cd test
./hdmi_camera_test.sh
```
**Expected**: Menu-driven testing with multiple options

### **Step 4: ROS 2 Integration**
```bash
cd test
python3 arducam_csi_test.py
```
**Expected**: ROS 2 compatibility verification

## 📊 **Test Results**

### **Success Indicators**
- ✅ Camera preview window appears on HDMI display
- ✅ 1280x720 resolution working
- ✅ 30 FPS maintained
- ✅ Image capture working
- ✅ Video recording functional
- ✅ No error messages

### **Common Issues**
- ❌ No preview window: Check HDMI connection and display settings
- ❌ Camera not detected: Verify IMX477 configuration in `/boot/firmware/config.txt`
- ❌ Low frame rate: Check camera format and CPU usage
- ❌ Poor image quality: Verify lens focus and lighting

## 🔧 **Troubleshooting**

### **Camera Not Working**
```bash
# Check camera configuration
cat /boot/firmware/config.txt | grep imx477

# Check camera device
ls -la /dev/video*

# Check camera detection
rpicam-still --list-cameras
```

### **No HDMI Display**
```bash
# Set display environment
export DISPLAY=:0

# Check X11 status
xset q

# Verify HDMI connection
```
### **Performance Issues**
```bash
# Monitor system resources
htop

# Check camera format
v4l2-ctl --device /dev/video0 --list-formats-ext

# Verify CSI connection
```

## 📚 **Documentation**

### **Related Files**
- **Comprehensive Testing Guide**: `../docs/COMPREHENSIVE_TESTING_GUIDE.md`
- **Testing Checklist**: `../docs/ARDUCAM_CSI_TESTING_CHECKLIST.md`
- **Migration Analysis**: `../docs/ROS1_TO_ROS2_MIGRATION_ANALYSIS.md`

### **Launch Files**
- **Camera Launch**: `../src/armpi_fpv_bringup/launch/arducam_csi.launch.py`
- **HDMI Launch**: `../src/armpi_fpv_bringup/launch/arducam_csi_hdmi.launch.py`

## 🎯 **Testing Workflow**

1. **Hardware Check**: Verify camera connection and configuration
2. **Quick Test**: Use `quick_hdmi_test.py` for basic verification
3. **Comprehensive Test**: Use `hdmi_camera_test.py` for full testing
4. **Tool Testing**: Use `hdmi_camera_test.sh` for different interfaces
5. **ROS 2 Test**: Use `arducam_csi_test.py` for integration verification
6. **Document Results**: Record findings in test documentation

## 🎉 **Ready for Testing!**

All test scripts are ready to use. Start with the quick test to verify basic functionality, then proceed to comprehensive testing as needed.

**Good luck with your camera testing!** 📷✨
