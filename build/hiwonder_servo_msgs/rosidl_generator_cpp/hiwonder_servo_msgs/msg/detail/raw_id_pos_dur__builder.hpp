// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_RawIdPosDur_duration
{
public:
  explicit Init_RawIdPosDur_duration(::hiwonder_servo_msgs::msg::RawIdPosDur & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::msg::RawIdPosDur duration(::hiwonder_servo_msgs::msg::RawIdPosDur::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::RawIdPosDur msg_;
};

class Init_RawIdPosDur_position
{
public:
  explicit Init_RawIdPosDur_position(::hiwonder_servo_msgs::msg::RawIdPosDur & msg)
  : msg_(msg)
  {}
  Init_RawIdPosDur_duration position(::hiwonder_servo_msgs::msg::RawIdPosDur::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RawIdPosDur_duration(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::RawIdPosDur msg_;
};

class Init_RawIdPosDur_id
{
public:
  Init_RawIdPosDur_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawIdPosDur_position id(::hiwonder_servo_msgs::msg::RawIdPosDur::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RawIdPosDur_position(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::RawIdPosDur msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::RawIdPosDur>()
{
  return hiwonder_servo_msgs::msg::builder::Init_RawIdPosDur_id();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__BUILDER_HPP_
