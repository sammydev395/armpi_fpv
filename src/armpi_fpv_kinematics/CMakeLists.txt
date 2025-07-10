cmake_minimum_required(VERSION 3.8)
project(armpi_fpv_kinematics)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate messages and services
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointRange.msg"
  "msg/JointsRange.msg"
  "msg/Link.msg"
  "srv/SetLink.srv"
  "srv/GetLink.srv"
  "srv/SetJointRange.srv"
  "srv/GetJointRange.srv"
  "srv/SetJointValue.srv"
  "srv/SetRobotPose.srv"
  "srv/GetRobotPose.srv"
  DEPENDENCIES geometry_msgs
)

# Re-enable Python package installation
ament_python_install_package(${PROJECT_NAME})

# Install Python scripts
install(PROGRAMS
  scripts/search_kinematics_solutions_node.py
  DESTINATION lib/${PROJECT_NAME}
)

# Export dependencies
ament_export_dependencies(rclpy geometry_msgs)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)



