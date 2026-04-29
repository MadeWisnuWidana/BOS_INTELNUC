// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_ball_detector_msgs:srv/SetParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_ball_detector_msgs/srv/set_parameters.hpp"


#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_ball_detector_msgs/srv/detail/set_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParameters_Request_params
{
public:
  Init_SetParameters_Request_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_ball_detector_msgs::srv::SetParameters_Request params(::op3_ball_detector_msgs::srv::SetParameters_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::SetParameters_Request>()
{
  return op3_ball_detector_msgs::srv::builder::Init_SetParameters_Request_params();
}

}  // namespace op3_ball_detector_msgs


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParameters_Response_returns
{
public:
  Init_SetParameters_Response_returns()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_ball_detector_msgs::srv::SetParameters_Response returns(::op3_ball_detector_msgs::srv::SetParameters_Response::_returns_type arg)
  {
    msg_.returns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::SetParameters_Response>()
{
  return op3_ball_detector_msgs::srv::builder::Init_SetParameters_Response_returns();
}

}  // namespace op3_ball_detector_msgs


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_SetParameters_Event_response
{
public:
  explicit Init_SetParameters_Event_response(::op3_ball_detector_msgs::srv::SetParameters_Event & msg)
  : msg_(msg)
  {}
  ::op3_ball_detector_msgs::srv::SetParameters_Event response(::op3_ball_detector_msgs::srv::SetParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Event msg_;
};

class Init_SetParameters_Event_request
{
public:
  explicit Init_SetParameters_Event_request(::op3_ball_detector_msgs::srv::SetParameters_Event & msg)
  : msg_(msg)
  {}
  Init_SetParameters_Event_response request(::op3_ball_detector_msgs::srv::SetParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetParameters_Event_response(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Event msg_;
};

class Init_SetParameters_Event_info
{
public:
  Init_SetParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetParameters_Event_request info(::op3_ball_detector_msgs::srv::SetParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetParameters_Event_request(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::SetParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::SetParameters_Event>()
{
  return op3_ball_detector_msgs::srv::builder::Init_SetParameters_Event_info();
}

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__SET_PARAMETERS__BUILDER_HPP_
