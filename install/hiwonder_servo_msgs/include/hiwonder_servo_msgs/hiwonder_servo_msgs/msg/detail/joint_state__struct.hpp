// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/joint_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__JointState __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__JointState __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointState_
{
  using Type = JointState_<ContainerAllocator>;

  explicit JointState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->goal_pos = 0.0;
      this->current_pos = 0.0;
      this->error = 0.0;
      this->velocity = 0.0;
    }
  }

  explicit JointState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->goal_pos = 0.0;
      this->current_pos = 0.0;
      this->error = 0.0;
      this->velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _servo_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _servo_ids_type servo_ids;
  using _servo_temps_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _servo_temps_type servo_temps;
  using _goal_pos_type =
    double;
  _goal_pos_type goal_pos;
  using _current_pos_type =
    double;
  _current_pos_type current_pos;
  using _error_type =
    double;
  _error_type error;
  using _velocity_type =
    double;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__servo_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->servo_ids = _arg;
    return *this;
  }
  Type & set__servo_temps(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->servo_temps = _arg;
    return *this;
  }
  Type & set__goal_pos(
    const double & _arg)
  {
    this->goal_pos = _arg;
    return *this;
  }
  Type & set__current_pos(
    const double & _arg)
  {
    this->current_pos = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__JointState
    std::shared_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__JointState
    std::shared_ptr<hiwonder_servo_msgs::msg::JointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->servo_ids != other.servo_ids) {
      return false;
    }
    if (this->servo_temps != other.servo_temps) {
      return false;
    }
    if (this->goal_pos != other.goal_pos) {
      return false;
    }
    if (this->current_pos != other.current_pos) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointState_

// alias to use template instance with default allocator
using JointState =
  hiwonder_servo_msgs::msg::JointState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_HPP_
