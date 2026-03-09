// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/srv/aubo_arm_control.hpp"


#ifndef AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__BUILDER_HPP_
#define AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aubo_ros2_common/srv/detail/aubo_arm_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aubo_ros2_common
{

namespace srv
{

namespace builder
{

class Init_AuboArmControl_Request_speed_fraction
{
public:
  explicit Init_AuboArmControl_Request_speed_fraction(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::srv::AuboArmControl_Request speed_fraction(::aubo_ros2_common::srv::AuboArmControl_Request::_speed_fraction_type arg)
  {
    msg_.speed_fraction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_joints
{
public:
  explicit Init_AuboArmControl_Request_joints(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Request_speed_fraction joints(::aubo_ros2_common::srv::AuboArmControl_Request::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_AuboArmControl_Request_speed_fraction(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_collision_level
{
public:
  explicit Init_AuboArmControl_Request_collision_level(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Request_joints collision_level(::aubo_ros2_common::srv::AuboArmControl_Request::_collision_level_type arg)
  {
    msg_.collision_level = std::move(arg);
    return Init_AuboArmControl_Request_joints(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_payload
{
public:
  explicit Init_AuboArmControl_Request_payload(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Request_collision_level payload(::aubo_ros2_common::srv::AuboArmControl_Request::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return Init_AuboArmControl_Request_collision_level(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_tcp_offset
{
public:
  explicit Init_AuboArmControl_Request_tcp_offset(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Request_payload tcp_offset(::aubo_ros2_common::srv::AuboArmControl_Request::_tcp_offset_type arg)
  {
    msg_.tcp_offset = std::move(arg);
    return Init_AuboArmControl_Request_payload(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_type
{
public:
  explicit Init_AuboArmControl_Request_type(::aubo_ros2_common::srv::AuboArmControl_Request & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Request_tcp_offset type(::aubo_ros2_common::srv::AuboArmControl_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AuboArmControl_Request_tcp_offset(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

class Init_AuboArmControl_Request_cmd
{
public:
  Init_AuboArmControl_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboArmControl_Request_type cmd(::aubo_ros2_common::srv::AuboArmControl_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_AuboArmControl_Request_type(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::srv::AuboArmControl_Request>()
{
  return aubo_ros2_common::srv::builder::Init_AuboArmControl_Request_cmd();
}

}  // namespace aubo_ros2_common


namespace aubo_ros2_common
{

namespace srv
{

namespace builder
{

class Init_AuboArmControl_Response_result_code
{
public:
  explicit Init_AuboArmControl_Response_result_code(::aubo_ros2_common::srv::AuboArmControl_Response & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::srv::AuboArmControl_Response result_code(::aubo_ros2_common::srv::AuboArmControl_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Response msg_;
};

class Init_AuboArmControl_Response_result
{
public:
  Init_AuboArmControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboArmControl_Response_result_code result(::aubo_ros2_common::srv::AuboArmControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_AuboArmControl_Response_result_code(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::srv::AuboArmControl_Response>()
{
  return aubo_ros2_common::srv::builder::Init_AuboArmControl_Response_result();
}

}  // namespace aubo_ros2_common


namespace aubo_ros2_common
{

namespace srv
{

namespace builder
{

class Init_AuboArmControl_Event_response
{
public:
  explicit Init_AuboArmControl_Event_response(::aubo_ros2_common::srv::AuboArmControl_Event & msg)
  : msg_(msg)
  {}
  ::aubo_ros2_common::srv::AuboArmControl_Event response(::aubo_ros2_common::srv::AuboArmControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Event msg_;
};

class Init_AuboArmControl_Event_request
{
public:
  explicit Init_AuboArmControl_Event_request(::aubo_ros2_common::srv::AuboArmControl_Event & msg)
  : msg_(msg)
  {}
  Init_AuboArmControl_Event_response request(::aubo_ros2_common::srv::AuboArmControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AuboArmControl_Event_response(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Event msg_;
};

class Init_AuboArmControl_Event_info
{
public:
  Init_AuboArmControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuboArmControl_Event_request info(::aubo_ros2_common::srv::AuboArmControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AuboArmControl_Event_request(msg_);
  }

private:
  ::aubo_ros2_common::srv::AuboArmControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aubo_ros2_common::srv::AuboArmControl_Event>()
{
  return aubo_ros2_common::srv::builder::Init_AuboArmControl_Event_info();
}

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__SRV__DETAIL__AUBO_ARM_CONTROL__BUILDER_HPP_
