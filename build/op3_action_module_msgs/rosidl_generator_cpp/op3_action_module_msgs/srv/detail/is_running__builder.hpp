// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_action_module_msgs/srv/is_running.hpp"


#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_action_module_msgs/srv/detail/is_running__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_action_module_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::srv::IsRunning_Request>()
{
  return ::op3_action_module_msgs::srv::IsRunning_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_action_module_msgs


namespace op3_action_module_msgs
{

namespace srv
{

namespace builder
{

class Init_IsRunning_Response_is_running
{
public:
  Init_IsRunning_Response_is_running()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_action_module_msgs::srv::IsRunning_Response is_running(::op3_action_module_msgs::srv::IsRunning_Response::_is_running_type arg)
  {
    msg_.is_running = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_action_module_msgs::srv::IsRunning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::srv::IsRunning_Response>()
{
  return op3_action_module_msgs::srv::builder::Init_IsRunning_Response_is_running();
}

}  // namespace op3_action_module_msgs


namespace op3_action_module_msgs
{

namespace srv
{

namespace builder
{

class Init_IsRunning_Event_response
{
public:
  explicit Init_IsRunning_Event_response(::op3_action_module_msgs::srv::IsRunning_Event & msg)
  : msg_(msg)
  {}
  ::op3_action_module_msgs::srv::IsRunning_Event response(::op3_action_module_msgs::srv::IsRunning_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_action_module_msgs::srv::IsRunning_Event msg_;
};

class Init_IsRunning_Event_request
{
public:
  explicit Init_IsRunning_Event_request(::op3_action_module_msgs::srv::IsRunning_Event & msg)
  : msg_(msg)
  {}
  Init_IsRunning_Event_response request(::op3_action_module_msgs::srv::IsRunning_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IsRunning_Event_response(msg_);
  }

private:
  ::op3_action_module_msgs::srv::IsRunning_Event msg_;
};

class Init_IsRunning_Event_info
{
public:
  Init_IsRunning_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsRunning_Event_request info(::op3_action_module_msgs::srv::IsRunning_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IsRunning_Event_request(msg_);
  }

private:
  ::op3_action_module_msgs::srv::IsRunning_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_action_module_msgs::srv::IsRunning_Event>()
{
  return op3_action_module_msgs::srv::builder::Init_IsRunning_Event_info();
}

}  // namespace op3_action_module_msgs

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__BUILDER_HPP_
