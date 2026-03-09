// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:msg/AuboTcpPose.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/msg/detail/aubo_tcp_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__msg__AuboTcpPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x06, 0x4d, 0xd1, 0x78, 0xc2, 0xfb, 0x58,
      0xfd, 0x92, 0xcb, 0x6c, 0x63, 0xf7, 0xbc, 0x78,
      0x7b, 0x2a, 0x6e, 0xa0, 0x72, 0x20, 0xf6, 0x66,
      0xd0, 0x16, 0xa4, 0x39, 0x7b, 0x02, 0xc4, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aubo_ros2_common/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t aubo_ros2_common__msg__Vector3__EXPECTED_HASH = {1, {
    0x3d, 0x6e, 0xc4, 0x7e, 0x7d, 0x90, 0x45, 0x4c,
    0xcc, 0x90, 0xbf, 0xa7, 0xeb, 0x50, 0xf0, 0x3e,
    0x7d, 0x99, 0x85, 0x79, 0x18, 0x76, 0xab, 0xec,
    0x78, 0x01, 0x90, 0x7f, 0x93, 0x07, 0x67, 0x76,
  }};
#endif

static char aubo_ros2_common__msg__AuboTcpPose__TYPE_NAME[] = "aubo_ros2_common/msg/AuboTcpPose";
static char aubo_ros2_common__msg__Vector3__TYPE_NAME[] = "aubo_ros2_common/msg/Vector3";

// Define type names, field names, and default values
static char aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__target_position[] = "target_position";
static char aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__target_rotation[] = "target_rotation";
static char aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__actual_position[] = "actual_position";
static char aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__actual_rotation[] = "actual_rotation";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__msg__AuboTcpPose__FIELDS[] = {
  {
    {aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__target_rotation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__actual_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__msg__AuboTcpPose__FIELD_NAME__actual_rotation, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription aubo_ros2_common__msg__AuboTcpPose__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {aubo_ros2_common__msg__Vector3__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__msg__AuboTcpPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__msg__AuboTcpPose__TYPE_NAME, 32, 32},
      {aubo_ros2_common__msg__AuboTcpPose__FIELDS, 4, 4},
    },
    {aubo_ros2_common__msg__AuboTcpPose__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&aubo_ros2_common__msg__Vector3__EXPECTED_HASH, aubo_ros2_common__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = aubo_ros2_common__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "aubo_ros2_common/Vector3 target_position\n"
  "aubo_ros2_common/Vector3 target_rotation\n"
  "aubo_ros2_common/Vector3 actual_position\n"
  "aubo_ros2_common/Vector3 actual_rotation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__msg__AuboTcpPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__msg__AuboTcpPose__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 164, 164},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__msg__AuboTcpPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__msg__AuboTcpPose__get_individual_type_description_source(NULL),
    sources[1] = *aubo_ros2_common__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
