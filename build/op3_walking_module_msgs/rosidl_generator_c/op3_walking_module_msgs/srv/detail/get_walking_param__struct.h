// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_walking_module_msgs:srv/GetWalkingParam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_walking_module_msgs/srv/get_walking_param.h"


#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__STRUCT_H_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetWalkingParam in the package op3_walking_module_msgs.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Request
{
  bool get_param;
} op3_walking_module_msgs__srv__GetWalkingParam_Request;

// Struct for a sequence of op3_walking_module_msgs__srv__GetWalkingParam_Request.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Request__Sequence
{
  op3_walking_module_msgs__srv__GetWalkingParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__srv__GetWalkingParam_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.h"

/// Struct defined in srv/GetWalkingParam in the package op3_walking_module_msgs.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Response
{
  op3_walking_module_msgs__msg__WalkingParam parameters;
} op3_walking_module_msgs__srv__GetWalkingParam_Response;

// Struct for a sequence of op3_walking_module_msgs__srv__GetWalkingParam_Response.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Response__Sequence
{
  op3_walking_module_msgs__srv__GetWalkingParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__srv__GetWalkingParam_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  op3_walking_module_msgs__srv__GetWalkingParam_Event__request__MAX_SIZE = 1
};
// response
enum
{
  op3_walking_module_msgs__srv__GetWalkingParam_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetWalkingParam in the package op3_walking_module_msgs.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Event
{
  service_msgs__msg__ServiceEventInfo info;
  op3_walking_module_msgs__srv__GetWalkingParam_Request__Sequence request;
  op3_walking_module_msgs__srv__GetWalkingParam_Response__Sequence response;
} op3_walking_module_msgs__srv__GetWalkingParam_Event;

// Struct for a sequence of op3_walking_module_msgs__srv__GetWalkingParam_Event.
typedef struct op3_walking_module_msgs__srv__GetWalkingParam_Event__Sequence
{
  op3_walking_module_msgs__srv__GetWalkingParam_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_walking_module_msgs__srv__GetWalkingParam_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__STRUCT_H_
