// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armpi_fpv_kinematics:srv/GetJointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/get_joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armpi_fpv_kinematics/srv/detail/get_joint_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointRange_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointRange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointRange_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_generator_traits
{

[[deprecated("use armpi_fpv_kinematics::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armpi_fpv_kinematics::srv::GetJointRange_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::GetJointRange_Request & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::GetJointRange_Request>()
{
  return "armpi_fpv_kinematics::srv::GetJointRange_Request";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::GetJointRange_Request>()
{
  return "armpi_fpv_kinematics/srv/GetJointRange_Request";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::GetJointRange_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "armpi_fpv_kinematics/msg/detail/joints_range__traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointRange_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointRange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointRange_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_generator_traits
{

[[deprecated("use armpi_fpv_kinematics::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armpi_fpv_kinematics::srv::GetJointRange_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::GetJointRange_Response & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::GetJointRange_Response>()
{
  return "armpi_fpv_kinematics::srv::GetJointRange_Response";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::GetJointRange_Response>()
{
  return "armpi_fpv_kinematics/srv/GetJointRange_Response";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange_Response>
  : std::integral_constant<bool, has_fixed_size<armpi_fpv_kinematics::msg::JointsRange>::value> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Response>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::msg::JointsRange>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::GetJointRange_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointRange_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetJointRange_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointRange_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_generator_traits
{

[[deprecated("use armpi_fpv_kinematics::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armpi_fpv_kinematics::srv::GetJointRange_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::GetJointRange_Event & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::GetJointRange_Event>()
{
  return "armpi_fpv_kinematics::srv::GetJointRange_Event";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::GetJointRange_Event>()
{
  return "armpi_fpv_kinematics/srv/GetJointRange_Event";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Event>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Request>::value && has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::GetJointRange_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::GetJointRange>()
{
  return "armpi_fpv_kinematics::srv::GetJointRange";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::GetJointRange>()
{
  return "armpi_fpv_kinematics/srv/GetJointRange";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange>
  : std::integral_constant<
    bool,
    has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange_Request>::value &&
    has_fixed_size<armpi_fpv_kinematics::srv::GetJointRange_Response>::value
  >
{
};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange>
  : std::integral_constant<
    bool,
    has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Request>::value &&
    has_bounded_size<armpi_fpv_kinematics::srv::GetJointRange_Response>::value
  >
{
};

template<>
struct is_service<armpi_fpv_kinematics::srv::GetJointRange>
  : std::true_type
{
};

template<>
struct is_service_request<armpi_fpv_kinematics::srv::GetJointRange_Request>
  : std::true_type
{
};

template<>
struct is_service_response<armpi_fpv_kinematics::srv::GetJointRange_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_JOINT_RANGE__TRAITS_HPP_
