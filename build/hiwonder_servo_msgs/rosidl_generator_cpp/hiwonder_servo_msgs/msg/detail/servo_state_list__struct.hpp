// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state_list.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'servo_states'
#include "hiwonder_servo_msgs/msg/detail/servo_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__ServoStateList __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__ServoStateList __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoStateList_
{
  using Type = ServoStateList_<ContainerAllocator>;

  explicit ServoStateList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServoStateList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _servo_states_type =
    std::vector<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>>;
  _servo_states_type servo_states;

  // setters for named parameter idiom
  Type & set__servo_states(
    const std::vector<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>> & _arg)
  {
    this->servo_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__ServoStateList
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__ServoStateList
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoStateList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoStateList_ & other) const
  {
    if (this->servo_states != other.servo_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoStateList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoStateList_

// alias to use template instance with default allocator
using ServoStateList =
  hiwonder_servo_msgs::msg::ServoStateList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__STRUCT_HPP_
