// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aubo_ros2_common:msg/AuboJointStates.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/msg/detail/aubo_joint_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_current`
// Member `actual_current`
// Member `target_position`
// Member `actual_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
aubo_ros2_common__msg__AuboJointStates__init(aubo_ros2_common__msg__AuboJointStates * msg)
{
  if (!msg) {
    return false;
  }
  // target_current
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->target_current, 0)) {
    aubo_ros2_common__msg__AuboJointStates__fini(msg);
    return false;
  }
  // actual_current
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->actual_current, 0)) {
    aubo_ros2_common__msg__AuboJointStates__fini(msg);
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->target_position, 0)) {
    aubo_ros2_common__msg__AuboJointStates__fini(msg);
    return false;
  }
  // actual_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->actual_position, 0)) {
    aubo_ros2_common__msg__AuboJointStates__fini(msg);
    return false;
  }
  return true;
}

void
aubo_ros2_common__msg__AuboJointStates__fini(aubo_ros2_common__msg__AuboJointStates * msg)
{
  if (!msg) {
    return;
  }
  // target_current
  rosidl_runtime_c__int16__Sequence__fini(&msg->target_current);
  // actual_current
  rosidl_runtime_c__int16__Sequence__fini(&msg->actual_current);
  // target_position
  rosidl_runtime_c__double__Sequence__fini(&msg->target_position);
  // actual_position
  rosidl_runtime_c__double__Sequence__fini(&msg->actual_position);
}

bool
aubo_ros2_common__msg__AuboJointStates__are_equal(const aubo_ros2_common__msg__AuboJointStates * lhs, const aubo_ros2_common__msg__AuboJointStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_current
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->target_current), &(rhs->target_current)))
  {
    return false;
  }
  // actual_current
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->actual_current), &(rhs->actual_current)))
  {
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->target_position), &(rhs->target_position)))
  {
    return false;
  }
  // actual_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->actual_position), &(rhs->actual_position)))
  {
    return false;
  }
  return true;
}

bool
aubo_ros2_common__msg__AuboJointStates__copy(
  const aubo_ros2_common__msg__AuboJointStates * input,
  aubo_ros2_common__msg__AuboJointStates * output)
{
  if (!input || !output) {
    return false;
  }
  // target_current
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->target_current), &(output->target_current)))
  {
    return false;
  }
  // actual_current
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->actual_current), &(output->actual_current)))
  {
    return false;
  }
  // target_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->target_position), &(output->target_position)))
  {
    return false;
  }
  // actual_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->actual_position), &(output->actual_position)))
  {
    return false;
  }
  return true;
}

aubo_ros2_common__msg__AuboJointStates *
aubo_ros2_common__msg__AuboJointStates__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboJointStates * msg = (aubo_ros2_common__msg__AuboJointStates *)allocator.allocate(sizeof(aubo_ros2_common__msg__AuboJointStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aubo_ros2_common__msg__AuboJointStates));
  bool success = aubo_ros2_common__msg__AuboJointStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aubo_ros2_common__msg__AuboJointStates__destroy(aubo_ros2_common__msg__AuboJointStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aubo_ros2_common__msg__AuboJointStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aubo_ros2_common__msg__AuboJointStates__Sequence__init(aubo_ros2_common__msg__AuboJointStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboJointStates * data = NULL;

  if (size) {
    data = (aubo_ros2_common__msg__AuboJointStates *)allocator.zero_allocate(size, sizeof(aubo_ros2_common__msg__AuboJointStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aubo_ros2_common__msg__AuboJointStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aubo_ros2_common__msg__AuboJointStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aubo_ros2_common__msg__AuboJointStates__Sequence__fini(aubo_ros2_common__msg__AuboJointStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aubo_ros2_common__msg__AuboJointStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aubo_ros2_common__msg__AuboJointStates__Sequence *
aubo_ros2_common__msg__AuboJointStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__msg__AuboJointStates__Sequence * array = (aubo_ros2_common__msg__AuboJointStates__Sequence *)allocator.allocate(sizeof(aubo_ros2_common__msg__AuboJointStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aubo_ros2_common__msg__AuboJointStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aubo_ros2_common__msg__AuboJointStates__Sequence__destroy(aubo_ros2_common__msg__AuboJointStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aubo_ros2_common__msg__AuboJointStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aubo_ros2_common__msg__AuboJointStates__Sequence__are_equal(const aubo_ros2_common__msg__AuboJointStates__Sequence * lhs, const aubo_ros2_common__msg__AuboJointStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aubo_ros2_common__msg__AuboJointStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aubo_ros2_common__msg__AuboJointStates__Sequence__copy(
  const aubo_ros2_common__msg__AuboJointStates__Sequence * input,
  aubo_ros2_common__msg__AuboJointStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aubo_ros2_common__msg__AuboJointStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aubo_ros2_common__msg__AuboJointStates * data =
      (aubo_ros2_common__msg__AuboJointStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aubo_ros2_common__msg__AuboJointStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aubo_ros2_common__msg__AuboJointStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aubo_ros2_common__msg__AuboJointStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
