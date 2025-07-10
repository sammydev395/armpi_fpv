// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state_list.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/servo_state_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoStateList_servo_states
{
public:
  Init_ServoStateList_servo_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hiwonder_servo_msgs::msg::ServoStateList servo_states(::hiwonder_servo_msgs::msg::ServoStateList::_servo_states_type arg)
  {
    msg_.servo_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::ServoStateList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::ServoStateList>()
{
  return hiwonder_servo_msgs::msg::builder::Init_ServoStateList_servo_states();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__BUILDER_HPP_
