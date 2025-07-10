// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/CommandDurationList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/command_duration_list.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/command_duration_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_CommandDurationList_positions
{
public:
  explicit Init_CommandDurationList_positions(::hiwonder_servo_msgs::msg::CommandDurationList & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::msg::CommandDurationList positions(::hiwonder_servo_msgs::msg::CommandDurationList::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::CommandDurationList msg_;
};

class Init_CommandDurationList_ids
{
public:
  explicit Init_CommandDurationList_ids(::hiwonder_servo_msgs::msg::CommandDurationList & msg)
  : msg_(msg)
  {}
  Init_CommandDurationList_positions ids(::hiwonder_servo_msgs::msg::CommandDurationList::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_CommandDurationList_positions(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::CommandDurationList msg_;
};

class Init_CommandDurationList_duration
{
public:
  Init_CommandDurationList_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandDurationList_ids duration(::hiwonder_servo_msgs::msg::CommandDurationList::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_CommandDurationList_ids(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::CommandDurationList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::CommandDurationList>()
{
  return hiwonder_servo_msgs::msg::builder::Init_CommandDurationList_duration();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__COMMAND_DURATION_LIST__BUILDER_HPP_
