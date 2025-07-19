cmake_minimum_required(VERSION 3.8)
project(asr_control)

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
find_package(armpi_fpv_common REQUIRED)
find_package(std_srvs REQUIRED)

# Install Python scripts
install(PROGRAMS
  scripts/asr_control_sorting.py
  scripts/asr_demo.py
  scripts/interaction.py
  scripts/tts_demo.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
