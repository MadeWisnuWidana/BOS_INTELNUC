// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_walking_module_msgs:srv/GetWalkingParam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_walking_module_msgs/srv/get_walking_param.hpp"


#ifndef OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__BUILDER_HPP_
#define OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_walking_module_msgs/srv/detail/get_walking_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWalkingParam_Request_get_param
{
public:
  Init_GetWalkingParam_Request_get_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_walking_module_msgs::srv::GetWalkingParam_Request get_param(::op3_walking_module_msgs::srv::GetWalkingParam_Request::_get_param_type arg)
  {
    msg_.get_param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::GetWalkingParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::GetWalkingParam_Request>()
{
  return op3_walking_module_msgs::srv::builder::Init_GetWalkingParam_Request_get_param();
}

}  // namespace op3_walking_module_msgs


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWalkingParam_Response_parameters
{
public:
  Init_GetWalkingParam_Response_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_walking_module_msgs::srv::GetWalkingParam_Response parameters(::op3_walking_module_msgs::srv::GetWalkingParam_Response::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::GetWalkingParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::GetWalkingParam_Response>()
{
  return op3_walking_module_msgs::srv::builder::Init_GetWalkingParam_Response_parameters();
}

}  // namespace op3_walking_module_msgs


namespace op3_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWalkingParam_Event_response
{
public:
  explicit Init_GetWalkingParam_Event_response(::op3_walking_module_msgs::srv::GetWalkingParam_Event & msg)
  : msg_(msg)
  {}
  ::op3_walking_module_msgs::srv::GetWalkingParam_Event response(::op3_walking_module_msgs::srv::GetWalkingParam_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::GetWalkingParam_Event msg_;
};

class Init_GetWalkingParam_Event_request
{
public:
  explicit Init_GetWalkingParam_Event_request(::op3_walking_module_msgs::srv::GetWalkingParam_Event & msg)
  : msg_(msg)
  {}
  Init_GetWalkingParam_Event_response request(::op3_walking_module_msgs::srv::GetWalkingParam_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetWalkingParam_Event_response(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::GetWalkingParam_Event msg_;
};

class Init_GetWalkingParam_Event_info
{
public:
  Init_GetWalkingParam_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWalkingParam_Event_request info(::op3_walking_module_msgs::srv::GetWalkingParam_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetWalkingParam_Event_request(msg_);
  }

private:
  ::op3_walking_module_msgs::srv::GetWalkingParam_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::srv::GetWalkingParam_Event>()
{
  return op3_walking_module_msgs::srv::builder::Init_GetWalkingParam_Event_info();
}

}  // namespace op3_walking_module_msgs

#endif  // OP3_WALKING_MODULE_MSGS__SRV__DETAIL__GET_WALKING_PARAM__BUILDER_HPP_
