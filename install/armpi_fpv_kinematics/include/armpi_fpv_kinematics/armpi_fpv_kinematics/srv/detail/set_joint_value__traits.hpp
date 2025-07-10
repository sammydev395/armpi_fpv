// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_joint_value.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__TRAITS_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointValue_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_value
  {
    if (msg.joint_value.size() == 0) {
      out << "joint_value: []";
    } else {
      out << "joint_value: [";
      size_t pending_items = msg.joint_value.size();
      for (auto item : msg.joint_value) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SetJointValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_value.size() == 0) {
      out << "joint_value: []\n";
    } else {
      out << "joint_value:\n";
      for (auto item : msg.joint_value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointValue_Request & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetJointValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetJointValue_Request & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetJointValue_Request>()
{
  return "armpi_fpv_kinematics::srv::SetJointValue_Request";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetJointValue_Request>()
{
  return "armpi_fpv_kinematics/srv/SetJointValue_Request";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetJointValue_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointValue_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: solution
  {
    out << "solution: ";
    rosidl_generator_traits::value_to_yaml(msg.solution, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointValue_Response & msg,
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

  // member: solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution: ";
    rosidl_generator_traits::value_to_yaml(msg.solution, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointValue_Response & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetJointValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetJointValue_Response & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetJointValue_Response>()
{
  return "armpi_fpv_kinematics::srv::SetJointValue_Response";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetJointValue_Response>()
{
  return "armpi_fpv_kinematics/srv/SetJointValue_Response";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetJointValue_Response>
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
  const SetJointValue_Event & msg,
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
  const SetJointValue_Event & msg,
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

inline std::string to_yaml(const SetJointValue_Event & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetJointValue_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetJointValue_Event & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetJointValue_Event>()
{
  return "armpi_fpv_kinematics::srv::SetJointValue_Event";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetJointValue_Event>()
{
  return "armpi_fpv_kinematics/srv/SetJointValue_Event";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Event>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Request>::value && has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetJointValue_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetJointValue>()
{
  return "armpi_fpv_kinematics::srv::SetJointValue";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetJointValue>()
{
  return "armpi_fpv_kinematics/srv/SetJointValue";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue>
  : std::integral_constant<
    bool,
    has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue_Request>::value &&
    has_fixed_size<armpi_fpv_kinematics::srv::SetJointValue_Response>::value
  >
{
};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue>
  : std::integral_constant<
    bool,
    has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Request>::value &&
    has_bounded_size<armpi_fpv_kinematics::srv::SetJointValue_Response>::value
  >
{
};

template<>
struct is_service<armpi_fpv_kinematics::srv::SetJointValue>
  : std::true_type
{
};

template<>
struct is_service_request<armpi_fpv_kinematics::srv::SetJointValue_Request>
  : std::true_type
{
};

template<>
struct is_service_response<armpi_fpv_kinematics::srv::SetJointValue_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__TRAITS_HPP_
