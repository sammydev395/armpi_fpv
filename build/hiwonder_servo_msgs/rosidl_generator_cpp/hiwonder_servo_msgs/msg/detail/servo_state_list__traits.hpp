// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state_list.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwonder_servo_msgs/msg/detail/servo_state_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'servo_states'
#include "hiwonder_servo_msgs/msg/detail/servo_state__traits.hpp"

namespace hiwonder_servo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoStateList & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_states
  {
    if (msg.servo_states.size() == 0) {
      out << "servo_states: []";
    } else {
      out << "servo_states: [";
      size_t pending_items = msg.servo_states.size();
      for (auto item : msg.servo_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_states.size() == 0) {
      out << "servo_states: []\n";
    } else {
      out << "servo_states:\n";
      for (auto item : msg.servo_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoStateList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hiwonder_servo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hiwonder_servo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hiwonder_servo_msgs::msg::ServoStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwonder_servo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwonder_servo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwonder_servo_msgs::msg::ServoStateList & msg)
{
  return hiwonder_servo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwonder_servo_msgs::msg::ServoStateList>()
{
  return "hiwonder_servo_msgs::msg::ServoStateList";
}

template<>
inline const char * name<hiwonder_servo_msgs::msg::ServoStateList>()
{
  return "hiwonder_servo_msgs/msg/ServoStateList";
}

template<>
struct has_fixed_size<hiwonder_servo_msgs::msg::ServoStateList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwonder_servo_msgs::msg::ServoStateList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwonder_servo_msgs::msg::ServoStateList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE_LIST__TRAITS_HPP_
