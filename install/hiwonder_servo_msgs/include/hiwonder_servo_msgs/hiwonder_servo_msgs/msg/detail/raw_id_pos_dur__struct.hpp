// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__RawIdPosDur __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__RawIdPosDur __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawIdPosDur_
{
  using Type = RawIdPosDur_<ContainerAllocator>;

  explicit RawIdPosDur_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position = 0;
      this->duration = 0.0;
    }
  }

  explicit RawIdPosDur_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position = 0;
      this->duration = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _position_type =
    uint16_t;
  _position_type position;
  using _duration_type =
    double;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const uint16_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__RawIdPosDur
    std::shared_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__RawIdPosDur
    std::shared_ptr<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawIdPosDur_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawIdPosDur_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawIdPosDur_

// alias to use template instance with default allocator
using RawIdPosDur =
  hiwonder_servo_msgs::msg::RawIdPosDur_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__STRUCT_HPP_
