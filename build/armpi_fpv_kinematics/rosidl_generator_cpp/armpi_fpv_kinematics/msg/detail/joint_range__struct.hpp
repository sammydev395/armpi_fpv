// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__armpi_fpv_kinematics__msg__JointRange __attribute__((deprecated))
#else
# define DEPRECATED__armpi_fpv_kinematics__msg__JointRange __declspec(deprecated)
#endif

namespace armpi_fpv_kinematics
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointRange_
{
  using Type = JointRange_<ContainerAllocator>;

  explicit JointRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0;
      this->max = 0.0;
    }
  }

  explicit JointRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min = 0.0;
      this->max = 0.0;
    }
  }

  // field types and members
  using _min_type =
    double;
  _min_type min;
  using _max_type =
    double;
  _max_type max;

  // setters for named parameter idiom
  Type & set__min(
    const double & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const double & _arg)
  {
    this->max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armpi_fpv_kinematics__msg__JointRange
    std::shared_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armpi_fpv_kinematics__msg__JointRange
    std::shared_ptr<armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointRange_ & other) const
  {
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointRange_

// alias to use template instance with default allocator
using JointRange =
  armpi_fpv_kinematics::msg::JointRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__STRUCT_HPP_
