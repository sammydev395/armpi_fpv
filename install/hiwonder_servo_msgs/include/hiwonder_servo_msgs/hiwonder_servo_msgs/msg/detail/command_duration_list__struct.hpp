// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/command_duration_list.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__CommandDurationList __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__CommandDurationList __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommandDurationList_
{
  using Type = CommandDurationList_<ContainerAllocator>;

  explicit CommandDurationList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  explicit CommandDurationList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  // field types and members
  using _duration_type =
    double;
  _duration_type duration;
  using _ids_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _ids_type ids;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__ids(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__CommandDurationList
    std::shared_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__CommandDurationList
    std::shared_ptr<hiwonder_servo_msgs::msg::CommandDurationList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommandDurationList_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->ids != other.ids) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommandDurationList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommandDurationList_

// alias to use template instance with default allocator
using CommandDurationList =
  hiwonder_servo_msgs::msg::CommandDurationList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__STRUCT_HPP_
