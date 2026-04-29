// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_camera_setting_tool_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

#include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__srv__SetParameters__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xbe, 0x10, 0xec, 0x32, 0x13, 0x4d, 0xff,
      0x63, 0x9f, 0x56, 0x50, 0x16, 0x6c, 0xff, 0x3e,
      0xf7, 0xea, 0x71, 0x3a, 0xe1, 0x19, 0x16, 0x8f,
      0x5b, 0x88, 0xa7, 0x98, 0x27, 0x74, 0xd1, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x06, 0xc2, 0x72, 0x22, 0xf1, 0x92, 0xbc,
      0xb9, 0x6e, 0x82, 0x55, 0xf8, 0xaa, 0x1d, 0x44,
      0x86, 0xc1, 0x3d, 0x29, 0x53, 0x87, 0x7b, 0xc9,
      0xa3, 0x16, 0x00, 0xbc, 0xf2, 0x66, 0x35, 0x1d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xc4, 0x76, 0xe9, 0xe0, 0x60, 0x8c, 0xd2,
      0xb0, 0xdf, 0xb0, 0xf8, 0x4e, 0x8c, 0x7c, 0xc9,
      0x5b, 0x9b, 0xe3, 0x75, 0xe8, 0x3e, 0x91, 0x5c,
      0x16, 0x29, 0xcf, 0xfe, 0x2a, 0x98, 0xc4, 0x81,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x08, 0x0a, 0xbe, 0x27, 0x44, 0x9b, 0xe2,
      0x0b, 0x4c, 0x53, 0x72, 0xb8, 0x82, 0x1b, 0xf6,
      0x27, 0xb3, 0x76, 0x9c, 0xec, 0x35, 0x64, 0x50,
      0xb7, 0x77, 0x69, 0x75, 0x7f, 0xcc, 0x05, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t op3_camera_setting_tool_msgs__msg__CameraParams__EXPECTED_HASH = {1, {
    0x06, 0x74, 0x08, 0x32, 0x1f, 0xde, 0xa0, 0x11,
    0x12, 0x87, 0xc9, 0x3b, 0xce, 0x6c, 0x96, 0x44,
    0x2b, 0xe8, 0xb2, 0xa6, 0x51, 0x4f, 0xbf, 0x8e,
    0x60, 0xe7, 0x3b, 0x30, 0xb3, 0x4f, 0x0a, 0x63,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char op3_camera_setting_tool_msgs__srv__SetParameters__TYPE_NAME[] = "op3_camera_setting_tool_msgs/srv/SetParameters";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME[] = "op3_camera_setting_tool_msgs/msg/CameraParams";
static char op3_camera_setting_tool_msgs__srv__SetParameters_Event__TYPE_NAME[] = "op3_camera_setting_tool_msgs/srv/SetParameters_Event";
static char op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME[] = "op3_camera_setting_tool_msgs/srv/SetParameters_Request";
static char op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME[] = "op3_camera_setting_tool_msgs/srv/SetParameters_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__request_message[] = "request_message";
static char op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__response_message[] = "response_message";
static char op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__srv__SetParameters__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_camera_setting_tool_msgs__srv__SetParameters_Event__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_camera_setting_tool_msgs__srv__SetParameters__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__srv__SetParameters__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__srv__SetParameters__TYPE_NAME, 46, 46},
      {op3_camera_setting_tool_msgs__srv__SetParameters__FIELDS, 3, 3},
    },
    {op3_camera_setting_tool_msgs__srv__SetParameters__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_camera_setting_tool_msgs__msg__CameraParams__EXPECTED_HASH, op3_camera_setting_tool_msgs__msg__CameraParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__srv__SetParameters_Request__FIELD_NAME__params[] = "params";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__srv__SetParameters_Request__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Request__FIELD_NAME__params, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_camera_setting_tool_msgs__srv__SetParameters_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
      {op3_camera_setting_tool_msgs__srv__SetParameters_Request__FIELDS, 1, 1},
    },
    {op3_camera_setting_tool_msgs__srv__SetParameters_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_camera_setting_tool_msgs__msg__CameraParams__EXPECTED_HASH, op3_camera_setting_tool_msgs__msg__CameraParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__srv__SetParameters_Response__FIELD_NAME__returns[] = "returns";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__srv__SetParameters_Response__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Response__FIELD_NAME__returns, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_camera_setting_tool_msgs__srv__SetParameters_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
      {op3_camera_setting_tool_msgs__srv__SetParameters_Response__FIELDS, 1, 1},
    },
    {op3_camera_setting_tool_msgs__srv__SetParameters_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_camera_setting_tool_msgs__msg__CameraParams__EXPECTED_HASH, op3_camera_setting_tool_msgs__msg__CameraParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__info[] = "info";
static char op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__request[] = "request";
static char op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_camera_setting_tool_msgs__srv__SetParameters_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__srv__SetParameters_Event__TYPE_NAME, 52, 52},
      {op3_camera_setting_tool_msgs__srv__SetParameters_Event__FIELDS, 3, 3},
    },
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_camera_setting_tool_msgs__msg__CameraParams__EXPECTED_HASH, op3_camera_setting_tool_msgs__msg__CameraParams__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "CameraParams  params\n"
  "---\n"
  "CameraParams  returns";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__srv__SetParameters__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__srv__SetParameters__TYPE_NAME, 46, 46},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Request__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Response__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__srv__SetParameters_Event__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__srv__SetParameters__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__srv__SetParameters__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(NULL);
    sources[3] = *op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_individual_type_description_source(NULL);
    sources[4] = *op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_individual_type_description_source(NULL);
    sources[5] = *op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_individual_type_description_source(NULL),
    sources[1] = *op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_individual_type_description_source(NULL),
    sources[1] = *op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__srv__SetParameters_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(NULL);
    sources[3] = *op3_camera_setting_tool_msgs__srv__SetParameters_Request__get_individual_type_description_source(NULL);
    sources[4] = *op3_camera_setting_tool_msgs__srv__SetParameters_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
