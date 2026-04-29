// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_walking_module_msgs:srv/SetWalkingParam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_walking_module_msgs/srv/set_walking_param.hpp"


#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__BUILDER_HPP_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_walking_module_msgs/srv/detail/set_walking_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_SetWalkingParam_Request_parameters
{
public:
  Init_SetWalkingParam_Request_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_walking_module_msgs::srv::SetWalkingParam_Request parameters(::op3_walking_module_msgs::srv::SetWalkingParam_Request::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::SetWalkingParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::SetWalkingParam_Request>()
{
  return op3_walking_module_msgs::srv::builder::Init_SetWalkingParam_Request_parameters();
}

}  // namespace op3_walking_module_msgs


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_SetWalkingParam_Response_result
{
public:
  Init_SetWalkingParam_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_walking_module_msgs::srv::SetWalkingParam_Response result(::op3_walking_module_msgs::srv::SetWalkingParam_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::SetWalkingParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::SetWalkingParam_Response>()
{
  return op3_walking_module_msgs::srv::builder::Init_SetWalkingParam_Response_result();
}

}  // namespace op3_walking_module_msgs


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_SetWalkingParam_Event_response
{
public:
  explicit Init_SetWalkingParam_Event_response(::op3_walking_module_msgs::srv::SetWalkingParam_Event & msg)
  : msg_(msg)
  {}
  ::op3_walking_module_msgs::srv::SetWalkingParam_Event response(::op3_walking_module_msgs::srv::SetWalkingParam_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::SetWalkingParam_Event msg_;
};

class Init_SetWalkingParam_Event_request
{
public:
  explicit Init_SetWalkingParam_Event_request(::op3_walking_module_msgs::srv::SetWalkingParam_Event & msg)
  : msg_(msg)
  {}
  Init_SetWalkingParam_Event_response request(::op3_walking_module_msgs::srv::SetWalkingParam_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetWalkingParam_Event_response(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::SetWalkingParam_Event msg_;
};

class Init_SetWalkingParam_Event_info
{
public:
  Init_SetWalkingParam_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWalkingParam_Event_request info(::op3_walking_module_msgs::srv::SetWalkingParam_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetWalkingParam_Event_request(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::SetWalkingParam_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::SetWalkingParam_Event>()
{
  return op3_walking_module_msgs::srv::builder::Init_SetWalkingParam_Event_info();
}

}  // namespace op3_walking_module_msgs

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__SET_WALKING_PARAM__BUILDER_HPP_
