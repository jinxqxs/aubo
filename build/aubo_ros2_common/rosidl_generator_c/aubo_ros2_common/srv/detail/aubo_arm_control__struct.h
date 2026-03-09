// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/srv/aubo_arm_control.h"


#ifndef AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__STRUCT_H_
#define AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'tcp_offset'
// Member 'joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AuboArmControl in the package aubo_ros2_common.
typedef struct aubo_ros2_common__srv__AuboArmControl_Request
{
  rosidl_runtime_c__String cmd;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__double__Sequence tcp_offset;
  double payload;
  int16_t collision_level;
  rosidl_runtime_c__double__Sequence joints;
  double speed_fraction;
} aubo_ros2_common__srv__AuboArmControl_Request;

// Struct for a sequence of aubo_ros2_common__srv__AuboArmControl_Request.
typedef struct aubo_ros2_common__srv__AuboArmControl_Request__Sequence
{
  aubo_ros2_common__srv__AuboArmControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__srv__AuboArmControl_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_code'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AuboArmControl in the package aubo_ros2_common.
typedef struct aubo_ros2_common__srv__AuboArmControl_Response
{
  bool result;
  rosidl_runtime_c__String result_code;
} aubo_ros2_common__srv__AuboArmControl_Response;

// Struct for a sequence of aubo_ros2_common__srv__AuboArmControl_Response.
typedef struct aubo_ros2_common__srv__AuboArmControl_Response__Sequence
{
  aubo_ros2_common__srv__AuboArmControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__srv__AuboArmControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  aubo_ros2_common__srv__AuboArmControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  aubo_ros2_common__srv__AuboArmControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AuboArmControl in the package aubo_ros2_common.
typedef struct aubo_ros2_common__srv__AuboArmControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence request;
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence response;
} aubo_ros2_common__srv__AuboArmControl_Event;

// Struct for a sequence of aubo_ros2_common__srv__AuboArmControl_Event.
typedef struct aubo_ros2_common__srv__AuboArmControl_Event__Sequence
{
  aubo_ros2_common__srv__AuboArmControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aubo_ros2_common__srv__AuboArmControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__STRUCT_H_
