cmake_minimum_required(VERSION 3.8)
project(ros_robot_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate messages and services
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Sbus.msg"
  "msg/ButtonState.msg"
  "msg/LedState.msg"
  "msg/RGBState.msg"
  "msg/RGBsState.msg"
  "msg/BuzzerState.msg"
  "msg/MotorState.msg"
  "msg/OLEDState.msg"
  "msg/MotorsState.msg"
  "msg/BusServoState.msg"
  "msg/GetBusServoCmd.msg"
  "msg/SetBusServoState.msg"
  "msg/PWMServoState.msg"
  "msg/GetPWMServoCmd.msg"
  "msg/SetPWMServoState.msg"
  "srv/GetBusServoState.srv"
  "srv/GetPWMServoState.srv"
  DEPENDENCIES
    std_msgs
    geometry_msgs
)

# Install Python package
ament_python_install_package(${PROJECT_NAME} PACKAGE_DIR src/${PROJECT_NAME})

# Install Python scripts
install(PROGRAMS
  scripts/ros_robot_controller_node.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Export dependencies
ament_export_dependencies(rclpy std_msgs geometry_msgs)

ament_package()
