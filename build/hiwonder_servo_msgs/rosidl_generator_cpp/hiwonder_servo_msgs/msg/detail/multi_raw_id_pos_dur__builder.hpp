// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/multi_raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiRawIdPosDur_id_pos_dur_list
{
public:
  Init_MultiRawIdPosDur_id_pos_dur_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hiwonder_servo_msgs::msg::MultiRawIdPosDur id_pos_dur_list(::hiwonder_servo_msgs::msg::MultiRawIdPosDur::_id_pos_dur_list_type arg)
  {
    msg_.id_pos_dur_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::msg::MultiRawIdPosDur msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::msg::MultiRawIdPosDur>()
{
  return hiwonder_servo_msgs::msg::builder::Init_MultiRawIdPosDur_id_pos_dur_list();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__BUILDER_HPP_
