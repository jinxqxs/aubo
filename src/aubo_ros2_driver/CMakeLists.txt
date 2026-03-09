cmake_minimum_required(VERSION 3.12)
project(aubo_ros2_driver)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(control_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(aubo_ros2_common REQUIRED)
find_package(sensor_msgs REQUIRED)

set(aubo_sdk_DIR lib/aubo_sdk-0.23.1-Linux_x86_64+71831e1/lib/cmake/aubo_sdk)
message("aubo_sdk_DIR" ${aubo_sdk_SOURCE_DIR}/lib/cmake/aubo_sdk)
find_package(aubo_sdk REQUIRED)

add_executable(aubo_ros2_driver src/aubo_sdk/aubo_sdk.cpp src/aubo_sdk/aubo_thread.cpp src/aubo_ros2_driver.cpp src/main.cpp)

target_include_directories(aubo_ros2_driver
  PRIVATE
  include
  ${aubo_sdk_SOURCE_DIR}/include
)

target_link_libraries(aubo_ros2_driver aubo_sdk::aubo_sdk)

ament_target_dependencies(aubo_ros2_driver
  rclcpp
  control_msgs trajectory_msgs aubo_ros2_common sensor_msgs)

install(DIRECTORY
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/aubo_sdk-0.23.1-Linux_x86_64+71831e1/lib/
  DESTINATION lib/
)

install(TARGETS
  aubo_ros2_driver
  DESTINATION lib/${PROJECT_NAME})

ament_package()
