// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#include "robotis_controller_msgs/srv/detail/set_joint_module__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__srv__SetJointModule__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xf0, 0xd2, 0xdc, 0x77, 0x76, 0xf4, 0x0e,
      0x06, 0x32, 0xa7, 0x3a, 0xdc, 0x38, 0x44, 0xa7,
      0x12, 0x8a, 0x4d, 0x25, 0xe5, 0x28, 0x46, 0x4d,
      0x31, 0xe5, 0xee, 0x17, 0x21, 0xb4, 0xa1, 0x6d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__srv__SetJointModule_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0xd6, 0x9b, 0xa3, 0xf7, 0xd3, 0x30, 0x8b,
      0x72, 0x35, 0x77, 0x61, 0xdc, 0x30, 0x67, 0xae,
      0x9f, 0xa7, 0x26, 0x1e, 0x3e, 0x16, 0x53, 0x9c,
      0x33, 0xf8, 0xfa, 0xf6, 0x02, 0xe6, 0x43, 0xdf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__srv__SetJointModule_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0x34, 0x4b, 0xa1, 0x4e, 0x3a, 0xbd, 0x8d,
      0xc8, 0x87, 0x73, 0x30, 0x43, 0x4c, 0x72, 0x31,
      0xda, 0x74, 0x0d, 0x77, 0xae, 0xae, 0xd7, 0x45,
      0xf9, 0x79, 0xab, 0xbc, 0xc9, 0x51, 0x41, 0xa5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robotis_controller_msgs
const rosidl_type_hash_t *
robotis_controller_msgs__srv__SetJointModule_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x85, 0x93, 0xf1, 0xbe, 0x38, 0x64, 0xc7,
      0xb7, 0xa5, 0x5c, 0x9f, 0xc3, 0xef, 0xf2, 0xef,
      0x11, 0x4d, 0x60, 0x08, 0x89, 0x4f, 0x6c, 0x0e,
      0x76, 0x89, 0x3c, 0x5a, 0x24, 0xfd, 0x6f, 0x0d,
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

static char robotis_controller_msgs__srv__SetJointModule__TYPE_NAME[] = "robotis_controller_msgs/srv/SetJointModule";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robotis_controller_msgs__srv__SetJointModule_Event__TYPE_NAME[] = "robotis_controller_msgs/srv/SetJointModule_Event";
static char robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME[] = "robotis_controller_msgs/srv/SetJointModule_Request";
static char robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME[] = "robotis_controller_msgs/srv/SetJointModule_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__request_message[] = "request_message";
static char robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__response_message[] = "response_message";
static char robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__srv__SetJointModule__FIELDS[] = {
  {
    {robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotis_controller_msgs__srv__SetJointModule_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotis_controller_msgs__srv__SetJointModule__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__srv__SetJointModule__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__srv__SetJointModule__TYPE_NAME, 42, 42},
      {robotis_controller_msgs__srv__SetJointModule__FIELDS, 3, 3},
    },
    {robotis_controller_msgs__srv__SetJointModule__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robotis_controller_msgs__srv__SetJointModule_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotis_controller_msgs__srv__SetJointModule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robotis_controller_msgs__srv__SetJointModule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotis_controller_msgs__srv__SetJointModule_Request__FIELD_NAME__joint_name[] = "joint_name";
static char robotis_controller_msgs__srv__SetJointModule_Request__FIELD_NAME__module_name[] = "module_name";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__srv__SetJointModule_Request__FIELDS[] = {
  {
    {robotis_controller_msgs__srv__SetJointModule_Request__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Request__FIELD_NAME__module_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__srv__SetJointModule_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
      {robotis_controller_msgs__srv__SetJointModule_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotis_controller_msgs__srv__SetJointModule_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__srv__SetJointModule_Response__FIELDS[] = {
  {
    {robotis_controller_msgs__srv__SetJointModule_Response__FIELD_NAME__result, 6, 6},
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
robotis_controller_msgs__srv__SetJointModule_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
      {robotis_controller_msgs__srv__SetJointModule_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__info[] = "info";
static char robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__request[] = "request";
static char robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robotis_controller_msgs__srv__SetJointModule_Event__FIELDS[] = {
  {
    {robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotis_controller_msgs__srv__SetJointModule_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotis_controller_msgs__srv__SetJointModule_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotis_controller_msgs__srv__SetJointModule_Event__TYPE_NAME, 48, 48},
      {robotis_controller_msgs__srv__SetJointModule_Event__FIELDS, 3, 3},
    },
    {robotis_controller_msgs__srv__SetJointModule_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robotis_controller_msgs__srv__SetJointModule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robotis_controller_msgs__srv__SetJointModule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] joint_name\n"
  "string[] module_name\n"
  "---\n"
  "bool result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__srv__SetJointModule__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__srv__SetJointModule__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__srv__SetJointModule_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__srv__SetJointModule_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__srv__SetJointModule_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__srv__SetJointModule_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robotis_controller_msgs__srv__SetJointModule_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotis_controller_msgs__srv__SetJointModule_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__srv__SetJointModule__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__srv__SetJointModule__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotis_controller_msgs__srv__SetJointModule_Event__get_individual_type_description_source(NULL);
    sources[3] = *robotis_controller_msgs__srv__SetJointModule_Request__get_individual_type_description_source(NULL);
    sources[4] = *robotis_controller_msgs__srv__SetJointModule_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__srv__SetJointModule_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__srv__SetJointModule_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__srv__SetJointModule_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__srv__SetJointModule_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotis_controller_msgs__srv__SetJointModule_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotis_controller_msgs__srv__SetJointModule_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robotis_controller_msgs__srv__SetJointModule_Request__get_individual_type_description_source(NULL);
    sources[3] = *robotis_controller_msgs__srv__SetJointModule_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
