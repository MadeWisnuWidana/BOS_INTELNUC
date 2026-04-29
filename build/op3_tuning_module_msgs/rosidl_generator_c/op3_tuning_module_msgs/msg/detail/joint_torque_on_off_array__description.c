// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_tuning_module_msgs
const rosidl_type_hash_t *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x2e, 0x68, 0x88, 0x1c, 0x75, 0x47, 0x42,
      0xb8, 0xf1, 0xc3, 0xf3, 0x10, 0x49, 0xea, 0xc1,
      0x86, 0xf7, 0xfd, 0xc4, 0x61, 0xc7, 0xe5, 0x80,
      0x99, 0x05, 0x16, 0x55, 0x9f, 0x7f, 0x1f, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t op3_tuning_module_msgs__msg__JointTorqueOnOff__EXPECTED_HASH = {1, {
    0x4c, 0xd1, 0x00, 0x56, 0x14, 0xbf, 0x41, 0x82,
    0xab, 0x6c, 0x49, 0xcd, 0x38, 0x7c, 0xc4, 0x10,
    0xab, 0x00, 0xf8, 0x59, 0x73, 0xcf, 0x4d, 0x07,
    0x67, 0x34, 0x03, 0x50, 0xa8, 0xdf, 0xe7, 0xa2,
  }};
#endif

static char op3_tuning_module_msgs__msg__JointTorqueOnOffArray__TYPE_NAME[] = "op3_tuning_module_msgs/msg/JointTorqueOnOffArray";
static char op3_tuning_module_msgs__msg__JointTorqueOnOff__TYPE_NAME[] = "op3_tuning_module_msgs/msg/JointTorqueOnOff";

// Define type names, field names, and default values
static char op3_tuning_module_msgs__msg__JointTorqueOnOffArray__FIELD_NAME__torque_enable_data[] = "torque_enable_data";

static rosidl_runtime_c__type_description__Field op3_tuning_module_msgs__msg__JointTorqueOnOffArray__FIELDS[] = {
  {
    {op3_tuning_module_msgs__msg__JointTorqueOnOffArray__FIELD_NAME__torque_enable_data, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {op3_tuning_module_msgs__msg__JointTorqueOnOff__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription op3_tuning_module_msgs__msg__JointTorqueOnOffArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {op3_tuning_module_msgs__msg__JointTorqueOnOff__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_tuning_module_msgs__msg__JointTorqueOnOffArray__TYPE_NAME, 48, 48},
      {op3_tuning_module_msgs__msg__JointTorqueOnOffArray__FIELDS, 1, 1},
    },
    {op3_tuning_module_msgs__msg__JointTorqueOnOffArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&op3_tuning_module_msgs__msg__JointTorqueOnOff__EXPECTED_HASH, op3_tuning_module_msgs__msg__JointTorqueOnOff__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = op3_tuning_module_msgs__msg__JointTorqueOnOff__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "JointTorqueOnOff[] torque_enable_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_tuning_module_msgs__msg__JointTorqueOnOffArray__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_tuning_module_msgs__msg__JointTorqueOnOffArray__get_individual_type_description_source(NULL),
    sources[1] = *op3_tuning_module_msgs__msg__JointTorqueOnOff__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
