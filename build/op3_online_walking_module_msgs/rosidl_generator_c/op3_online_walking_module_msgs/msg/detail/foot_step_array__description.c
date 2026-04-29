// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__FootStepArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x3f, 0x46, 0x28, 0x1b, 0x49, 0xcf, 0x1a,
      0xc3, 0xeb, 0xdc, 0x81, 0x5b, 0x8a, 0xee, 0xb9,
      0xec, 0x77, 0x42, 0xcb, 0xd4, 0xa1, 0x20, 0x8a,
      0x28, 0x5d, 0xda, 0x4e, 0xd7, 0x33, 0x02, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
#endif

static char op3_online_walking_module_msgs__msg__FootStepArray__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/FootStepArray";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__FootStepArray__FIELD_NAME__moving_foot[] = "moving_foot";
static char op3_online_walking_module_msgs__msg__FootStepArray__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__FootStepArray__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__FootStepArray__FIELD_NAME__moving_foot, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__FootStepArray__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__msg__FootStepArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__msg__FootStepArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__FootStepArray__TYPE_NAME, 48, 48},
      {op3_online_walking_module_msgs__msg__FootStepArray__FIELDS, 2, 2},
    },
    {op3_online_walking_module_msgs__msg__FootStepArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "int32 LEFT_FOOT  = 0 # Left foot constant\n"
  "int32 RIGHT_FOOT = 1 # Right foot constant\n"
  "\n"
  "int32[]                moving_foot\n"
  "geometry_msgs/Pose2D[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__FootStepArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__FootStepArray__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__FootStepArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__FootStepArray__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
