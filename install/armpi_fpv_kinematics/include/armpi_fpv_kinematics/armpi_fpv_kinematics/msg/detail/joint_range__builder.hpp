// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace msg
{

namespace builder
{

class Init_JointRange_max
{
public:
  explicit Init_JointRange_max(::armpi_fpv_kinematics::msg::JointRange & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::msg::JointRange max(::armpi_fpv_kinematics::msg::JointRange::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::JointRange msg_;
};

class Init_JointRange_min
{
public:
  Init_JointRange_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointRange_max min(::armpi_fpv_kinematics::msg::JointRange::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_JointRange_max(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::JointRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::msg::JointRange>()
{
  return armpi_fpv_kinematics::msg::builder::Init_JointRange_min();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__BUILDER_HPP_
