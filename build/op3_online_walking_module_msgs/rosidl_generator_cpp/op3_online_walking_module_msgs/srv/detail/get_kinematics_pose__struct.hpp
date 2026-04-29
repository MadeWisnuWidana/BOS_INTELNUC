// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from op3_online_walking_module_msgs:srv/GetKinematicsPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "op3_online_walking_module_msgs/srv/get_kinematics_pose.hpp"


#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Request __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKinematicsPose_Request_
{
  using Type = GetKinematicsPose_Request_<ContainerAllocator>;

  explicit GetKinematicsPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GetKinematicsPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Request
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Request
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKinematicsPose_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKinematicsPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKinematicsPose_Request_

// alias to use template instance with default allocator
using GetKinematicsPose_Request =
  op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_online_walking_module_msgs


// Include directives for member types
// Member 'pose'
#include "op3_online_walking_module_msgs/msg/detail/kinematics_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Response __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKinematicsPose_Response_
{
  using Type = GetKinematicsPose_Response_<ContainerAllocator>;

  explicit GetKinematicsPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit GetKinematicsPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    op3_online_walking_module_msgs::msg::KinematicsPose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const op3_online_walking_module_msgs::msg::KinematicsPose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Response
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Response
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKinematicsPose_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKinematicsPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKinematicsPose_Response_

// alias to use template instance with default allocator
using GetKinematicsPose_Response =
  op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_online_walking_module_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Event __attribute__((deprecated))
#else
# define DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Event __declspec(deprecated)
#endif

namespace op3_online_walking_module_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetKinematicsPose_Event_
{
  using Type = GetKinematicsPose_Event_<ContainerAllocator>;

  explicit GetKinematicsPose_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetKinematicsPose_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::srv::GetKinematicsPose_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<op3_online_walking_module_msgs::srv::GetKinematicsPose_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Event
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__op3_online_walking_module_msgs__srv__GetKinematicsPose_Event
    std::shared_ptr<op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetKinematicsPose_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetKinematicsPose_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetKinematicsPose_Event_

// alias to use template instance with default allocator
using GetKinematicsPose_Event =
  op3_online_walking_module_msgs::srv::GetKinematicsPose_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

namespace op3_online_walking_module_msgs
{

namespace srv
{

struct GetKinematicsPose
{
  using Request = op3_online_walking_module_msgs::srv::GetKinematicsPose_Request;
  using Response = op3_online_walking_module_msgs::srv::GetKinematicsPose_Response;
  using Event = op3_online_walking_module_msgs::srv::GetKinematicsPose_Event;
};

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_KINEMATICS_POSE__STRUCT_HPP_
