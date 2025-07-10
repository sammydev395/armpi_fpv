// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__TRAITS_HPP_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armpi_fpv_kinematics/msg/detail/joint_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace armpi_fpv_kinematics
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointRange & msg, bool use_flow_style = false)
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

}  // namespace armpi_fpv_kinematics

namespace rosidl_generator_traits
{

[[deprecated("use armpi_fpv_kinematics::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armpi_fpv_kinematics::msg::JointRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::msg::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::msg::JointRange & msg)
{
  return armpi_fpv_kinematics::msg::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::msg::JointRange>()
{
  return "armpi_fpv_kinematics::msg::JointRange";
}

template<>
inline const char * name<armpi_fpv_kinematics::msg::JointRange>()
{
  return "armpi_fpv_kinematics/msg/JointRange";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::msg::JointRange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::msg::JointRange>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<armpi_fpv_kinematics::msg::JointRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__JOINT_RANGE__TRAITS_HPP_
