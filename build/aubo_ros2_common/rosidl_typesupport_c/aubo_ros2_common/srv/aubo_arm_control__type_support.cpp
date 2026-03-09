// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"
#include "aubo_ros2_common/srv/detail/aubo_arm_control__type_support.h"
#include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aubo_ros2_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuboArmControl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuboArmControl_Request_type_support_ids_t;

static const _AuboArmControl_Request_type_support_ids_t _AuboArmControl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuboArmControl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuboArmControl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuboArmControl_Request_type_support_symbol_names_t _AuboArmControl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, srv, AuboArmControl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Request)),
  }
};

typedef struct _AuboArmControl_Request_type_support_data_t
{
  void * data[2];
} _AuboArmControl_Request_type_support_data_t;

static _AuboArmControl_Request_type_support_data_t _AuboArmControl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuboArmControl_Request_message_typesupport_map = {
  2,
  "aubo_ros2_common",
  &_AuboArmControl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AuboArmControl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AuboArmControl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuboArmControl_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuboArmControl_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aubo_ros2_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aubo_ros2_common, srv, AuboArmControl_Request)() {
  return &::aubo_ros2_common::srv::rosidl_typesupport_c::AuboArmControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__type_support.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aubo_ros2_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuboArmControl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuboArmControl_Response_type_support_ids_t;

static const _AuboArmControl_Response_type_support_ids_t _AuboArmControl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuboArmControl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuboArmControl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuboArmControl_Response_type_support_symbol_names_t _AuboArmControl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, srv, AuboArmControl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Response)),
  }
};

typedef struct _AuboArmControl_Response_type_support_data_t
{
  void * data[2];
} _AuboArmControl_Response_type_support_data_t;

static _AuboArmControl_Response_type_support_data_t _AuboArmControl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuboArmControl_Response_message_typesupport_map = {
  2,
  "aubo_ros2_common",
  &_AuboArmControl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AuboArmControl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AuboArmControl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuboArmControl_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuboArmControl_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aubo_ros2_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aubo_ros2_common, srv, AuboArmControl_Response)() {
  return &::aubo_ros2_common::srv::rosidl_typesupport_c::AuboArmControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__type_support.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aubo_ros2_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuboArmControl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuboArmControl_Event_type_support_ids_t;

static const _AuboArmControl_Event_type_support_ids_t _AuboArmControl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuboArmControl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuboArmControl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuboArmControl_Event_type_support_symbol_names_t _AuboArmControl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, srv, AuboArmControl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl_Event)),
  }
};

typedef struct _AuboArmControl_Event_type_support_data_t
{
  void * data[2];
} _AuboArmControl_Event_type_support_data_t;

static _AuboArmControl_Event_type_support_data_t _AuboArmControl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuboArmControl_Event_message_typesupport_map = {
  2,
  "aubo_ros2_common",
  &_AuboArmControl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AuboArmControl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AuboArmControl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuboArmControl_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuboArmControl_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aubo_ros2_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, aubo_ros2_common, srv, AuboArmControl_Event)() {
  return &::aubo_ros2_common::srv::rosidl_typesupport_c::AuboArmControl_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace aubo_ros2_common
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AuboArmControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuboArmControl_type_support_ids_t;

static const _AuboArmControl_type_support_ids_t _AuboArmControl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuboArmControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuboArmControl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuboArmControl_type_support_symbol_names_t _AuboArmControl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aubo_ros2_common, srv, AuboArmControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aubo_ros2_common, srv, AuboArmControl)),
  }
};

typedef struct _AuboArmControl_type_support_data_t
{
  void * data[2];
} _AuboArmControl_type_support_data_t;

static _AuboArmControl_type_support_data_t _AuboArmControl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuboArmControl_service_typesupport_map = {
  2,
  "aubo_ros2_common",
  &_AuboArmControl_service_typesupport_ids.typesupport_identifier[0],
  &_AuboArmControl_service_typesupport_symbol_names.symbol_name[0],
  &_AuboArmControl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AuboArmControl_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuboArmControl_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AuboArmControl_Request_message_type_support_handle,
  &AuboArmControl_Response_message_type_support_handle,
  &AuboArmControl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aubo_ros2_common,
    srv,
    AuboArmControl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aubo_ros2_common,
    srv,
    AuboArmControl
  ),
  &aubo_ros2_common__srv__AuboArmControl__get_type_hash,
  &aubo_ros2_common__srv__AuboArmControl__get_type_description,
  &aubo_ros2_common__srv__AuboArmControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace aubo_ros2_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, aubo_ros2_common, srv, AuboArmControl)() {
  return &::aubo_ros2_common::srv::rosidl_typesupport_c::AuboArmControl_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
