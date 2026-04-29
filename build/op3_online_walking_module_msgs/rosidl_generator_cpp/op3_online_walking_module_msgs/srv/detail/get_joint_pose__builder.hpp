// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetJointPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_online_walking_module_msgs/srv/get_joint_pose.hpp"


#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__BUILDER_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_online_walking_module_msgs/srv/detail/get_joint_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_online_walking_module_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetJointPose_Request>()
{
  return ::op3_online_walking_module_msgs::srv::GetJointPose_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPose_Response_pose
{
public:
  Init_GetJointPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::op3_online_walking_module_msgs::srv::GetJointPose_Response pose(::op3_online_walking_module_msgs::srv::GetJointPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetJointPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetJointPose_Response>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetJointPose_Response_pose();
}

}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointPose_Event_response
{
public:
  explicit Init_GetJointPose_Event_response(::op3_online_walking_module_msgs::srv::GetJointPose_Event & msg)
  : msg_(msg)
  {}
  ::op3_online_walking_module_msgs::srv::GetJointPose_Event response(::op3_online_walking_module_msgs::srv::GetJointPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetJointPose_Event msg_;
};

class Init_GetJointPose_Event_request
{
public:
  explicit Init_GetJointPose_Event_request(::op3_online_walking_module_msgs::srv::GetJointPose_Event & msg)
  : msg_(msg)
  {}
  Init_GetJointPose_Event_response request(::op3_online_walking_module_msgs::srv::GetJointPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetJointPose_Event_response(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetJointPose_Event msg_;
};

class Init_GetJointPose_Event_info
{
public:
  Init_GetJointPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointPose_Event_request info(::op3_online_walking_module_msgs::srv::GetJointPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetJointPose_Event_request(msg_);
  }

private:
  ::op3_online_walking_module_msgs::srv::GetJointPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_online_walking_module_msgs::srv::GetJointPose_Event>()
{
  return op3_online_walking_module_msgs::srv::builder::Init_GetJointPose_Event_info();
}

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_JOINT_POSE__BUILDER_HPP_
