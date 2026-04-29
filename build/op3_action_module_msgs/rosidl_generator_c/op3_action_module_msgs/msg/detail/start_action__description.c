// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#include "op3_action_module_msgs/msg/detail/start_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
const rosidl_type_hash_t *
op3_action_module_msgs__msg__StartAction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x9a, 0xb1, 0xdd, 0x72, 0x0f, 0x60, 0x5c,
      0xe6, 0xa2, 0xb5, 0x73, 0x9b, 0x85, 0xaf, 0x05,
      0xc2, 0xbc, 0xbc, 0xe0, 0x82, 0x47, 0x02, 0xbd,
      0x02, 0x9e, 0x32, 0x65, 0x46, 0x7a, 0x2e, 0x1f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_action_module_msgs__msg__StartAction__TYPE_NAME[] = "op3_action_module_msgs/msg/StartAction";

// Define type names, field names, and default values
static char op3_action_module_msgs__msg__StartAction__FIELD_NAME__page_num[] = "page_num";
static char op3_action_module_msgs__msg__StartAction__FIELD_NAME__joint_name_array[] = "joint_name_array";

static rosidl_runtime_c__type_description__Field op3_action_module_msgs__msg__StartAction__FIELDS[] = {
  {
    {op3_action_module_msgs__msg__StartAction__FIELD_NAME__page_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_action_module_msgs__msg__StartAction__FIELD_NAME__joint_name_array, 16, 16},
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
op3_action_module_msgs__msg__StartAction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_action_module_msgs__msg__StartAction__TYPE_NAME, 38, 38},
      {op3_action_module_msgs__msg__StartAction__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32     page_num\n"
  "string[]  joint_name_array";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_action_module_msgs__msg__StartAction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_action_module_msgs__msg__StartAction__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_action_module_msgs__msg__StartAction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_action_module_msgs__msg__StartAction__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
