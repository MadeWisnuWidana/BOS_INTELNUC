// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_ball_detector_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_ball_detector_msgs/srv/get_parameters.h"


#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetParameters in the package op3_ball_detector_msgs.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_ball_detector_msgs__srv__GetParameters_Request;

// Struct for a sequence of op3_ball_detector_msgs__srv__GetParameters_Request.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Request__Sequence
{
  op3_ball_detector_msgs__srv__GetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__srv__GetParameters_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'returns'
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.h"

/// Struct defined in srv/GetParameters in the package op3_ball_detector_msgs.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Response
{
  op3_ball_detector_msgs__msg__BallDetectorParams returns;
} op3_ball_detector_msgs__srv__GetParameters_Response;

// Struct for a sequence of op3_ball_detector_msgs__srv__GetParameters_Response.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Response__Sequence
{
  op3_ball_detector_msgs__srv__GetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__srv__GetParameters_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  op3_ball_detector_msgs__srv__GetParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  op3_ball_detector_msgs__srv__GetParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetParameters in the package op3_ball_detector_msgs.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  op3_ball_detector_msgs__srv__GetParameters_Request__Sequence request;
  op3_ball_detector_msgs__srv__GetParameters_Response__Sequence response;
} op3_ball_detector_msgs__srv__GetParameters_Event;

// Struct for a sequence of op3_ball_detector_msgs__srv__GetParameters_Event.
typedef struct op3_ball_detector_msgs__srv__GetParameters_Event__Sequence
{
  op3_ball_detector_msgs__srv__GetParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_ball_detector_msgs__srv__GetParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
