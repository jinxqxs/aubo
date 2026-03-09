// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef AUBO_ROS2_COMMON__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define AUBO_ROS2_COMMON__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_aubo_ros2_common __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_aubo_ros2_common __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_aubo_ros2_common __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_aubo_ros2_common __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_aubo_ros2_common
    #define ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common ROSIDL_GENERATOR_C_EXPORT_aubo_ros2_common
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common ROSIDL_GENERATOR_C_IMPORT_aubo_ros2_common
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_aubo_ros2_common __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_aubo_ros2_common
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
