// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aubo_ros2_common/msg/aubo_arm_states.h"


#ifndef AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__FUNCTIONS_H_
#define AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "aubo_ros2_common/msg/rosidl_generator_c__visibility_control.h"

#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.h"

/// Initialize msg/AuboArmStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aubo_ros2_common__msg__AuboArmStates
 * )) before or use
 * aubo_ros2_common__msg__AuboArmStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__init(aubo_ros2_common__msg__AuboArmStates * msg);

/// Finalize msg/AuboArmStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
void
aubo_ros2_common__msg__AuboArmStates__fini(aubo_ros2_common__msg__AuboArmStates * msg);

/// Create msg/AuboArmStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aubo_ros2_common__msg__AuboArmStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
aubo_ros2_common__msg__AuboArmStates *
aubo_ros2_common__msg__AuboArmStates__create(void);

/// Destroy msg/AuboArmStates message.
/**
 * It calls
 * aubo_ros2_common__msg__AuboArmStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
void
aubo_ros2_common__msg__AuboArmStates__destroy(aubo_ros2_common__msg__AuboArmStates * msg);

/// Check for msg/AuboArmStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__are_equal(const aubo_ros2_common__msg__AuboArmStates * lhs, const aubo_ros2_common__msg__AuboArmStates * rhs);

/// Copy a msg/AuboArmStates message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__copy(
  const aubo_ros2_common__msg__AuboArmStates * input,
  aubo_ros2_common__msg__AuboArmStates * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__AuboArmStates__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__AuboArmStates__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__AuboArmStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__AuboArmStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/AuboArmStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * aubo_ros2_common__msg__AuboArmStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__Sequence__init(aubo_ros2_common__msg__AuboArmStates__Sequence * array, size_t size);

/// Finalize array of msg/AuboArmStates messages.
/**
 * It calls
 * aubo_ros2_common__msg__AuboArmStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
void
aubo_ros2_common__msg__AuboArmStates__Sequence__fini(aubo_ros2_common__msg__AuboArmStates__Sequence * array);

/// Create array of msg/AuboArmStates messages.
/**
 * It allocates the memory for the array and calls
 * aubo_ros2_common__msg__AuboArmStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
aubo_ros2_common__msg__AuboArmStates__Sequence *
aubo_ros2_common__msg__AuboArmStates__Sequence__create(size_t size);

/// Destroy array of msg/AuboArmStates messages.
/**
 * It calls
 * aubo_ros2_common__msg__AuboArmStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
void
aubo_ros2_common__msg__AuboArmStates__Sequence__destroy(aubo_ros2_common__msg__AuboArmStates__Sequence * array);

/// Check for msg/AuboArmStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__Sequence__are_equal(const aubo_ros2_common__msg__AuboArmStates__Sequence * lhs, const aubo_ros2_common__msg__AuboArmStates__Sequence * rhs);

/// Copy an array of msg/AuboArmStates messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
bool
aubo_ros2_common__msg__AuboArmStates__Sequence__copy(
  const aubo_ros2_common__msg__AuboArmStates__Sequence * input,
  aubo_ros2_common__msg__AuboArmStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUBO_ROS2_COMMON__MSG__DETAIL__AUBO_ARM_STATES__FUNCTIONS_H_
