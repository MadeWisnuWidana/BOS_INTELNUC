// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_offset_tuner_msgs
const rosidl_type_hash_t *
op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x92, 0x8d, 0x7a, 0x7c, 0xf4, 0x5b, 0xde,
      0x0d, 0xf8, 0x0b, 0xe3, 0x8a, 0x6e, 0x57, 0x04,
      0x80, 0xcc, 0x7c, 0x4d, 0x3e, 0xfa, 0xa8, 0xe9,
      0x38, 0x0a, 0x26, 0x2a, 0x16, 0xd5, 0xa4, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t op3_offset_tuner_msgs__msg__JointTorqueOnOff__EXPECTED_HASH = {1, {
    0x57, 0x90, 0xbb, 0x20, 0xf2, 0x41, 0x7e, 0x40,
    0x26, 0x8c, 0xf2, 0xa2, 0xc2, 0x02, 0xd6, 0x25,
    0x04, 0x20, 0xfc, 0x5a, 0x36, 0x9b, 0xa4, 0x37,
    0x5a, 0x0f, 0x61, 0x74, 0x42, 0xa3, 0x42, 0x90,
  }};
#endif

static char op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointTorqueOnOffArray";
static char op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME[] = "op3_offset_tuner_msgs/msg/JointTorqueOnOff";

// Define type names, field names, and default values
static char op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__FIELD_NAME__torque_enable_data[] = "torque_enable_data";

static rosidl_runtime_c__type_description__Field op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__FIELDS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__FIELD_NAME__torque_enable_data, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOff__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__TYPE_NAME, 47, 47},
      {op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__FIELDS, 1, 1},
    },
    {op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_offset_tuner_msgs__msg__JointTorqueOnOff__EXPECTED_HASH, op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "JointTorqueOnOff[] torque_enable_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_offset_tuner_msgs__msg__JointTorqueOnOffArray__get_individual_type_description_source(NULL),
    sources[1] = *op3_offset_tuner_msgs__msg__JointTorqueOnOff__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
