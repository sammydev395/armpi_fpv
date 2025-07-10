// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from armpi_fpv_kinematics:srv/SetJointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Request __attribute__((deprecated))
#else
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Request __declspec(deprecated)
#endif

namespace armpi_fpv_kinematics
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointRange_Request_
{
  using Type = SetJointRange_Request_<ContainerAllocator>;

  explicit SetJointRange_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit SetJointRange_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Request
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Request
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointRange_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointRange_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointRange_Request_

// alias to use template instance with default allocator
using SetJointRange_Request =
  armpi_fpv_kinematics::srv::SetJointRange_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace armpi_fpv_kinematics


#ifndef _WIN32
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Response __attribute__((deprecated))
#else
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Response __declspec(deprecated)
#endif

namespace armpi_fpv_kinematics
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointRange_Response_
{
  using Type = SetJointRange_Response_<ContainerAllocator>;

  explicit SetJointRange_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetJointRange_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Response
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Response
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointRange_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointRange_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointRange_Response_

// alias to use template instance with default allocator
using SetJointRange_Response =
  armpi_fpv_kinematics::srv::SetJointRange_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace armpi_fpv_kinematics


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Event __attribute__((deprecated))
#else
# define DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Event __declspec(deprecated)
#endif

namespace armpi_fpv_kinematics
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointRange_Event_
{
  using Type = SetJointRange_Event_<ContainerAllocator>;

  explicit SetJointRange_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetJointRange_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<armpi_fpv_kinematics::srv::SetJointRange_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<armpi_fpv_kinematics::srv::SetJointRange_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Event
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armpi_fpv_kinematics__srv__SetJointRange_Event
    std::shared_ptr<armpi_fpv_kinematics::srv::SetJointRange_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointRange_Event_ & other) const
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
  bool operator!=(const SetJointRange_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointRange_Event_

// alias to use template instance with default allocator
using SetJointRange_Event =
  armpi_fpv_kinematics::srv::SetJointRange_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace armpi_fpv_kinematics
{

namespace srv
{

struct SetJointRange
{
  using Request = armpi_fpv_kinematics::srv::SetJointRange_Request;
  using Response = armpi_fpv_kinematics::srv::SetJointRange_Response;
  using Event = armpi_fpv_kinematics::srv::SetJointRange_Event;
};

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__STRUCT_HPP_
