// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwonder_servo_msgs:msg/ServoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/servo_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwonder_servo_msgs/msg/detail/servo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hiwonder_servo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoState & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal: ";
    rosidl_generator_traits::value_to_yaml(msg.goal, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoState & msg, bool use_flow_style = false)
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
  const hiwonder_servo_msgs::msg::ServoState & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwonder_servo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwonder_servo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwonder_servo_msgs::msg::ServoState & msg)
{
  return hiwonder_servo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwonder_servo_msgs::msg::ServoState>()
{
  return "hiwonder_servo_msgs::msg::ServoState";
}

template<>
inline const char * name<hiwonder_servo_msgs::msg::ServoState>()
{
  return "hiwonder_servo_msgs/msg/ServoState";
}

template<>
struct has_fixed_size<hiwonder_servo_msgs::msg::ServoState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hiwonder_servo_msgs::msg::ServoState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hiwonder_servo_msgs::msg::ServoState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__SERVO_STATE__TRAITS_HPP_
