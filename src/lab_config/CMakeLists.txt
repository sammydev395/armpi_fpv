cmake_minimum_required(VERSION 3.8)
project(lab_config)

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
find_package(rosidl_default_generators REQUIRED)

# Generate services
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/ChangeRange.srv"
  "srv/StashRange.srv"
  "srv/GetRange.srv"
  "srv/GetAllColorName.srv"
  DEPENDENCIES std_msgs
)

# Install Python scripts
install(PROGRAMS
  scripts/lab_config_manager.py
  scripts/main.py
  scripts/addcolor.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# Install config files
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}
)

# Install other files (UI files, icons)
install(FILES
  scripts/Ui.py
  scripts/Ui.ui
  scripts/addcolor.ui
  scripts/lab.ico
  DESTINATION share/${PROJECT_NAME}/scripts
)

ament_package()
