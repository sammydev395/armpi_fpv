# ROS 2 Testing Guide - Armpi FPV Migration

## 🎉 Migration Status: COMPLETE

**All 17 packages successfully migrated from ROS 1 (Noetic) to ROS 2 (Jazzy)**

### Quick Setup Commands (for new machine):

```bash
# Clone the repository
git clone https://github.com/sammydev395/armpi_fpv.git
cd armpi_fpv

# Source ROS 2 Jazzy
source /opt/ros/jazzy/setup.bash

# Build all packages
colcon build

# Source the workspace
source install/setup.bash
```

## 📋 Testing Checklist

### Category 1: Core Infrastructure Testing 🔧
**Priority**: Critical
**Status**: ⏳ Pending

- [ ] **hiwonder_servo_msgs** - Message generation and publishing
- [ ] **hiwonder_servo_driver** - Hardware communication  
- [ ] **hiwonder_servo_controllers** - Servo control functionality
- [ ] **armpi_fpv_description** - Robot model visualization
- [ ] **armpi_fpv_common** - Common utilities and functions

**Test Commands:**
```bash
# Test message publishing
ros2 topic pub /test_topic hiwonder_servo_msgs/msg/JointState

# Test robot description
ros2 launch armpi_fpv_description display.launch.py

# Test servo controllers
ros2 run hiwonder_servo_controllers controller_manager.py
```

### Category 2: Control System Testing 🎮
**Priority**: High
**Status**: ⏳ Pending

- [ ] **ros_robot_controller** - Main robot control
- [ ] **armpi_fpv_kinematics** - Motion planning
- [ ] **armpi_fpv_bringup** - System startup

**Test Commands:**
```bash
# Test main controller
ros2 launch ros_robot_controller ros_robot_controller_node.launch.py

# Test kinematics
ros2 run armpi_fpv_kinematics kinematics_node.py

# Test full system startup
ros2 launch armpi_fpv_bringup bringup.launch.py
```

### Category 3: Configuration & Multi-Control Testing ⚙️
**Priority**: Medium
**Status**: ⏳ Pending

- [ ] **lab_config** - Configuration management
- [ ] **multi_control** - Multi-robot synchronization
- [ ] **face_detect** - Face detection

**Test Commands:**
```bash
# Test lab configuration
ros2 launch lab_config lab_config_manager.launch.py

# Test multi-robot control
ros2 run multi_control master.py

# Test face detection
ros2 run face_detect face.py
```

### Category 4: Voice & Speech Testing 🗣️
**Priority**: Medium
**Status**: ⏳ Pending

- [ ] **asr_control** - Speech recognition and TTS

**Test Commands:**
```bash
# Test voice control
ros2 run asr_control asr_control_sorting.py
ros2 run asr_control asr_demo.py
ros2 run asr_control tts_demo.py
```

### Category 5: Computer Vision Testing 👁️
**Priority**: High
**Status**: ⏳ Pending

- [ ] **object_tracking** - Object tracking
- [ ] **object_sorting** - Color-based sorting
- [ ] **object_pallezting** - Palletizing operations
- [ ] **warehouse** - Warehouse operations

**Test Commands:**
```bash
# Test object tracking
ros2 run object_tracking tracking.py

# Test object sorting
ros2 run object_sorting sorting.py

# Test palletizing
ros2 run object_pallezting pallezting.py

# Test warehouse operations
ros2 run warehouse in.py
ros2 run warehouse out.py
ros2 run warehouse exchange.py
```

### Category 6: Advanced Planning Testing 🤖
**Priority**: Low
**Status**: ⏳ Pending

- [ ] **armpi_fpv_moveit_config** - MoveIt 2 integration

**Test Commands:**
```bash
# Test MoveIt 2
ros2 launch armpi_fpv_moveit_config demo.launch.py
ros2 launch armpi_fpv_moveit_config move_group.launch.py
```

## 🔍 Debugging Commands

### Basic System Checks:
```bash
# Check if package is built
ros2 pkg list | grep armpi_fpv

# Check if nodes are available
ros2 node list

# Check if topics are available
ros2 topic list

# Check if services are available
ros2 service list

# Check if actions are available
ros2 action list
```

### Debugging Tools:
```bash
# View node info
ros2 node info /node_name

# View topic info
ros2 topic info /topic_name

# View service info
ros2 service info /service_name

# Monitor topics
ros2 topic echo /topic_name

# Monitor services
ros2 service call /service_name service_type
```

## 📊 Migration Summary

### Successfully Migrated Packages (17/17):
1. ✅ **hiwonder_servo_msgs** - Message definitions
2. ✅ **hiwonder_servo_driver** - Hardware interface
3. ✅ **hiwonder_servo_controllers** - Control systems
4. ✅ **armpi_fpv_description** - Robot description
5. ✅ **armpi_fpv_bringup** - Launch configuration
6. ✅ **armpi_fpv_kinematics** - Motion planning
7. ✅ **armpi_fpv_common** - Common utilities
8. ✅ **ros_robot_controller** - Main controller
9. ✅ **lab_config** - Configuration management
10. ✅ **face_detect** - Face detection
11. ✅ **asr_control** - Speech recognition
12. ✅ **multi_control** - Multi-device control
13. ✅ **object_tracking** - Object tracking
14. ✅ **object_sorting** - Sorting algorithms
15. ✅ **object_pallezting** - Palletizing
16. ✅ **warehouse** - Warehouse operations
17. ✅ **armpi_fpv_moveit_config** - Advanced planning

## ⚠️ Known Issues to Monitor

1. **Build Dependencies**: Some packages require specific build order
2. **Python Package Conflicts**: Some packages may have import conflicts
3. **Launch File Compatibility**: Some launch files may need parameter adjustments
4. **Hardware Interface Timing**: Servo control timing may need adjustment
5. **Vision Processing Performance**: OpenCV integration may need optimization

## 🎯 Testing Success Criteria

### Functional Testing:
- [ ] All packages launch without errors
- [ ] All nodes start and run correctly
- [ ] All services respond to requests
- [ ] All topics publish and subscribe correctly
- [ ] All launch files execute successfully

### Integration Testing:
- [ ] Multi-package systems work together
- [ ] Dependencies are resolved correctly
- [ ] Message passing between packages works
- [ ] Parameter sharing functions correctly

### Performance Testing:
- [ ] Startup times are acceptable
- [ ] Memory usage is reasonable
- [ ] CPU usage is within limits
- [ ] Real-time requirements are met

## 📝 Test Documentation Template

For each test, document:
- [ ] Test date and time
- [ ] Test environment (hardware/software)
- [ ] Test commands executed
- [ ] Expected vs actual results
- [ ] Any errors or warnings
- [ ] Performance metrics
- [ ] Recommendations for fixes

## 🚀 Quick Start for Tomorrow

1. **Setup Environment:**
   ```bash
   source /opt/ros/jazzy/setup.bash
   source install/setup.bash
   ```

2. **Start with Category 1 (Core Infrastructure):**
   ```bash
   ros2 launch armpi_fpv_description display.launch.py
   ```

3. **Test Basic Functionality:**
   ```bash
   ros2 topic list
   ros2 node list
   ```

4. **Progress through categories systematically**

## 📞 Emergency Contacts

- **Repository**: https://github.com/sammydev395/armpi_fpv.git
- **Migration Analysis**: `docs/ROS1_TO_ROS2_MIGRATION_ANALYSIS.md`
- **This Testing Guide**: `docs/ROS2_TESTING_GUIDE.md`

---

**Good luck with testing tomorrow! The migration is complete and ready for validation.** 🎉 