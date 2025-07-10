// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/servo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoState_voltage
{
public:
  explicit Init_ServoState_voltage(::hiwonder_servo_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::msg::ServoState voltage(::hiwonder_servo_msgs::msg::ServoState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

class Init_ServoState_error
{
public:
  explicit Init_ServoState_error(::hiwonder_servo_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_voltage error(::hiwonder_servo_msgs::msg::ServoState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_ServoState_voltage(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

class Init_ServoState_position
{
public:
  explicit Init_ServoState_position(::hiwonder_servo_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_error position(::hiwonder_servo_msgs::msg::ServoState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ServoState_error(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

class Init_ServoState_goal
{
public:
  explicit Init_ServoState_goal(::hiwonder_servo_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_position goal(::hiwonder_servo_msgs::msg::ServoState::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_ServoState_position(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

class Init_ServoState_id
{
public:
  explicit Init_ServoState_id(::hiwonder_servo_msgs::msg::ServoState & msg)
  : msg_(msg)
  {}
  Init_ServoState_goal id(::hiwonder_servo_msgs::msg::ServoState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ServoState_goal(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

class Init_ServoState_timestamp
{
public:
  Init_ServoState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoState_id timestamp(::hiwonder_servo_msgs::msg::ServoState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ServoState_id(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::ServoState>()
{
  return hiwonder_servo_msgs::msg::builder::Init_ServoState_timestamp();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__BUILDER_HPP_
