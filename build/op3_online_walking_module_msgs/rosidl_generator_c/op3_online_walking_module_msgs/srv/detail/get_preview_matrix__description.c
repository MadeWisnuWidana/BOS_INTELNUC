// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/srv/detail/get_preview_matrix__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__srv__GetPreviewMatrix__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x9d, 0xcc, 0xba, 0x4d, 0x49, 0x75, 0xd5,
      0xff, 0x5c, 0xfa, 0x89, 0x4e, 0x9f, 0x8c, 0xcd,
      0xcf, 0x8a, 0xfa, 0x6e, 0x0e, 0xe5, 0x0a, 0xe8,
      0xeb, 0xbe, 0xe1, 0x2d, 0xfa, 0x1c, 0x97, 0x71,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x66, 0x3c, 0x7d, 0x7d, 0xee, 0xbd, 0xfc,
      0xf7, 0x48, 0xd1, 0x14, 0xbe, 0x91, 0xe7, 0x00,
      0x41, 0xd6, 0xda, 0x63, 0x63, 0xa4, 0x6a, 0xac,
      0xb6, 0xe8, 0xb9, 0x75, 0xa3, 0x5a, 0x1d, 0xb2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0xe1, 0x54, 0x09, 0x8b, 0xbb, 0x23, 0x95,
      0x67, 0xd3, 0x12, 0x3b, 0x7e, 0x25, 0x1f, 0xf8,
      0xb1, 0xbc, 0x16, 0xbf, 0x39, 0x0b, 0x8e, 0x45,
      0x1e, 0x4b, 0x17, 0x32, 0x7a, 0xea, 0xed, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xed, 0x2a, 0xd5, 0x54, 0x30, 0xe2, 0xa2,
      0xec, 0xed, 0x4a, 0x2b, 0x4c, 0xd6, 0x60, 0xa5,
      0x0e, 0x67, 0x61, 0x0e, 0x50, 0xbd, 0xf7, 0x8f,
      0x04, 0xdd, 0x91, 0x40, 0x94, 0x85, 0x03, 0xf6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "op3_online_walking_module_msgs/msg/detail/preview_response__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "op3_online_walking_module_msgs/msg/detail/preview_request__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t op3_online_walking_module_msgs__msg__PreviewRequest__EXPECTED_HASH = {1, {
    0xcf, 0xad, 0x89, 0xb3, 0xe0, 0x63, 0x03, 0xd7,
    0xfd, 0x0f, 0x25, 0x59, 0x2f, 0xde, 0xb2, 0xdf,
    0x0f, 0x0f, 0xc4, 0x37, 0x1e, 0xbe, 0x8a, 0x70,
    0x2e, 0xb0, 0x92, 0x9a, 0xcb, 0x11, 0x8c, 0xa6,
  }};
static const rosidl_type_hash_t op3_online_walking_module_msgs__msg__PreviewResponse__EXPECTED_HASH = {1, {
    0xd6, 0xbf, 0xa9, 0x2e, 0x05, 0x65, 0x7f, 0x48,
    0xdb, 0xc7, 0x57, 0xd4, 0x7b, 0x17, 0x98, 0xbf,
    0xa4, 0xe6, 0x7b, 0x95, 0xe9, 0xe4, 0xfd, 0x26,
    0xec, 0x44, 0xba, 0xb7, 0xcc, 0x0f, 0x92, 0x67,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char op3_online_walking_module_msgs__srv__GetPreviewMatrix__TYPE_NAME[] = "op3_online_walking_module_msgs/srv/GetPreviewMatrix";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/PreviewRequest";
static char op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/PreviewResponse";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__TYPE_NAME[] = "op3_online_walking_module_msgs/srv/GetPreviewMatrix_Event";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME[] = "op3_online_walking_module_msgs/srv/GetPreviewMatrix_Request";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME[] = "op3_online_walking_module_msgs/srv/GetPreviewMatrix_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__request_message[] = "request_message";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__response_message[] = "response_message";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__srv__GetPreviewMatrix__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__srv__GetPreviewMatrix__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix__TYPE_NAME, 51, 51},
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix__FIELDS, 3, 3},
    },
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewRequest__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewRequest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_online_walking_module_msgs__msg__PreviewRequest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewResponse__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewResponse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = op3_online_walking_module_msgs__msg__PreviewResponse__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__FIELD_NAME__req[] = "req";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__FIELD_NAME__req, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__FIELDS, 1, 1},
    },
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewRequest__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewRequest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_online_walking_module_msgs__msg__PreviewRequest__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__FIELD_NAME__res[] = "res";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__FIELD_NAME__res, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__FIELDS, 1, 1},
    },
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewResponse__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewResponse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_online_walking_module_msgs__msg__PreviewResponse__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__info[] = "info";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__request[] = "request";
static char op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewRequest__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__PreviewResponse__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__TYPE_NAME, 57, 57},
      {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__FIELDS, 3, 3},
    },
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewRequest__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewRequest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = op3_online_walking_module_msgs__msg__PreviewRequest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&op3_online_walking_module_msgs__msg__PreviewResponse__EXPECTED_HASH, op3_online_walking_module_msgs__msg__PreviewResponse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = op3_online_walking_module_msgs__msg__PreviewResponse__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "op3_online_walking_module_msgs/PreviewRequest req\n"
  "---\n"
  "op3_online_walking_module_msgs/PreviewResponse res";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__srv__GetPreviewMatrix__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix__TYPE_NAME, 51, 51},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__TYPE_NAME, 59, 59},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__TYPE_NAME, 60, 60},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__srv__GetPreviewMatrix__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_online_walking_module_msgs__msg__PreviewRequest__get_individual_type_description_source(NULL);
    sources[3] = *op3_online_walking_module_msgs__msg__PreviewResponse__get_individual_type_description_source(NULL);
    sources[4] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_individual_type_description_source(NULL);
    sources[5] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_individual_type_description_source(NULL);
    sources[6] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_individual_type_description_source(NULL),
    sources[1] = *op3_online_walking_module_msgs__msg__PreviewRequest__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_individual_type_description_source(NULL),
    sources[1] = *op3_online_walking_module_msgs__msg__PreviewResponse__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *op3_online_walking_module_msgs__msg__PreviewRequest__get_individual_type_description_source(NULL);
    sources[3] = *op3_online_walking_module_msgs__msg__PreviewResponse__get_individual_type_description_source(NULL);
    sources[4] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__get_individual_type_description_source(NULL);
    sources[5] = *op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
