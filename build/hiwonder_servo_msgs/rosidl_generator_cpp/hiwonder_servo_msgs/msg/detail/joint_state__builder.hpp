// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/joint_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::msg::JointState velocity(::hiwonder_servo_msgs::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_error
{
public:
  explicit Init_JointState_error(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity error(::hiwonder_servo_msgs::msg::JointState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_current_pos
{
public:
  explicit Init_JointState_current_pos(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_error current_pos(::hiwonder_servo_msgs::msg::JointState::_current_pos_type arg)
  {
    msg_.current_pos = std::move(arg);
    return Init_JointState_error(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_goal_pos
{
public:
  explicit Init_JointState_goal_pos(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_current_pos goal_pos(::hiwonder_servo_msgs::msg::JointState::_goal_pos_type arg)
  {
    msg_.goal_pos = std::move(arg);
    return Init_JointState_current_pos(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_servo_temps
{
public:
  explicit Init_JointState_servo_temps(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_goal_pos servo_temps(::hiwonder_servo_msgs::msg::JointState::_servo_temps_type arg)
  {
    msg_.servo_temps = std::move(arg);
    return Init_JointState_goal_pos(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_servo_ids
{
public:
  explicit Init_JointState_servo_ids(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_servo_temps servo_ids(::hiwonder_servo_msgs::msg::JointState::_servo_ids_type arg)
  {
    msg_.servo_ids = std::move(arg);
    return Init_JointState_servo_temps(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_name
{
public:
  explicit Init_JointState_name(::hiwonder_servo_msgs::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_servo_ids name(::hiwonder_servo_msgs::msg::JointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointState_servo_ids(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

class Init_JointState_header
{
public:
  Init_JointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_name header(::hiwonder_servo_msgs::msg::JointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointState_name(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::JointState>()
{
  return hiwonder_servo_msgs::msg::builder::Init_JointState_header();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
