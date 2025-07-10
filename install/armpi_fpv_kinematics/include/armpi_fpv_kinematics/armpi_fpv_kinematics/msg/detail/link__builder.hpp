// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/link.hpp"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace msg
{

namespace builder
{

class Init_Link_end_effector_link
{
public:
  explicit Init_Link_end_effector_link(::armpi_fpv_kinematics::msg::Link & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::msg::Link end_effector_link(::armpi_fpv_kinematics::msg::Link::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::Link msg_;
};

class Init_Link_link3
{
public:
  explicit Init_Link_link3(::armpi_fpv_kinematics::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_end_effector_link link3(::armpi_fpv_kinematics::msg::Link::_link3_type arg)
  {
    msg_.link3 = std::move(arg);
    return Init_Link_end_effector_link(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::Link msg_;
};

class Init_Link_link2
{
public:
  explicit Init_Link_link2(::armpi_fpv_kinematics::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_link3 link2(::armpi_fpv_kinematics::msg::Link::_link2_type arg)
  {
    msg_.link2 = std::move(arg);
    return Init_Link_link3(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::Link msg_;
};

class Init_Link_link1
{
public:
  explicit Init_Link_link1(::armpi_fpv_kinematics::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_link2 link1(::armpi_fpv_kinematics::msg::Link::_link1_type arg)
  {
    msg_.link1 = std::move(arg);
    return Init_Link_link2(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::Link msg_;
};

class Init_Link_base_link
{
public:
  Init_Link_base_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_link1 base_link(::armpi_fpv_kinematics::msg::Link::_base_link_type arg)
  {
    msg_.base_link = std::move(arg);
    return Init_Link_link1(msg_);
  }

private:
  ::armpi_fpv_kinematics::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::msg::Link>()
{
  return armpi_fpv_kinematics::msg::builder::Init_Link_base_link();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__BUILDER_HPP_
