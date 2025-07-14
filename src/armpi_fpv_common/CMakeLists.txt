cmake_minimum_required(VERSION 3.8)
project(armpi_fpv_common)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

# Install Python package
ament_python_install_package(${PROJECT_NAME} PACKAGE_DIR src/${PROJECT_NAME})

# Export dependencies
ament_export_dependencies(rclpy std_msgs sensor_msgs)

ament_package()
