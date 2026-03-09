// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__functions.h"
#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aubo_ros2_common
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AuboTcpPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aubo_ros2_common::msg::AuboTcpPose(_init);
}

void AuboTcpPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aubo_ros2_common::msg::AuboTcpPose *>(message_memory);
  typed_message->~AuboTcpPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuboTcpPose_message_member_array[4] = {
  {
    "target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aubo_ros2_common::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboTcpPose, target_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aubo_ros2_common::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboTcpPose, target_rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "actual_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aubo_ros2_common::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboTcpPose, actual_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "actual_rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aubo_ros2_common::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aubo_ros2_common::msg::AuboTcpPose, actual_rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuboTcpPose_message_members = {
  "aubo_ros2_common::msg",  // message namespace
  "AuboTcpPose",  // message name
  4,  // number of fields
  sizeof(aubo_ros2_common::msg::AuboTcpPose),
  false,  // has_any_key_member_
  AuboTcpPose_message_member_array,  // message members
  AuboTcpPose_init_function,  // function to initialize message memory (memory has to be allocated)
  AuboTcpPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuboTcpPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuboTcpPose_message_members,
  get_message_typesupport_handle_function,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_hash,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description,
  &aubo_ros2_common__msg__AuboTcpPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aubo_ros2_common


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aubo_ros2_common::msg::AuboTcpPose>()
{
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::AuboTcpPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aubo_ros2_common, msg, AuboTcpPose)() {
  return &::aubo_ros2_common::msg::rosidl_typesupport_introspection_cpp::AuboTcpPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
