// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice
#include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `tcp_offset`
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
aubo_ros2_common__srv__AuboArmControl_Request__init(aubo_ros2_common__srv__AuboArmControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    aubo_ros2_common__srv__AuboArmControl_Request__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    aubo_ros2_common__srv__AuboArmControl_Request__fini(msg);
    return false;
  }
  // tcp_offset
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tcp_offset, 0)) {
    aubo_ros2_common__srv__AuboArmControl_Request__fini(msg);
    return false;
  }
  // payload
  // collision_level
  // joints
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints, 0)) {
    aubo_ros2_common__srv__AuboArmControl_Request__fini(msg);
    return false;
  }
  // speed_fraction
  return true;
}

void
aubo_ros2_common__srv__AuboArmControl_Request__fini(aubo_ros2_common__srv__AuboArmControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // tcp_offset
  rosidl_runtime_c__double__Sequence__fini(&msg->tcp_offset);
  // payload
  // collision_level
  // joints
  rosidl_runtime_c__double__Sequence__fini(&msg->joints);
  // speed_fraction
}

bool
aubo_ros2_common__srv__AuboArmControl_Request__are_equal(const aubo_ros2_common__srv__AuboArmControl_Request * lhs, const aubo_ros2_common__srv__AuboArmControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // tcp_offset
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tcp_offset), &(rhs->tcp_offset)))
  {
    return false;
  }
  // payload
  if (lhs->payload != rhs->payload) {
    return false;
  }
  // collision_level
  if (lhs->collision_level != rhs->collision_level) {
    return false;
  }
  // joints
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints), &(rhs->joints)))
  {
    return false;
  }
  // speed_fraction
  if (lhs->speed_fraction != rhs->speed_fraction) {
    return false;
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Request__copy(
  const aubo_ros2_common__srv__AuboArmControl_Request * input,
  aubo_ros2_common__srv__AuboArmControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // tcp_offset
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tcp_offset), &(output->tcp_offset)))
  {
    return false;
  }
  // payload
  output->payload = input->payload;
  // collision_level
  output->collision_level = input->collision_level;
  // joints
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints), &(output->joints)))
  {
    return false;
  }
  // speed_fraction
  output->speed_fraction = input->speed_fraction;
  return true;
}

aubo_ros2_common__srv__AuboArmControl_Request *
aubo_ros2_common__srv__AuboArmControl_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Request * msg = (aubo_ros2_common__srv__AuboArmControl_Request *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aubo_ros2_common__srv__AuboArmControl_Request));
  bool success = aubo_ros2_common__srv__AuboArmControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aubo_ros2_common__srv__AuboArmControl_Request__destroy(aubo_ros2_common__srv__AuboArmControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aubo_ros2_common__srv__AuboArmControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__init(aubo_ros2_common__srv__AuboArmControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Request * data = NULL;

  if (size) {
    data = (aubo_ros2_common__srv__AuboArmControl_Request *)allocator.zero_allocate(size, sizeof(aubo_ros2_common__srv__AuboArmControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aubo_ros2_common__srv__AuboArmControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aubo_ros2_common__srv__AuboArmControl_Request__fini(&data[i - 1]);
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
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__fini(aubo_ros2_common__srv__AuboArmControl_Request__Sequence * array)
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
      aubo_ros2_common__srv__AuboArmControl_Request__fini(&array->data[i]);
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

aubo_ros2_common__srv__AuboArmControl_Request__Sequence *
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence * array = (aubo_ros2_common__srv__AuboArmControl_Request__Sequence *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aubo_ros2_common__srv__AuboArmControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__destroy(aubo_ros2_common__srv__AuboArmControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aubo_ros2_common__srv__AuboArmControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__are_equal(const aubo_ros2_common__srv__AuboArmControl_Request__Sequence * lhs, const aubo_ros2_common__srv__AuboArmControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Request__Sequence__copy(
  const aubo_ros2_common__srv__AuboArmControl_Request__Sequence * input,
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aubo_ros2_common__srv__AuboArmControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aubo_ros2_common__srv__AuboArmControl_Request * data =
      (aubo_ros2_common__srv__AuboArmControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aubo_ros2_common__srv__AuboArmControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aubo_ros2_common__srv__AuboArmControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_code`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
aubo_ros2_common__srv__AuboArmControl_Response__init(aubo_ros2_common__srv__AuboArmControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // result_code
  if (!rosidl_runtime_c__String__init(&msg->result_code)) {
    aubo_ros2_common__srv__AuboArmControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
aubo_ros2_common__srv__AuboArmControl_Response__fini(aubo_ros2_common__srv__AuboArmControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // result_code
  rosidl_runtime_c__String__fini(&msg->result_code);
}

bool
aubo_ros2_common__srv__AuboArmControl_Response__are_equal(const aubo_ros2_common__srv__AuboArmControl_Response * lhs, const aubo_ros2_common__srv__AuboArmControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // result_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_code), &(rhs->result_code)))
  {
    return false;
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Response__copy(
  const aubo_ros2_common__srv__AuboArmControl_Response * input,
  aubo_ros2_common__srv__AuboArmControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // result_code
  if (!rosidl_runtime_c__String__copy(
      &(input->result_code), &(output->result_code)))
  {
    return false;
  }
  return true;
}

aubo_ros2_common__srv__AuboArmControl_Response *
aubo_ros2_common__srv__AuboArmControl_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Response * msg = (aubo_ros2_common__srv__AuboArmControl_Response *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aubo_ros2_common__srv__AuboArmControl_Response));
  bool success = aubo_ros2_common__srv__AuboArmControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aubo_ros2_common__srv__AuboArmControl_Response__destroy(aubo_ros2_common__srv__AuboArmControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aubo_ros2_common__srv__AuboArmControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__init(aubo_ros2_common__srv__AuboArmControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Response * data = NULL;

  if (size) {
    data = (aubo_ros2_common__srv__AuboArmControl_Response *)allocator.zero_allocate(size, sizeof(aubo_ros2_common__srv__AuboArmControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aubo_ros2_common__srv__AuboArmControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aubo_ros2_common__srv__AuboArmControl_Response__fini(&data[i - 1]);
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
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__fini(aubo_ros2_common__srv__AuboArmControl_Response__Sequence * array)
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
      aubo_ros2_common__srv__AuboArmControl_Response__fini(&array->data[i]);
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

aubo_ros2_common__srv__AuboArmControl_Response__Sequence *
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence * array = (aubo_ros2_common__srv__AuboArmControl_Response__Sequence *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aubo_ros2_common__srv__AuboArmControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__destroy(aubo_ros2_common__srv__AuboArmControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aubo_ros2_common__srv__AuboArmControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__are_equal(const aubo_ros2_common__srv__AuboArmControl_Response__Sequence * lhs, const aubo_ros2_common__srv__AuboArmControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Response__Sequence__copy(
  const aubo_ros2_common__srv__AuboArmControl_Response__Sequence * input,
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aubo_ros2_common__srv__AuboArmControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aubo_ros2_common__srv__AuboArmControl_Response * data =
      (aubo_ros2_common__srv__AuboArmControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aubo_ros2_common__srv__AuboArmControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aubo_ros2_common__srv__AuboArmControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"

bool
aubo_ros2_common__srv__AuboArmControl_Event__init(aubo_ros2_common__srv__AuboArmControl_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    aubo_ros2_common__srv__AuboArmControl_Event__fini(msg);
    return false;
  }
  // request
  if (!aubo_ros2_common__srv__AuboArmControl_Request__Sequence__init(&msg->request, 0)) {
    aubo_ros2_common__srv__AuboArmControl_Event__fini(msg);
    return false;
  }
  // response
  if (!aubo_ros2_common__srv__AuboArmControl_Response__Sequence__init(&msg->response, 0)) {
    aubo_ros2_common__srv__AuboArmControl_Event__fini(msg);
    return false;
  }
  return true;
}

void
aubo_ros2_common__srv__AuboArmControl_Event__fini(aubo_ros2_common__srv__AuboArmControl_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  aubo_ros2_common__srv__AuboArmControl_Request__Sequence__fini(&msg->request);
  // response
  aubo_ros2_common__srv__AuboArmControl_Response__Sequence__fini(&msg->response);
}

bool
aubo_ros2_common__srv__AuboArmControl_Event__are_equal(const aubo_ros2_common__srv__AuboArmControl_Event * lhs, const aubo_ros2_common__srv__AuboArmControl_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!aubo_ros2_common__srv__AuboArmControl_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!aubo_ros2_common__srv__AuboArmControl_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Event__copy(
  const aubo_ros2_common__srv__AuboArmControl_Event * input,
  aubo_ros2_common__srv__AuboArmControl_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!aubo_ros2_common__srv__AuboArmControl_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!aubo_ros2_common__srv__AuboArmControl_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

aubo_ros2_common__srv__AuboArmControl_Event *
aubo_ros2_common__srv__AuboArmControl_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Event * msg = (aubo_ros2_common__srv__AuboArmControl_Event *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aubo_ros2_common__srv__AuboArmControl_Event));
  bool success = aubo_ros2_common__srv__AuboArmControl_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aubo_ros2_common__srv__AuboArmControl_Event__destroy(aubo_ros2_common__srv__AuboArmControl_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aubo_ros2_common__srv__AuboArmControl_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__init(aubo_ros2_common__srv__AuboArmControl_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Event * data = NULL;

  if (size) {
    data = (aubo_ros2_common__srv__AuboArmControl_Event *)allocator.zero_allocate(size, sizeof(aubo_ros2_common__srv__AuboArmControl_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aubo_ros2_common__srv__AuboArmControl_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aubo_ros2_common__srv__AuboArmControl_Event__fini(&data[i - 1]);
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
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__fini(aubo_ros2_common__srv__AuboArmControl_Event__Sequence * array)
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
      aubo_ros2_common__srv__AuboArmControl_Event__fini(&array->data[i]);
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

aubo_ros2_common__srv__AuboArmControl_Event__Sequence *
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aubo_ros2_common__srv__AuboArmControl_Event__Sequence * array = (aubo_ros2_common__srv__AuboArmControl_Event__Sequence *)allocator.allocate(sizeof(aubo_ros2_common__srv__AuboArmControl_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aubo_ros2_common__srv__AuboArmControl_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__destroy(aubo_ros2_common__srv__AuboArmControl_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aubo_ros2_common__srv__AuboArmControl_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__are_equal(const aubo_ros2_common__srv__AuboArmControl_Event__Sequence * lhs, const aubo_ros2_common__srv__AuboArmControl_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aubo_ros2_common__srv__AuboArmControl_Event__Sequence__copy(
  const aubo_ros2_common__srv__AuboArmControl_Event__Sequence * input,
  aubo_ros2_common__srv__AuboArmControl_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aubo_ros2_common__srv__AuboArmControl_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aubo_ros2_common__srv__AuboArmControl_Event * data =
      (aubo_ros2_common__srv__AuboArmControl_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aubo_ros2_common__srv__AuboArmControl_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aubo_ros2_common__srv__AuboArmControl_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aubo_ros2_common__srv__AuboArmControl_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
