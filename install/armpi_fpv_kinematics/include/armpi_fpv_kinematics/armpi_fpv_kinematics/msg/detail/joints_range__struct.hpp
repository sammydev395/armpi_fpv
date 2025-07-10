// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joints_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint1'
// Member 'joint2'
// Member 'joint3'
// Member 'joint4'
// Member 'joint5'
#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__armpi_fpv_kinematics__msg__JointsRange __attribute__((deprecated))
#else
# define DEPRECATED__armpi_fpv_kinematics__msg__JointsRange __declspec(deprecated)
#endif

namespace armpi_fpv_kinematics
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointsRange_
{
  using Type = JointsRange_<ContainerAllocator>;

  explicit JointsRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint1(_init),
    joint2(_init),
    joint3(_init),
    joint4(_init),
    joint5(_init)
  {
    (void)_init;
  }

  explicit JointsRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint1(_alloc, _init),
    joint2(_alloc, _init),
    joint3(_alloc, _init),
    joint4(_alloc, _init),
    joint5(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint1_type =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>;
  _joint1_type joint1;
  using _joint2_type =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>;
  _joint2_type joint2;
  using _joint3_type =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>;
  _joint3_type joint3;
  using _joint4_type =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>;
  _joint4_type joint4;
  using _joint5_type =
    armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator>;
  _joint5_type joint5;

  // setters for named parameter idiom
  Type & set__joint1(
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> & _arg)
  {
    this->joint1 = _arg;
    return *this;
  }
  Type & set__joint2(
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> & _arg)
  {
    this->joint2 = _arg;
    return *this;
  }
  Type & set__joint3(
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> & _arg)
  {
    this->joint3 = _arg;
    return *this;
  }
  Type & set__joint4(
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> & _arg)
  {
    this->joint4 = _arg;
    return *this;
  }
  Type & set__joint5(
    const armpi_fpv_kinematics::msg::JointRange_<ContainerAllocator> & _arg)
  {
    this->joint5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armpi_fpv_kinematics__msg__JointsRange
    std::shared_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armpi_fpv_kinematics__msg__JointsRange
    std::shared_ptr<armpi_fpv_kinematics::msg::JointsRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointsRange_ & other) const
  {
    if (this->joint1 != other.joint1) {
      return false;
    }
    if (this->joint2 != other.joint2) {
      return false;
    }
    if (this->joint3 != other.joint3) {
      return false;
    }
    if (this->joint4 != other.joint4) {
      return false;
    }
    if (this->joint5 != other.joint5) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointsRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointsRange_

// alias to use template instance with default allocator
using JointsRange =
  armpi_fpv_kinematics::msg::JointsRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINTS_RANGE__STRUCT_HPP_
