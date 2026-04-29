// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_camera_setting_tool_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_camera_setting_tool_msgs/srv/set_parameters.hpp"


#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__TRAITS_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_camera_setting_tool_msgs/srv/detail/set_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'params'
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__traits.hpp"

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParameters_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParameters_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_camera_setting_tool_msgs::srv::SetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_camera_setting_tool_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_camera_setting_tool_msgs::srv::SetParameters_Request & msg)
{
  return op3_camera_setting_tool_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::srv::SetParameters_Request>()
{
  return "op3_camera_setting_tool_msgs::srv::SetParameters_Request";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::srv::SetParameters_Request>()
{
  return "op3_camera_setting_tool_msgs/srv/SetParameters_Request";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters_Request>
  : std::integral_constant<bool, has_fixed_size<op3_camera_setting_tool_msgs::msg::CameraParams>::value> {};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Request>
  : std::integral_constant<bool, has_bounded_size<op3_camera_setting_tool_msgs::msg::CameraParams>::value> {};

template<>
struct is_message<op3_camera_setting_tool_msgs::srv::SetParameters_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'returns'
// already included above
// #include "op3_camera_setting_tool_msgs/msg/detail/camera_params__traits.hpp"

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParameters_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: returns
  {
    out << "returns: ";
    to_flow_style_yaml(msg.returns, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: returns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "returns:\n";
    to_block_style_yaml(msg.returns, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParameters_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_camera_setting_tool_msgs::srv::SetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_camera_setting_tool_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_camera_setting_tool_msgs::srv::SetParameters_Response & msg)
{
  return op3_camera_setting_tool_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::srv::SetParameters_Response>()
{
  return "op3_camera_setting_tool_msgs::srv::SetParameters_Response";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::srv::SetParameters_Response>()
{
  return "op3_camera_setting_tool_msgs/srv/SetParameters_Response";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters_Response>
  : std::integral_constant<bool, has_fixed_size<op3_camera_setting_tool_msgs::msg::CameraParams>::value> {};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Response>
  : std::integral_constant<bool, has_bounded_size<op3_camera_setting_tool_msgs::msg::CameraParams>::value> {};

template<>
struct is_message<op3_camera_setting_tool_msgs::srv::SetParameters_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace op3_camera_setting_tool_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetParameters_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetParameters_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetParameters_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_camera_setting_tool_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_camera_setting_tool_msgs::srv::SetParameters_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_camera_setting_tool_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_camera_setting_tool_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_camera_setting_tool_msgs::srv::SetParameters_Event & msg)
{
  return op3_camera_setting_tool_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::srv::SetParameters_Event>()
{
  return "op3_camera_setting_tool_msgs::srv::SetParameters_Event";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::srv::SetParameters_Event>()
{
  return "op3_camera_setting_tool_msgs/srv/SetParameters_Event";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Event>
  : std::integral_constant<bool, has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Request>::value && has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<op3_camera_setting_tool_msgs::srv::SetParameters_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_camera_setting_tool_msgs::srv::SetParameters>()
{
  return "op3_camera_setting_tool_msgs::srv::SetParameters";
}

template<>
inline const char * name<op3_camera_setting_tool_msgs::srv::SetParameters>()
{
  return "op3_camera_setting_tool_msgs/srv/SetParameters";
}

template<>
struct has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters_Request>::value &&
    has_fixed_size<op3_camera_setting_tool_msgs::srv::SetParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Request>::value &&
    has_bounded_size<op3_camera_setting_tool_msgs::srv::SetParameters_Response>::value
  >
{
};

template<>
struct is_service<op3_camera_setting_tool_msgs::srv::SetParameters>
  : std::true_type
{
};

template<>
struct is_service_request<op3_camera_setting_tool_msgs::srv::SetParameters_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_camera_setting_tool_msgs::srv::SetParameters_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__SRV__DETAIL__SET_PARAMETERS__TRAITS_HPP_
