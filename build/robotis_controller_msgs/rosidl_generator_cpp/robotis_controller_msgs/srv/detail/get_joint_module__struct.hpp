// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotis_controller_msgs:srv/GetJointModule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotis_controller_msgs/srv/get_joint_module.hpp"


#ifndef ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__STRUCT_HPP_
#define ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Request __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointModule_Request_
{
  using Type = GetJointModule_Request_<ContainerAllocator>;

  explicit GetJointModule_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetJointModule_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Request
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Request
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointModule_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointModule_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointModule_Request_

// alias to use template instance with default allocator
using GetJointModule_Request =
  robotis_controller_msgs::srv::GetJointModule_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs


#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Response __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointModule_Response_
{
  using Type = GetJointModule_Response_<ContainerAllocator>;

  explicit GetJointModule_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetJointModule_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_name_type joint_name;
  using _module_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _module_name_type module_name;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__module_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Response
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Response
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointModule_Response_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->module_name != other.module_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointModule_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointModule_Response_

// alias to use template instance with default allocator
using GetJointModule_Response =
  robotis_controller_msgs::srv::GetJointModule_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Event __attribute__((deprecated))
#else
# define DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Event __declspec(deprecated)
#endif

namespace robotis_controller_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointModule_Event_
{
  using Type = GetJointModule_Event_<ContainerAllocator>;

  explicit GetJointModule_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetJointModule_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotis_controller_msgs::srv::GetJointModule_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robotis_controller_msgs::srv::GetJointModule_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Event
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotis_controller_msgs__srv__GetJointModule_Event
    std::shared_ptr<robotis_controller_msgs::srv::GetJointModule_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointModule_Event_ & other) const
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
  bool operator!=(const GetJointModule_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointModule_Event_

// alias to use template instance with default allocator
using GetJointModule_Event =
  robotis_controller_msgs::srv::GetJointModule_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace robotis_controller_msgs
{

namespace srv
{

struct GetJointModule
{
  using Request = robotis_controller_msgs::srv::GetJointModule_Request;
  using Response = robotis_controller_msgs::srv::GetJointModule_Response;
  using Event = robotis_controller_msgs::srv::GetJointModule_Event;
};

}  // namespace srv

}  // namespace robotis_controller_msgs

#endif  // ROBOTIS_CONTROLLER_MSGS__SRV__DETAIL__GET_JOINT_MODULE__STRUCT_HPP_
