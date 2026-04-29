// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robotis_controller_msgs:srv/SetModule.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robotis_controller_msgs/srv/detail/set_module__functions.h"
#include "robotis_controller_msgs/srv/detail/set_module__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetModule_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetModule_Request_type_support_ids_t;

static const _SetModule_Request_type_support_ids_t _SetModule_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetModule_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetModule_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetModule_Request_type_support_symbol_names_t _SetModule_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetModule_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetModule_Request)),
  }
};

typedef struct _SetModule_Request_type_support_data_t
{
  void * data[2];
} _SetModule_Request_type_support_data_t;

static _SetModule_Request_type_support_data_t _SetModule_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetModule_Request_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetModule_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetModule_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetModule_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetModule_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetModule_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetModule_Request__get_type_hash,
  &robotis_controller_msgs__srv__SetModule_Request__get_type_description,
  &robotis_controller_msgs__srv__SetModule_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Request>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetModule_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetModule_Request)() {
  return get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_module__functions.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetModule_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetModule_Response_type_support_ids_t;

static const _SetModule_Response_type_support_ids_t _SetModule_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetModule_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetModule_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetModule_Response_type_support_symbol_names_t _SetModule_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetModule_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetModule_Response)),
  }
};

typedef struct _SetModule_Response_type_support_data_t
{
  void * data[2];
} _SetModule_Response_type_support_data_t;

static _SetModule_Response_type_support_data_t _SetModule_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetModule_Response_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetModule_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetModule_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetModule_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetModule_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetModule_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetModule_Response__get_type_hash,
  &robotis_controller_msgs__srv__SetModule_Response__get_type_description,
  &robotis_controller_msgs__srv__SetModule_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Response>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetModule_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetModule_Response)() {
  return get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_module__functions.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetModule_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetModule_Event_type_support_ids_t;

static const _SetModule_Event_type_support_ids_t _SetModule_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetModule_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetModule_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetModule_Event_type_support_symbol_names_t _SetModule_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetModule_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetModule_Event)),
  }
};

typedef struct _SetModule_Event_type_support_data_t
{
  void * data[2];
} _SetModule_Event_type_support_data_t;

static _SetModule_Event_type_support_data_t _SetModule_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetModule_Event_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetModule_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetModule_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetModule_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetModule_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetModule_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robotis_controller_msgs__srv__SetModule_Event__get_type_hash,
  &robotis_controller_msgs__srv__SetModule_Event__get_type_description,
  &robotis_controller_msgs__srv__SetModule_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Event>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetModule_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetModule_Event)() {
  return get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetModule_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetModule_type_support_ids_t;

static const _SetModule_type_support_ids_t _SetModule_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetModule_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetModule_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetModule_type_support_symbol_names_t _SetModule_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetModule)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetModule)),
  }
};

typedef struct _SetModule_type_support_data_t
{
  void * data[2];
} _SetModule_type_support_data_t;

static _SetModule_type_support_data_t _SetModule_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetModule_service_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetModule_service_typesupport_ids.typesupport_identifier[0],
  &_SetModule_service_typesupport_symbol_names.symbol_name[0],
  &_SetModule_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetModule_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetModule_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robotis_controller_msgs::srv::SetModule_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robotis_controller_msgs::srv::SetModule>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robotis_controller_msgs::srv::SetModule>,
  &robotis_controller_msgs__srv__SetModule__get_type_hash,
  &robotis_controller_msgs__srv__SetModule__get_type_description,
  &robotis_controller_msgs__srv__SetModule__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotis_controller_msgs::srv::SetModule>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetModule_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetModule)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robotis_controller_msgs::srv::SetModule>();
}

#ifdef __cplusplus
}
#endif
