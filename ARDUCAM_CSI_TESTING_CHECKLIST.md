# 🎯 ArduCam CSI Camera Testing Checklist - Early AM Session

## 📋 Pre-Testing Setup (5 minutes)

- [ ] **Hardware Check**
  - [ ] ArduCam CSI camera connected to CSI port
  - [ ] Camera ribbon cable properly seated
  - [ ] Raspberry Pi 5 powered on and stable

- [ ] **Software Check**
  - [ ] ROS 2 Iron workspace sourced: `source install/setup.bash`
  - [ ] VNC connection established
  - [ ] Terminal ready for testing

## 🚀 Testing Sequence (15-20 minutes)

### 1. **Basic Camera Detection Test** (2-3 min)
```bash
python3 arducam_csi_test.py
```
**Expected**: ✅ All tests pass, camera preview shows on VNC

### 2. **ROS 2 Camera Launch Test** (3-4 min)
```bash
ros2 launch armpi_fpv_bringup arducam_csi.launch.py
```
**Expected**: ✅ Camera node starts, topics appear

### 3. **Camera Topic Verification** (2-3 min)
```bash
# In new terminal
ros2 topic list | grep arducam
ros2 topic echo /arducam_csi/image_raw
```
**Expected**: ✅ Topics visible, image data flowing

### 4. **Full System Integration Test** (5-8 min)
```bash
ros2 launch armpi_fpv_bringup bringup.launch.py
```
**Expected**: ✅ All nodes start, camera feeds vision applications

## 🔍 What to Look For

### **✅ Success Indicators**
- Camera preview window appears on VNC (1280x720)
- No error messages in terminal output
- ROS 2 topics publishing camera data
- Vision applications receiving camera feed

### **❌ Problem Indicators**
- "Could not open camera" errors
- No preview window on VNC
- Missing ROS 2 topics
- High CPU usage or low frame rate

## 🛠️ Quick Fixes

### **Camera Not Detected**
```bash
sudo modprobe bcm2835-v4l2
ls /dev/video*
```

### **No VNC Preview**
```bash
export DISPLAY=:1
# Check VNC server status
```

### **ROS 2 Issues**
```bash
# Source workspace again
source install/setup.bash
# Check package installation
ros2 pkg list | grep usb_cam
```

## 📊 Test Results Recording

**Test Date**: _____________
**Test Time**: _____________
**Tester**: _____________

| Test | Status | Notes |
|------|--------|-------|
| Camera Detection | ⭕ | |
| Live Preview | ⭕ | |
| ROS 2 Launch | ⭕ | |
| Topic Publishing | ⭕ | |
| Full System | ⭕ | |

**Overall Result**: ⭕ PASS / ⭕ FAIL
**Issues Found**: _________________________________
**Next Steps**: _________________________________

## 🎯 Success Criteria

**🎉 READY FOR ROBOT VISION TESTING** when:
- [ ] Camera preview shows 1280x720 resolution
- [ ] ROS 2 topics are publishing
- [ ] No error messages in logs
- [ ] Frame rate is stable (~30fps)

---

**🚀 Good luck with the testing! The ArduCam CSI should provide excellent vision capabilities for your robot applications.**
