cmake_minimum_required(VERSION 3.8)
project(hiwonder_servo_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# Install Python package
ament_python_install_package(${PROJECT_NAME} PACKAGE_DIR src/${PROJECT_NAME})

# Install Python scripts
install(PROGRAMS
  src/hiwonder_servo_driver/hiwonder_servo_io.py
  src/hiwonder_servo_driver/hiwonder_servo_serialproxy.py
  DESTINATION lib/${PROJECT_NAME}
)

# Export dependencies
ament_export_dependencies(rclpy diagnostic_msgs std_msgs)
