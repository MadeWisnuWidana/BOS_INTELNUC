// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_offset_tuner_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

#include "op3_offset_tuner_msgs/srv/detail/get_present_joint_offset_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0x34, 0x41, 0x02, 0x89, 0xeb, 0x28, 0x8d,
      0x4c, 0xa2, 0x3d, 0x60, 0xdc, 0x30, 0xff, 0xb5,
      0x2a, 0x21, 0x79, 0x58, 0xa1, 0xb7, 0xe4, 0x11,
      0x9e, 0x17, 0x34, 0x5d, 0x5f, 0x13, 0x84, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x63, 0x80, 0x6e, 0xf7, 0x53, 0x62, 0xa4,
      0x08, 0xfa, 0x56, 0x1a, 0xa3, 0xb0, 0xc9, 0x31,
      0xb3, 0x64, 0xbc, 0x13, 0xee, 0xe4, 0x5d, 0xed,
      0xbc, 0xf3, 0xef, 0x99, 0x5b, 0x3d, 0x10, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x45, 0xb7, 0x85, 0x22, 0x4a, 0x84, 0x9c,
      0xb8, 0xbd, 0x14, 0xb2, 0x4f, 0x5a, 0x66, 0x22,
      0x9d, 0x35, 0x15, 0xa6, 0x34, 0xa8, 0xcf, 0x40,
      0xfb, 0xef, 0xdd, 0x44, 0xc7, 0xe1, 0x71, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x3c, 0xb2, 0x17, 0x11, 0x58, 0xf9, 0xbc,
      0x7a, 0xc0, 0x40, 0x0f, 0xfb, 0x10, 0xe7, 0x5a,
      0x65, 0xc8, 0x8f, 0xd0, 0x08, 0x0e, 0xfb, 0x29,
      0xc4, 0x61, 0xfb, 0x11, 0xe7, 0xed, 0x10, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "op3_offset_tuner_msgs/msg/detail/joint_offset_position_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t op3_offset_tuner_msgs__msg__JointOffsetPositionData__EXPECTED_HASH = {1, {
    0xe6, 0x91, 0x34, 0x5d, 0x5e, 0xdd, 0xa0, 0xc7,
    0x10, 0x6e, 0xc1, 0xa6, 0xb3, 0x86, 0x8e, 0x2e,
    0xec, 0x9e, 0x96, 0x66, 0xb2, 0x1a, 0xa1, 0x9f,
    0x8d, 0x1a, 0xad, 0x28, 0xca, 0x4f, 0x92, 0xf8,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__TYPE_NAME[] = "op3_offset_tuner_msgs/srv/GetPresentJointOffsetData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointOffsetPositionData";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__TYPE_NAME[] = "op3_offset_tuner_msgs/srv/GetPresentJointOffsetData_Event";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME[] = "op3_offset_tuner_msgs/srv/GetPresentJointOffsetData_Request";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME[] = "op3_offset_tuner_msgs/srv/GetPresentJointOffsetData_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__request_message[] = "request_message";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__response_message[] = "response_message";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__TYPE_NAME, 51, 51},
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__FIELDS, 3, 3},
    },
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_offset_tuner_msgs__msg__JointOffsetPositionData__EXPECTED_HASH, op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__FIELD_NAME__present_data_array[] = "present_data_array";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__FIELD_NAME__present_data_array, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__FIELDS, 1, 1},
    },
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_offset_tuner_msgs__msg__JointOffsetPositionData__EXPECTED_HASH, op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__info[] = "info";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__request[] = "request";
static char op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__msg__JointOffsetPositionData__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__TYPE_NAME, 57, 57},
      {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__FIELDS, 3, 3},
    },
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_offset_tuner_msgs__msg__JointOffsetPositionData__EXPECTED_HASH, op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "JointOffsetPositionData[] present_data_array";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__TYPE_NAME, 51, 51},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__TYPE_NAME, 60, 60},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_individual_type_description_source(NULL);
    sources[3] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_individual_type_description_source(NULL);
    sources[4] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_individual_type_description_source(NULL);
    sources[5] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_individual_type_description_source(NULL),
    sources[1] = *op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_offset_tuner_msgs__msg__JointOffsetPositionData__get_individual_type_description_source(NULL);
    sources[3] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Request__get_individual_type_description_source(NULL);
    sources[4] = *op3_offset_tuner_msgs__srv__GetPresentJointOffsetData_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
