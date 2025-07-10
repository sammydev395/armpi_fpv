// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwonder_servo_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/msg/joint_state.hpp"


#ifndef HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_
#define HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwonder_servo_msgs/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hiwonder_servo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: servo_ids
  {
    if (msg.servo_ids.size() == 0) {
      out << "servo_ids: []";
    } else {
      out << "servo_ids: [";
      size_t pending_items = msg.servo_ids.size();
      for (auto item : msg.servo_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servo_temps
  {
    if (msg.servo_temps.size() == 0) {
      out << "servo_temps: []";
    } else {
      out << "servo_temps: [";
      size_t pending_items = msg.servo_temps.size();
      for (auto item : msg.servo_temps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_pos
  {
    out << "goal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_pos, out);
    out << ", ";
  }

  // member: current_pos
  {
    out << "current_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pos, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: servo_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_ids.size() == 0) {
      out << "servo_ids: []\n";
    } else {
      out << "servo_ids:\n";
      for (auto item : msg.servo_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servo_temps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_temps.size() == 0) {
      out << "servo_temps: []\n";
    } else {
      out << "servo_temps:\n";
      for (auto item : msg.servo_temps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_pos, out);
    out << "\n";
  }

  // member: current_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pos, out);
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointState & msg, bool use_flow_style = false)
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
  const hiwonder_servo_msgs::msg::JointState & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwonder_servo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwonder_servo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwonder_servo_msgs::msg::JointState & msg)
{
  return hiwonder_servo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwonder_servo_msgs::msg::JointState>()
{
  return "hiwonder_servo_msgs::msg::JointState";
}

template<>
inline const char * name<hiwonder_servo_msgs::msg::JointState>()
{
  return "hiwonder_servo_msgs/msg/JointState";
}

template<>
struct has_fixed_size<hiwonder_servo_msgs::msg::JointState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwonder_servo_msgs::msg::JointState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwonder_servo_msgs::msg::JointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWONDER_SERVO_MSGS__MSG__DETAIL__JOINT_STATE__TRAITS_HPP_
