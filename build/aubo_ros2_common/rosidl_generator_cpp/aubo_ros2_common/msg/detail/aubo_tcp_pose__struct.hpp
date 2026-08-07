// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_tcp_pose.hpp"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_HPP_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
// Member 'target_rotation'
// Member 'actual_position'
// Member 'actual_rotation'
#include "aubo_ros2_common/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aubo_ros2_common__msg__AuboTcpPose __attribute__((deprecated))
#else
# define DEPRECATED__aubo_ros2_common__msg__AuboTcpPose __declspec(deprecated)
#endif

namespace aubo_ros2_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuboTcpPose_
{
  using Type = AuboTcpPose_<ContainerAllocator>;

  explicit AuboTcpPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init),
    target_rotation(_init),
    actual_position(_init),
    actual_rotation(_init)
  {
    (void)_init;
  }

  explicit AuboTcpPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_alloc, _init),
    target_rotation(_alloc, _init),
    actual_position(_alloc, _init),
    actual_rotation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_position_type =
    aubo_ros2_common::msg::Vector3_<ContainerAllocator>;
  _target_position_type target_position;
  using _target_rotation_type =
    aubo_ros2_common::msg::Vector3_<ContainerAllocator>;
  _target_rotation_type target_rotation;
  using _actual_position_type =
    aubo_ros2_common::msg::Vector3_<ContainerAllocator>;
  _actual_position_type actual_position;
  using _actual_rotation_type =
    aubo_ros2_common::msg::Vector3_<ContainerAllocator>;
  _actual_rotation_type actual_rotation;

  // setters for named parameter idiom
  Type & set__target_position(
    const aubo_ros2_common::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__target_rotation(
    const aubo_ros2_common::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->target_rotation = _arg;
    return *this;
  }
  Type & set__actual_position(
    const aubo_ros2_common::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->actual_position = _arg;
    return *this;
  }
  Type & set__actual_rotation(
    const aubo_ros2_common::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->actual_rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aubo_ros2_common__msg__AuboTcpPose
    std::shared_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aubo_ros2_common__msg__AuboTcpPose
    std::shared_ptr<aubo_ros2_common::msg::AuboTcpPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuboTcpPose_ & other) const
  {
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->target_rotation != other.target_rotation) {
      return false;
    }
    if (this->actual_position != other.actual_position) {
      return false;
    }
    if (this->actual_rotation != other.actual_rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuboTcpPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuboTcpPose_

// alias to use template instance with default allocator
using AuboTcpPose =
  aubo_ros2_common::msg::AuboTcpPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aubo_ros2_common

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_TCP_POSE__STRUCT_HPP_
