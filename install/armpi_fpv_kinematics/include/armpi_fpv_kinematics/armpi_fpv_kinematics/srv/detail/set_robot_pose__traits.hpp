// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_robot_pose.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: pitch_range
  {
    if (msg.pitch_range.size() == 0) {
      out << "pitch_range: []";
    } else {
      out << "pitch_range: [";
      size_t pending_items = msg.pitch_range.size();
      for (auto item : msg.pitch_range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: pitch_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pitch_range.size() == 0) {
      out << "pitch_range: []\n";
    } else {
      out << "pitch_range:\n";
      for (auto item : msg.pitch_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotPose_Request & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetRobotPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetRobotPose_Request & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetRobotPose_Request>()
{
  return "armpi_fpv_kinematics::srv::SetRobotPose_Request";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetRobotPose_Request>()
{
  return "armpi_fpv_kinematics/srv/SetRobotPose_Request";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetRobotPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetRobotPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: pulse
  {
    if (msg.pulse.size() == 0) {
      out << "pulse: []";
    } else {
      out << "pulse: [";
      size_t pending_items = msg.pulse.size();
      for (auto item : msg.pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_pulse
  {
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []";
    } else {
      out << "current_pulse: [";
      size_t pending_items = msg.current_pulse.size();
      for (auto item : msg.current_pulse) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_variation
  {
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetRobotPose_Response & msg,
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

  // member: pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pulse.size() == 0) {
      out << "pulse: []\n";
    } else {
      out << "pulse:\n";
      for (auto item : msg.pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_pulse.size() == 0) {
      out << "current_pulse: []\n";
    } else {
      out << "current_pulse:\n";
      for (auto item : msg.current_pulse) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_variation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_variation: ";
    rosidl_generator_traits::value_to_yaml(msg.min_variation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetRobotPose_Response & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetRobotPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetRobotPose_Response & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetRobotPose_Response>()
{
  return "armpi_fpv_kinematics::srv::SetRobotPose_Response";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetRobotPose_Response>()
{
  return "armpi_fpv_kinematics/srv/SetRobotPose_Response";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetRobotPose_Response>
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
  const SetRobotPose_Event & msg,
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
  const SetRobotPose_Event & msg,
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

inline std::string to_yaml(const SetRobotPose_Event & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetRobotPose_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetRobotPose_Event & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetRobotPose_Event>()
{
  return "armpi_fpv_kinematics::srv::SetRobotPose_Event";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetRobotPose_Event>()
{
  return "armpi_fpv_kinematics/srv/SetRobotPose_Event";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Event>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Request>::value && has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetRobotPose_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetRobotPose>()
{
  return "armpi_fpv_kinematics::srv::SetRobotPose";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetRobotPose>()
{
  return "armpi_fpv_kinematics/srv/SetRobotPose";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose>
  : std::integral_constant<
    bool,
    has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose_Request>::value &&
    has_fixed_size<armpi_fpv_kinematics::srv::SetRobotPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose>
  : std::integral_constant<
    bool,
    has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Request>::value &&
    has_bounded_size<armpi_fpv_kinematics::srv::SetRobotPose_Response>::value
  >
{
};

template<>
struct is_service<armpi_fpv_kinematics::srv::SetRobotPose>
  : std::true_type
{
};

template<>
struct is_service_request<armpi_fpv_kinematics::srv::SetRobotPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<armpi_fpv_kinematics::srv::SetRobotPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__TRAITS_HPP_
