cmake_minimum_required(VERSION 3.8)
project(hiwonder_servo_controllers)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(control_msgs REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(hiwonder_servo_msgs REQUIRED)
find_package(hiwonder_servo_driver REQUIRED)
find_package(std_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(rclpy_action REQUIRED)

# Install Python package
ament_python_install_package(${PROJECT_NAME} PACKAGE_DIR src/${PROJECT_NAME})

# Install Python scripts
install(PROGRAMS
  scripts/controller_manager.py
  scripts/joint_state_publisher.py
  DESTINATION lib/${PROJECT_NAME}
)

# Export dependencies
ament_export_dependencies(rclpy control_msgs diagnostic_msgs hiwonder_servo_msgs hiwonder_servo_driver std_msgs trajectory_msgs action_msgs rclpy_action)
