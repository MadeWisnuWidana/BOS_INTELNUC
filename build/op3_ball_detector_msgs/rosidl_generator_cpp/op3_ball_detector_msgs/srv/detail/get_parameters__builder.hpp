// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_ball_detector_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_ball_detector_msgs/srv/get_parameters.hpp"


#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_ball_detector_msgs/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_ball_detector_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::GetParameters_Request>()
{
  return ::op3_ball_detector_msgs::srv::GetParameters_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_ball_detector_msgs


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Response_returns
{
public:
  Init_GetParameters_Response_returns()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_ball_detector_msgs::srv::GetParameters_Response returns(::op3_ball_detector_msgs::srv::GetParameters_Response::_returns_type arg)
  {
    msg_.returns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::GetParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::GetParameters_Response>()
{
  return op3_ball_detector_msgs::srv::builder::Init_GetParameters_Response_returns();
}

}  // namespace op3_ball_detector_msgs


namespace op3_ball_detector_msgs
{

namespace srv
{

namespace builder
{

class Init_GetParameters_Event_response
{
public:
  explicit Init_GetParameters_Event_response(::op3_ball_detector_msgs::srv::GetParameters_Event & msg)
  : msg_(msg)
  {}
  ::op3_ball_detector_msgs::srv::GetParameters_Event response(::op3_ball_detector_msgs::srv::GetParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::GetParameters_Event msg_;
};

class Init_GetParameters_Event_request
{
public:
  explicit Init_GetParameters_Event_request(::op3_ball_detector_msgs::srv::GetParameters_Event & msg)
  : msg_(msg)
  {}
  Init_GetParameters_Event_response request(::op3_ball_detector_msgs::srv::GetParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetParameters_Event_response(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::GetParameters_Event msg_;
};

class Init_GetParameters_Event_info
{
public:
  Init_GetParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetParameters_Event_request info(::op3_ball_detector_msgs::srv::GetParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetParameters_Event_request(msg_);
  }

private:
  ::op3_ball_detector_msgs::srv::GetParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_ball_detector_msgs::srv::GetParameters_Event>()
{
  return op3_ball_detector_msgs::srv::builder::Init_GetParameters_Event_info();
}

}  // namespace op3_ball_detector_msgs

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__BUILDER_HPP_
