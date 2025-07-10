// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwonder_servo_msgs:msg/MultiRawIdPosDur.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/multi_raw_id_pos_dur.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__TRAITS_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwonder_servo_msgs/msg/detail/multi_raw_id_pos_dur__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id_pos_dur_list'
#include "hiwonder_servo_msgs/msg/detail/raw_id_pos_dur__traits.hpp"

namespace hiwonder_servo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiRawIdPosDur & msg,
  std::ostream & out)
{
  out << "{";
  // member: id_pos_dur_list
  {
    if (msg.id_pos_dur_list.size() == 0) {
      out << "id_pos_dur_list: []";
    } else {
      out << "id_pos_dur_list: [";
      size_t pending_items = msg.id_pos_dur_list.size();
      for (auto item : msg.id_pos_dur_list) {
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
  const MultiRawIdPosDur & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id_pos_dur_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id_pos_dur_list.size() == 0) {
      out << "id_pos_dur_list: []\n";
    } else {
      out << "id_pos_dur_list:\n";
      for (auto item : msg.id_pos_dur_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiRawIdPosDur & msg, bool use_flow_style = false)
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
  const hiwonder_servo_msgs::msg::MultiRawIdPosDur & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwonder_servo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwonder_servo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwonder_servo_msgs::msg::MultiRawIdPosDur & msg)
{
  return hiwonder_servo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwonder_servo_msgs::msg::MultiRawIdPosDur>()
{
  return "hiwonder_servo_msgs::msg::MultiRawIdPosDur";
}

template<>
inline const char * name<hiwonder_servo_msgs::msg::MultiRawIdPosDur>()
{
  return "hiwonder_servo_msgs/msg/MultiRawIdPosDur";
}

template<>
struct has_fixed_size<hiwonder_servo_msgs::msg::MultiRawIdPosDur>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwonder_servo_msgs::msg::MultiRawIdPosDur>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwonder_servo_msgs::msg::MultiRawIdPosDur>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__MULTI_RAW_ID_POS_DUR__TRAITS_HPP_
