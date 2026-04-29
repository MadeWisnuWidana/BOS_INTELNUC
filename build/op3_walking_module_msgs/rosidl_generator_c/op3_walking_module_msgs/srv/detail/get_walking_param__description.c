// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_walking_module_msgs:srv/GetWalkingParam.idl
// generated code does not contain a copyright notice

#include "op3_walking_module_msgs/srv/detail/get_walking_param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_walking_module_msgs
const rosidl_type_hash_t *
op3_walking_module_msgs__srv__GetWalkingParam__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x2e, 0x94, 0xa7, 0x0b, 0x61, 0xfa, 0x23,
      0xec, 0xb6, 0x70, 0x04, 0x98, 0x91, 0x0e, 0x20,
      0x9b, 0xbc, 0xa2, 0xdc, 0x68, 0x13, 0x08, 0x99,
      0x36, 0x67, 0x2f, 0xa7, 0x62, 0xa8, 0x28, 0xd1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_walking_module_msgs
const rosidl_type_hash_t *
op3_walking_module_msgs__srv__GetWalkingParam_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xc2, 0x52, 0x68, 0x55, 0x98, 0x8b, 0xec,
      0x39, 0xee, 0xb7, 0xf2, 0x76, 0x98, 0x00, 0x6e,
      0x3d, 0xd1, 0x21, 0x20, 0xe4, 0x2f, 0x8e, 0x98,
      0x60, 0xcf, 0x9c, 0xf1, 0xe2, 0x2e, 0x74, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_walking_module_msgs
const rosidl_type_hash_t *
op3_walking_module_msgs__srv__GetWalkingParam_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0xef, 0x6a, 0x8b, 0x3d, 0xc1, 0x17, 0xcd,
      0x4e, 0xd3, 0x49, 0x04, 0xbf, 0x36, 0x37, 0xa2,
      0xfe, 0xfd, 0xf1, 0xb0, 0xbe, 0x08, 0x29, 0xc3,
      0x33, 0xe3, 0x2f, 0x1d, 0x3a, 0x93, 0x43, 0xc2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_walking_module_msgs
const rosidl_type_hash_t *
op3_walking_module_msgs__srv__GetWalkingParam_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0xf6, 0xc0, 0x8f, 0x7b, 0xb7, 0xae, 0xcc,
      0x85, 0x9f, 0x06, 0xed, 0x6b, 0x6a, 0x86, 0x88,
      0x95, 0xbc, 0x28, 0xdc, 0xfa, 0x17, 0x3d, 0x52,
      0x7e, 0xe2, 0x88, 0xfb, 0x56, 0x1a, 0x67, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "op3_walking_module_msgs/msg/detail/walking_param__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t op3_walking_module_msgs__msg__WalkingParam__EXPECTED_HASH = {1, {
    0xc5, 0xb7, 0x4e, 0x96, 0x63, 0x58, 0x43, 0x7e,
    0xc8, 0x8c, 0x30, 0xc1, 0x96, 0x51, 0xa0, 0x4f,
    0xc1, 0x67, 0xad, 0x01, 0x5e, 0xf2, 0x39, 0x97,
    0x62, 0x0b, 0xcc, 0x2c, 0x6e, 0x41, 0xc5, 0x44,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char op3_walking_module_msgs__srv__GetWalkingParam__TYPE_NAME[] = "op3_walking_module_msgs/srv/GetWalkingParam";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME[] = "op3_walking_module_msgs/msg/WalkingParam";
static char op3_walking_module_msgs__srv__GetWalkingParam_Event__TYPE_NAME[] = "op3_walking_module_msgs/srv/GetWalkingParam_Event";
static char op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME[] = "op3_walking_module_msgs/srv/GetWalkingParam_Request";
static char op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME[] = "op3_walking_module_msgs/srv/GetWalkingParam_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__request_message[] = "request_message";
static char op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__response_message[] = "response_message";
static char op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field op3_walking_module_msgs__srv__GetWalkingParam__FIELDS[] = {
  {
    {op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_walking_module_msgs__srv__GetWalkingParam_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_walking_module_msgs__srv__GetWalkingParam__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_walking_module_msgs__srv__GetWalkingParam__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_walking_module_msgs__srv__GetWalkingParam__TYPE_NAME, 43, 43},
      {op3_walking_module_msgs__srv__GetWalkingParam__FIELDS, 3, 3},
    },
    {op3_walking_module_msgs__srv__GetWalkingParam__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_walking_module_msgs__msg__WalkingParam__EXPECTED_HASH, op3_walking_module_msgs__msg__WalkingParam__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_walking_module_msgs__msg__WalkingParam__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_walking_module_msgs__srv__GetWalkingParam_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_walking_module_msgs__srv__GetWalkingParam_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = op3_walking_module_msgs__srv__GetWalkingParam_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_walking_module_msgs__srv__GetWalkingParam_Request__FIELD_NAME__get_param[] = "get_param";

static rosidl_runtime_c__type_description__Field op3_walking_module_msgs__srv__GetWalkingParam_Request__FIELDS[] = {
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Request__FIELD_NAME__get_param, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_walking_module_msgs__srv__GetWalkingParam_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
      {op3_walking_module_msgs__srv__GetWalkingParam_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_walking_module_msgs__srv__GetWalkingParam_Response__FIELD_NAME__parameters[] = "parameters";

static rosidl_runtime_c__type_description__Field op3_walking_module_msgs__srv__GetWalkingParam_Response__FIELDS[] = {
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Response__FIELD_NAME__parameters, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_walking_module_msgs__srv__GetWalkingParam_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_walking_module_msgs__srv__GetWalkingParam_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
      {op3_walking_module_msgs__srv__GetWalkingParam_Response__FIELDS, 1, 1},
    },
    {op3_walking_module_msgs__srv__GetWalkingParam_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_walking_module_msgs__msg__WalkingParam__EXPECTED_HASH, op3_walking_module_msgs__msg__WalkingParam__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_walking_module_msgs__msg__WalkingParam__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__info[] = "info";
static char op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__request[] = "request";
static char op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELDS[] = {
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_walking_module_msgs__srv__GetWalkingParam_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__msg__WalkingParam__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_walking_module_msgs__srv__GetWalkingParam_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_walking_module_msgs__srv__GetWalkingParam_Event__TYPE_NAME, 49, 49},
      {op3_walking_module_msgs__srv__GetWalkingParam_Event__FIELDS, 3, 3},
    },
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_walking_module_msgs__msg__WalkingParam__EXPECTED_HASH, op3_walking_module_msgs__msg__WalkingParam__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_walking_module_msgs__msg__WalkingParam__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = op3_walking_module_msgs__srv__GetWalkingParam_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_walking_module_msgs__srv__GetWalkingParam_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool            get_param\n"
  "---\n"
  "WalkingParam    parameters";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_walking_module_msgs__srv__GetWalkingParam__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_walking_module_msgs__srv__GetWalkingParam__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_walking_module_msgs__srv__GetWalkingParam_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_walking_module_msgs__srv__GetWalkingParam_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_walking_module_msgs__srv__GetWalkingParam_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_walking_module_msgs__srv__GetWalkingParam_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_walking_module_msgs__srv__GetWalkingParam_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_walking_module_msgs__srv__GetWalkingParam_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_walking_module_msgs__srv__GetWalkingParam__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_walking_module_msgs__srv__GetWalkingParam__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(NULL);
    sources[3] = *op3_walking_module_msgs__srv__GetWalkingParam_Event__get_individual_type_description_source(NULL);
    sources[4] = *op3_walking_module_msgs__srv__GetWalkingParam_Request__get_individual_type_description_source(NULL);
    sources[5] = *op3_walking_module_msgs__srv__GetWalkingParam_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_walking_module_msgs__srv__GetWalkingParam_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_walking_module_msgs__srv__GetWalkingParam_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_walking_module_msgs__srv__GetWalkingParam_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_walking_module_msgs__srv__GetWalkingParam_Response__get_individual_type_description_source(NULL),
    sources[1] = *op3_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_walking_module_msgs__srv__GetWalkingParam_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_walking_module_msgs__srv__GetWalkingParam_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_walking_module_msgs__msg__WalkingParam__get_individual_type_description_source(NULL);
    sources[3] = *op3_walking_module_msgs__srv__GetWalkingParam_Request__get_individual_type_description_source(NULL);
    sources[4] = *op3_walking_module_msgs__srv__GetWalkingParam_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
