// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice

#include "op3_online_walking_module_msgs/msg/detail/step2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
const rosidl_type_hash_t *
op3_online_walking_module_msgs__msg__Step2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0xa4, 0x39, 0x6b, 0xfc, 0x73, 0xce, 0x87,
      0x11, 0xe7, 0xaf, 0x2e, 0x5c, 0x0a, 0xf7, 0xa1,
      0xe2, 0xae, 0x20, 0xc6, 0xcc, 0xe2, 0x13, 0x75,
      0x42, 0x7f, 0x97, 0x9e, 0xe3, 0x96, 0xc0, 0xdd,
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

static char op3_online_walking_module_msgs__msg__Step2D__TYPE_NAME[] = "op3_online_walking_module_msgs/msg/Step2D";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";

// Define type names, field names, and default values
static char op3_online_walking_module_msgs__msg__Step2D__FIELD_NAME__step2d[] = "step2d";
static char op3_online_walking_module_msgs__msg__Step2D__FIELD_NAME__moving_foot[] = "moving_foot";

static rosidl_runtime_c__type_description__Field op3_online_walking_module_msgs__msg__Step2D__FIELDS[] = {
  {
    {op3_online_walking_module_msgs__msg__Step2D__FIELD_NAME__step2d, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {op3_online_walking_module_msgs__msg__Step2D__FIELD_NAME__moving_foot, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_online_walking_module_msgs__msg__Step2D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_online_walking_module_msgs__msg__Step2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_online_walking_module_msgs__msg__Step2D__TYPE_NAME, 41, 41},
      {op3_online_walking_module_msgs__msg__Step2D__FIELDS, 2, 2},
    },
    {op3_online_walking_module_msgs__msg__Step2D__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#2D StepData\n"
  "\n"
  "geometry_msgs/Pose2D step2d   # step pose as relative offset to last leg\n"
  "\n"
  "\n"
  "# which leg to be used (left/right/no, see below)\n"
  "uint8 moving_foot   \n"
  "\n"
  "uint8 LEFT_FOOT_SWING  = 1 # Left foot constant\n"
  "uint8 RIGHT_FOOT_SWING = 2 # Right foot constant\n"
  "uint8 STANDING         = 3 # Standing constant";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_online_walking_module_msgs__msg__Step2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_online_walking_module_msgs__msg__Step2D__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 305, 305},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_online_walking_module_msgs__msg__Step2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_online_walking_module_msgs__msg__Step2D__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
