// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/CommandDuration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/command_duration.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/command_duration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_CommandDuration_duration
{
public:
  explicit Init_CommandDuration_duration(::hiwonder_servo_msgs::msg::CommandDuration & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::msg::CommandDuration duration(::hiwonder_servo_msgs::msg::CommandDuration::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::CommandDuration msg_;
};

class Init_CommandDuration_data
{
public:
  Init_CommandDuration_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandDuration_duration data(::hiwonder_servo_msgs::msg::CommandDuration::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CommandDuration_duration(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::CommandDuration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::CommandDuration>()
{
  return hiwonder_servo_msgs::msg::builder::Init_CommandDuration_data();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION__BUILDER_HPP_
