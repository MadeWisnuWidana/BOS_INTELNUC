// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_camera_setting_tool_msgs
const rosidl_type_hash_t *
op3_camera_setting_tool_msgs__msg__CameraParams__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x74, 0x08, 0x32, 0x1f, 0xde, 0xa0, 0x11,
      0x12, 0x87, 0xc9, 0x3b, 0xce, 0x6c, 0x96, 0x44,
      0x2b, 0xe8, 0xb2, 0xa6, 0x51, 0x4f, 0xbf, 0x8e,
      0x60, 0xe7, 0x3b, 0x30, 0xb3, 0x4f, 0x0a, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME[] = "op3_camera_setting_tool_msgs/msg/CameraParams";

// Define type names, field names, and default values
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__brightness[] = "brightness";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__contrast[] = "contrast";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__saturation[] = "saturation";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__sharpness[] = "sharpness";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__gain[] = "gain";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__focus_automatic_continuous[] = "focus_automatic_continuous";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__focus_absolute[] = "focus_absolute";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__auto_exposure[] = "auto_exposure";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__exposure_time_absolute[] = "exposure_time_absolute";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__white_balance_automatic[] = "white_balance_automatic";
static char op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__white_balance_temperature[] = "white_balance_temperature";

static rosidl_runtime_c__type_description__Field op3_camera_setting_tool_msgs__msg__CameraParams__FIELDS[] = {
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__brightness, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__contrast, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__saturation, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__sharpness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__gain, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__focus_automatic_continuous, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__focus_absolute, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__auto_exposure, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__exposure_time_absolute, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__white_balance_automatic, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_camera_setting_tool_msgs__msg__CameraParams__FIELD_NAME__white_balance_temperature, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
      {op3_camera_setting_tool_msgs__msg__CameraParams__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This represents the parameters of usb camera\n"
  "\n"
  "uint32  brightness \\t\\t\\t\\t\\t\\t\\t            # 0 - 255, step = 1, default: 128\n"
  "uint32  contrast                            # 0 - 255, step = 1, default: 128\n"
  "uint32  saturation                          # 0 - 255, step = 1, default: 128\n"
  "uint32  sharpness                           # 0 - 255, step = 1, default: 128\n"
  "uint32  gain                                # 0 - 255, step = 1, default: 0\n"
  "bool    focus_automatic_continuous          # default: true\n"
  "int32   focus_absolute                      # 0 - 250, step = 5, default: 0\n"
  "uint32  auto_exposure                       # 0 - 3, default: 3\n"
  "uint32  exposure_time_absolute              # 3 - 2047, step = 1, default: 250\n"
  "bool    white_balance_automatic             # default: true\n"
  "uint32  white_balance_temperature           # 2000 - 6500, step = 1, default: 4000";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_camera_setting_tool_msgs__msg__CameraParams__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 852, 852},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_camera_setting_tool_msgs__msg__CameraParams__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_camera_setting_tool_msgs__msg__CameraParams__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
