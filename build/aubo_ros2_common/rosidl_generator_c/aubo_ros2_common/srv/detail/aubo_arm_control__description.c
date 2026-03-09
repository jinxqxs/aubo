// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aubo_ros2_common:srv/AuboArmControl.idl
// generated code does not contain a copyright notice

#include "aubo_ros2_common/srv/detail/aubo_arm_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__srv__AuboArmControl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0xf9, 0x71, 0x3c, 0xc6, 0x59, 0x50, 0x82,
      0x6d, 0x9c, 0x96, 0x08, 0xa5, 0xe7, 0x22, 0x66,
      0x5b, 0xbe, 0x54, 0xef, 0x1c, 0x06, 0x07, 0x6b,
      0xe2, 0xa9, 0x7d, 0x55, 0x7a, 0xa2, 0xe5, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__srv__AuboArmControl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x0a, 0x55, 0xb4, 0x78, 0x95, 0x6a, 0x31,
      0xb3, 0x35, 0x19, 0x0d, 0x4a, 0x32, 0x10, 0x26,
      0xe7, 0x70, 0xd4, 0x43, 0x3b, 0xde, 0x93, 0x7b,
      0x17, 0x00, 0x67, 0x5b, 0x71, 0xce, 0x0a, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__srv__AuboArmControl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x0d, 0xec, 0x8c, 0x4b, 0xf3, 0xa9, 0x65,
      0x57, 0x9f, 0x0d, 0xad, 0xa6, 0x97, 0x56, 0xc3,
      0x6c, 0x76, 0xb2, 0xc3, 0xbb, 0x4d, 0x4c, 0xc5,
      0xa7, 0x18, 0xd3, 0x63, 0xa9, 0xa3, 0x20, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_aubo_ros2_common
const rosidl_type_hash_t *
aubo_ros2_common__srv__AuboArmControl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x54, 0x6e, 0xe1, 0x00, 0x14, 0xa8, 0xbb,
      0x64, 0x1d, 0xb7, 0xad, 0x40, 0x9e, 0x68, 0xc9,
      0xca, 0xbe, 0xac, 0xed, 0xa3, 0xd0, 0x12, 0x33,
      0xba, 0x10, 0xc3, 0x8b, 0x0d, 0xc0, 0x7d, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char aubo_ros2_common__srv__AuboArmControl__TYPE_NAME[] = "aubo_ros2_common/srv/AuboArmControl";
static char aubo_ros2_common__srv__AuboArmControl_Event__TYPE_NAME[] = "aubo_ros2_common/srv/AuboArmControl_Event";
static char aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME[] = "aubo_ros2_common/srv/AuboArmControl_Request";
static char aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME[] = "aubo_ros2_common/srv/AuboArmControl_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__request_message[] = "request_message";
static char aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__response_message[] = "response_message";
static char aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__srv__AuboArmControl__FIELDS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {aubo_ros2_common__srv__AuboArmControl_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription aubo_ros2_common__srv__AuboArmControl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__srv__AuboArmControl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__srv__AuboArmControl__TYPE_NAME, 35, 35},
      {aubo_ros2_common__srv__AuboArmControl__FIELDS, 3, 3},
    },
    {aubo_ros2_common__srv__AuboArmControl__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = aubo_ros2_common__srv__AuboArmControl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = aubo_ros2_common__srv__AuboArmControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = aubo_ros2_common__srv__AuboArmControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__cmd[] = "cmd";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__type[] = "type";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__tcp_offset[] = "tcp_offset";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__payload[] = "payload";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__collision_level[] = "collision_level";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__joints[] = "joints";
static char aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__speed_fraction[] = "speed_fraction";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__srv__AuboArmControl_Request__FIELDS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__tcp_offset, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__collision_level, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__joints, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__FIELD_NAME__speed_fraction, 14, 14},
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
aubo_ros2_common__srv__AuboArmControl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
      {aubo_ros2_common__srv__AuboArmControl_Request__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char aubo_ros2_common__srv__AuboArmControl_Response__FIELD_NAME__result[] = "result";
static char aubo_ros2_common__srv__AuboArmControl_Response__FIELD_NAME__result_code[] = "result_code";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__srv__AuboArmControl_Response__FIELDS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Response__FIELD_NAME__result_code, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__srv__AuboArmControl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
      {aubo_ros2_common__srv__AuboArmControl_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__info[] = "info";
static char aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__request[] = "request";
static char aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field aubo_ros2_common__srv__AuboArmControl_Event__FIELDS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription aubo_ros2_common__srv__AuboArmControl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aubo_ros2_common__srv__AuboArmControl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aubo_ros2_common__srv__AuboArmControl_Event__TYPE_NAME, 41, 41},
      {aubo_ros2_common__srv__AuboArmControl_Event__FIELDS, 3, 3},
    },
    {aubo_ros2_common__srv__AuboArmControl_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = aubo_ros2_common__srv__AuboArmControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = aubo_ros2_common__srv__AuboArmControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string cmd\n"
  "string type\n"
  "float64[] tcp_offset\n"
  "float64 payload\n"
  "int16 collision_level\n"
  "float64[] joints\n"
  "float64 speed_fraction\n"
  "---\n"
  "bool result\n"
  "string result_code";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__srv__AuboArmControl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__srv__AuboArmControl__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__srv__AuboArmControl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__srv__AuboArmControl_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__srv__AuboArmControl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__srv__AuboArmControl_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
aubo_ros2_common__srv__AuboArmControl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aubo_ros2_common__srv__AuboArmControl_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__srv__AuboArmControl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__srv__AuboArmControl__get_individual_type_description_source(NULL),
    sources[1] = *aubo_ros2_common__srv__AuboArmControl_Event__get_individual_type_description_source(NULL);
    sources[2] = *aubo_ros2_common__srv__AuboArmControl_Request__get_individual_type_description_source(NULL);
    sources[3] = *aubo_ros2_common__srv__AuboArmControl_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__srv__AuboArmControl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__srv__AuboArmControl_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__srv__AuboArmControl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__srv__AuboArmControl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aubo_ros2_common__srv__AuboArmControl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aubo_ros2_common__srv__AuboArmControl_Event__get_individual_type_description_source(NULL),
    sources[1] = *aubo_ros2_common__srv__AuboArmControl_Request__get_individual_type_description_source(NULL);
    sources[2] = *aubo_ros2_common__srv__AuboArmControl_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
