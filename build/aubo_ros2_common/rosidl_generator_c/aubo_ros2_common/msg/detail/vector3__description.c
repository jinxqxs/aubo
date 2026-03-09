// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:msg/Vector3.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/msg/detail/vector3__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__Vector3__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x6e, 0xc4, 0x7e, 0x7d, 0x90, 0x45, 0x4c,
      0xcc, 0x90, 0xbf, 0xa7, 0xeb, 0x50, 0xf0, 0x3e,
      0x7d, 0x99, 0x85, 0x79, 0x18, 0x76, 0xab, 0xec,
      0x78, 0x01, 0x90, 0x7f, 0x93, 0x07, 0x67, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aubo_ros2_common__msg__Vector3__TYPE_NAME[] = "aubo_ros2_common/msg/Vector3";

// Define type names, field names, and default values
static char aubo_ros2_common__msg__Vector3__FIELD_NAME__x[] = "x";
static char aubo_ros2_common__msg__Vector3__FIELD_NAME__y[] = "y";
static char aubo_ros2_common__msg__Vector3__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__msg__Vector3__FIELDS[] = {
  {
    {aubo_ros2_common__msg__Vector3__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__Vector3__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__Vector3__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__Vector3__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
      {aubo_ros2_common__msg__Vector3__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__Vector3__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__Vector3__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__msg__Vector3__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
