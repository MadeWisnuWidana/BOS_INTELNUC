// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotis_controller_msgs:srv/SetModule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotis_controller_msgs/srv/set_module.h"


#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'module_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetModule_Request
{
  rosidl_runtime_c__String module_name;
} robotis_controller_msgs__srv__SetModule_Request;

// Struct for a sequence of robotis_controller_msgs__srv__SetModule_Request.
typedef struct robotis_controller_msgs__srv__SetModule_Request__Sequence
{
  robotis_controller_msgs__srv__SetModule_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetModule_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetModule_Response
{
  bool result;
} robotis_controller_msgs__srv__SetModule_Response;

// Struct for a sequence of robotis_controller_msgs__srv__SetModule_Response.
typedef struct robotis_controller_msgs__srv__SetModule_Response__Sequence
{
  robotis_controller_msgs__srv__SetModule_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetModule_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robotis_controller_msgs__srv__SetModule_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robotis_controller_msgs__srv__SetModule_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetModule in the package robotis_controller_msgs.
typedef struct robotis_controller_msgs__srv__SetModule_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robotis_controller_msgs__srv__SetModule_Request__Sequence request;
  robotis_controller_msgs__srv__SetModule_Response__Sequence response;
} robotis_controller_msgs__srv__SetModule_Event;

// Struct for a sequence of robotis_controller_msgs__srv__SetModule_Event.
typedef struct robotis_controller_msgs__srv__SetModule_Event__Sequence
{
  robotis_controller_msgs__srv__SetModule_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotis_controller_msgs__srv__SetModule_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__SET_MODULE__STRUCT_H_
