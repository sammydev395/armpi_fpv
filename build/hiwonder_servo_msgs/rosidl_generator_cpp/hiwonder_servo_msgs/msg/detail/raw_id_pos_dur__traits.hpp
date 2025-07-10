// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwonder_servo_msgs:msg/RawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__TRAITS_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hiwonder_servo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawIdPosDur & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawIdPosDur & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawIdPosDur & msg, bool use_flow_style = false)
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
  const hiwonder_servo_msgs::msg::RawIdPosDur & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwonder_servo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwonder_servo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwonder_servo_msgs::msg::RawIdPosDur & msg)
{
  return hiwonder_servo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwonder_servo_msgs::msg::RawIdPosDur>()
{
  return "hiwonder_servo_msgs::msg::RawIdPosDur";
}

template<>
inline const char * name<hiwonder_servo_msgs::msg::RawIdPosDur>()
{
  return "hiwonder_servo_msgs/msg/RawIdPosDur";
}

template<>
struct has_fixed_size<hiwonder_servo_msgs::msg::RawIdPosDur>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hiwonder_servo_msgs::msg::RawIdPosDur>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hiwonder_servo_msgs::msg::RawIdPosDur>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__RAW_ID_POS_DUR__TRAITS_HPP_
