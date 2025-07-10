// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/multi_raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id_pos_dur_list'
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__msg__MultiRawIdPosDur __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__msg__MultiRawIdPosDur __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiRawIdPosDur_
{
  using Type = MultiRawIdPosDur_<ContainerAllocator>;

  explicit MultiRawIdPosDur_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MultiRawIdPosDur_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _id_pos_dur_list_type =
    std::vector<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>>;
  _id_pos_dur_list_type id_pos_dur_list;

  // setters for named parameter idiom
  Type & set__id_pos_dur_list(
    const std::vector<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::msg::RawIdPosDur_<ContainerAllocator>>> & _arg)
  {
    this->id_pos_dur_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__msg__MultiRawIdPosDur
    std::shared_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__msg__MultiRawIdPosDur
    std::shared_ptr<hiwonder_servo_msgs::msg::MultiRawIdPosDur_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiRawIdPosDur_ & other) const
  {
    if (this->id_pos_dur_list != other.id_pos_dur_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiRawIdPosDur_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiRawIdPosDur_

// alias to use template instance with default allocator
using MultiRawIdPosDur =
  hiwonder_servo_msgs::msg::MultiRawIdPosDur_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__STRUCT_HPP_
