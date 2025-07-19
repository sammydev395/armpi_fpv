cmake_minimum_required(VERSION 3.8)
project(warehouse)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate messages and services
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Grasp.msg"
  "msg/Pose.msg"
  "msg/Rotate.msg"
  "srv/SetExchangeTarget.srv"
  "srv/SetInTarget.srv"
  "srv/SetOutTarget.srv"
  DEPENDENCIES std_msgs std_srvs geometry_msgs
)

# Install Python scripts
install(PROGRAMS
  scripts/exchange.py
  scripts/in.py
  scripts/out.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install image files
install(FILES
  scripts/mask1.jpg
  scripts/mask2.jpg
  DESTINATION share/${PROJECT_NAME}/scripts
)

ament_package()
