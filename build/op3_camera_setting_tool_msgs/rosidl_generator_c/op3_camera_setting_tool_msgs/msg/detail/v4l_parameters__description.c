// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__msg__V4lParameters__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xa7, 0x0a, 0x1c, 0x90, 0x1e, 0x14, 0xc0,
      0xd2, 0xe9, 0x77, 0x97, 0x04, 0x32, 0xc0, 0x7a,
      0x27, 0xda, 0x71, 0x5d, 0x3c, 0xc8, 0x65, 0x6c,
      0x54, 0xa6, 0xed, 0x6a, 0x96, 0xfd, 0x14, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t op3_camera_setting_tool_msgs__msg__V4lParameter__EXPECTED_HASH = {1, {
    0xcb, 0x4a, 0x8f, 0xfd, 0xc7, 0x85, 0x2d, 0xef,
    0xf2, 0x03, 0xf8, 0x0b, 0xb3, 0xa7, 0xca, 0x43,
    0x93, 0x5c, 0xed, 0x09, 0xa9, 0x37, 0x43, 0x96,
    0x99, 0xa6, 0x95, 0x08, 0x82, 0x7e, 0x24, 0x08,
  }};
#endif

static char op3_camera_setting_tool_msgs__msg__V4lParameters__TYPE_NAME[] = "op3_camera_setting_tool_msgs/msg/V4lParameters";
static char op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME[] = "op3_camera_setting_tool_msgs/msg/V4lParameter";

// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__msg__V4lParameters__FIELD_NAME__video_parameter[] = "video_parameter";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__msg__V4lParameters__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__V4lParameters__FIELD_NAME__video_parameter, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_camera_setting_tool_msgs__msg__V4lParameters__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__V4lParameter__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__msg__V4lParameters__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__msg__V4lParameters__TYPE_NAME, 46, 46},
      {op3_camera_setting_tool_msgs__msg__V4lParameters__FIELDS, 1, 1},
    },
    {op3_camera_setting_tool_msgs__msg__V4lParameters__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_camera_setting_tool_msgs__msg__V4lParameter__EXPECTED_HASH, op3_camera_setting_tool_msgs__msg__V4lParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_camera_setting_tool_msgs__msg__V4lParameter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "V4lParameter[]    video_parameter";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__msg__V4lParameters__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__msg__V4lParameters__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__msg__V4lParameters__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__msg__V4lParameters__get_individual_type_description_source(NULL),
    sources[1] = *op3_camera_setting_tool_msgs__msg__V4lParameter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
