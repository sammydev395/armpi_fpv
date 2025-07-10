// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__ServoState __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__ServoState __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoState_
{
  using Type = ServoState_<ContainerAllocator>;

  explicit ServoState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0l;
      this->goal = 0l;
      this->position = 0l;
      this->error = 0l;
      this->voltage = 0l;
    }
  }

  explicit ServoState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->id = 0l;
      this->goal = 0l;
      this->position = 0l;
      this->error = 0l;
      this->voltage = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _id_type =
    int32_t;
  _id_type id;
  using _goal_type =
    int32_t;
  _goal_type goal;
  using _position_type =
    int32_t;
  _position_type position;
  using _error_type =
    int32_t;
  _error_type error;
  using _voltage_type =
    int32_t;
  _voltage_type voltage;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__goal(
    const int32_t & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__error(
    const int32_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__voltage(
    const int32_t & _arg)
  {
    this->voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__ServoState
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__ServoState
    std::shared_ptr<hiwonder_servo_msgs::msg::ServoState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoState_

// alias to use template instance with default allocator
using ServoState =
  hiwonder_servo_msgs::msg::ServoState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__STRUCT_HPP_
