// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_offset_tuner_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_offset_tuner_msgs/srv/get_present_joint_offset_data.hpp"


#ifndef OP3_OFFSET_TUNER_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_
#define OP3_OFFSET_TUNER_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_offset_tuner_msgs/srv/detail/get_present_joint_offset_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_offset_tuner_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Request>()
{
  return ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_offset_tuner_msgs


namespace op3_offset_tuner_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPresentJointOffsetData_Response_present_data_array
{
public:
  Init_GetPresentJointOffsetData_Response_present_data_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Response present_data_array(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Response::_present_data_array_type arg)
  {
    msg_.present_data_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Response>()
{
  return op3_offset_tuner_msgs::srv::builder::Init_GetPresentJointOffsetData_Response_present_data_array();
}

}  // namespace op3_offset_tuner_msgs


namespace op3_offset_tuner_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPresentJointOffsetData_Event_response
{
public:
  explicit Init_GetPresentJointOffsetData_Event_response(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event & msg)
  : msg_(msg)
  {}
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event response(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event msg_;
};

class Init_GetPresentJointOffsetData_Event_request
{
public:
  explicit Init_GetPresentJointOffsetData_Event_request(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event & msg)
  : msg_(msg)
  {}
  Init_GetPresentJointOffsetData_Event_response request(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPresentJointOffsetData_Event_response(msg_);
  }

private:
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event msg_;
};

class Init_GetPresentJointOffsetData_Event_info
{
public:
  Init_GetPresentJointOffsetData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPresentJointOffsetData_Event_request info(::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPresentJointOffsetData_Event_request(msg_);
  }

private:
  ::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_offset_tuner_msgs::srv::GetPresentJointOffsetData_Event>()
{
  return op3_offset_tuner_msgs::srv::builder::Init_GetPresentJointOffsetData_Event_info();
}

}  // namespace op3_offset_tuner_msgs

#endif  // OP3_OFFSET_TUNER_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__BUILDER_HPP_
