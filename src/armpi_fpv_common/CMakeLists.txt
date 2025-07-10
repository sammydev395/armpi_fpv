cmake_minimum_required(VERSION 3.8)
project(armpi_fpv_common)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

install(
  DIRECTORY src/armpi_fpv_common/
  DESTINATION lib/python3.12/site-packages/armpi_fpv_common
  PATTERN "__pycache__" EXCLUDE
)

ament_package()
