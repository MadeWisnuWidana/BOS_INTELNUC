// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
// generated code does not contain a copyright notice

#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_op3_ball_detector_msgs
const rosidl_type_hash_t *
op3_ball_detector_msgs__msg__BallDetectorParams__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x45, 0x38, 0xd1, 0x67, 0x46, 0xd2, 0xc2,
      0x68, 0xf2, 0xd2, 0x8b, 0x4c, 0xf7, 0x55, 0x5c,
      0x2c, 0xfa, 0xb8, 0x74, 0xcc, 0x67, 0x72, 0x80,
      0x8f, 0xf8, 0x47, 0x47, 0x8f, 0xc9, 0x61, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char op3_ball_detector_msgs__msg__BallDetectorParams__TYPE_NAME[] = "op3_ball_detector_msgs/msg/BallDetectorParams";

// Define type names, field names, and default values
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__gaussian_blur_size[] = "gaussian_blur_size";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__gaussian_blur_sigma[] = "gaussian_blur_sigma";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__canny_edge_th[] = "canny_edge_th";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__hough_accum_resolution[] = "hough_accum_resolution";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__hough_accum_th[] = "hough_accum_th";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__min_circle_dist[] = "min_circle_dist";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__min_radius[] = "min_radius";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__max_radius[] = "max_radius";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_h_min[] = "filter_h_min";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_h_max[] = "filter_h_max";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_s_min[] = "filter_s_min";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_s_max[] = "filter_s_max";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_v_min[] = "filter_v_min";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_v_max[] = "filter_v_max";
static char op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__ellipse_size[] = "ellipse_size";

static rosidl_runtime_c__type_description__Field op3_ball_detector_msgs__msg__BallDetectorParams__FIELDS[] = {
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__gaussian_blur_size, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__gaussian_blur_sigma, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__canny_edge_th, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__hough_accum_resolution, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__hough_accum_th, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__min_circle_dist, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__min_radius, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__max_radius, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_h_min, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_h_max, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_s_min, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_s_max, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_v_min, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__filter_v_max, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {op3_ball_detector_msgs__msg__BallDetectorParams__FIELD_NAME__ellipse_size, 12, 12},
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
op3_ball_detector_msgs__msg__BallDetectorParams__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {op3_ball_detector_msgs__msg__BallDetectorParams__TYPE_NAME, 45, 45},
      {op3_ball_detector_msgs__msg__BallDetectorParams__FIELDS, 15, 15},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This represents the parameters of ball_detector\n"
  "\n"
  "uint32  gaussian_blur_size      # only odd number, 1 - 11\n"
  "float32 gaussian_blur_sigma     # 1 - 5\n"
  "float32 canny_edge_th           # 50 - 200\n"
  "float32 hough_accum_resolution  # 1 - 8\n"
  "float32 hough_accum_th          # 10 - 200\n"
  "float32 min_circle_dist         # 10 - 200\n"
  "uint32  min_radius              # 10 - 200\n"
  "uint32  max_radius              # 100 - 600\n"
  "uint32  filter_h_min            # 0 - 359\n"
  "uint32  filter_h_max\n"
  "uint32  filter_s_min            # 0 - 255\n"
  "uint32  filter_s_max\n"
  "uint32  filter_v_min            # 0 - 255\n"
  "uint32  filter_v_max\n"
  "uint32  ellipse_size            # 1 - 9";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
op3_ball_detector_msgs__msg__BallDetectorParams__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {op3_ball_detector_msgs__msg__BallDetectorParams__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 634, 634},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
op3_ball_detector_msgs__msg__BallDetectorParams__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *op3_ball_detector_msgs__msg__BallDetectorParams__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
