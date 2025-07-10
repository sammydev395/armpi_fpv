cmake_minimum_required(VERSION 3.8)
project(hiwonder_servo_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(action_msgs REQUIRED)

# Declare message files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointState.msg"
  "msg/ServoState.msg"
  "msg/ServoStateList.msg"
  "msg/CommandDuration.msg"
  "msg/CommandDurationList.msg"
  "msg/RawIdPosDur.msg"
  "msg/MultiRawIdPosDur.msg"
  "action/ActionGroupRunner.action"
  DEPENDENCIES
    std_msgs
    action_msgs
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime)
