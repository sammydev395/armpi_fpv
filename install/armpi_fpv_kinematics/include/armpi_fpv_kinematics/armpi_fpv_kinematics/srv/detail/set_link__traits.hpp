// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armpi_fpv_kinematics:srv/SetLink.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_link.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_LINK__TRAITS_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armpi_fpv_kinematics/srv/detail/set_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "armpi_fpv_kinematics/msg/detail/link__traits.hpp"

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLink_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLink_Request & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetLink_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetLink_Request & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetLink_Request>()
{
  return "armpi_fpv_kinematics::srv::SetLink_Request";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetLink_Request>()
{
  return "armpi_fpv_kinematics/srv/SetLink_Request";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetLink_Request>
  : std::integral_constant<bool, has_fixed_size<armpi_fpv_kinematics::msg::Link>::value> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Request>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::msg::Link>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetLink_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace armpi_fpv_kinematics
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLink_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLink_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLink_Response & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetLink_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetLink_Response & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetLink_Response>()
{
  return "armpi_fpv_kinematics::srv::SetLink_Response";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetLink_Response>()
{
  return "armpi_fpv_kinematics/srv/SetLink_Response";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetLink_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetLink_Response>
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
  const SetLink_Event & msg,
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
  const SetLink_Event & msg,
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

inline std::string to_yaml(const SetLink_Event & msg, bool use_flow_style = false)
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
  const armpi_fpv_kinematics::srv::SetLink_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  armpi_fpv_kinematics::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armpi_fpv_kinematics::srv::to_yaml() instead")]]
inline std::string to_yaml(const armpi_fpv_kinematics::srv::SetLink_Event & msg)
{
  return armpi_fpv_kinematics::srv::to_yaml(msg);
}

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetLink_Event>()
{
  return "armpi_fpv_kinematics::srv::SetLink_Event";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetLink_Event>()
{
  return "armpi_fpv_kinematics/srv/SetLink_Event";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetLink_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Event>
  : std::integral_constant<bool, has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Request>::value && has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<armpi_fpv_kinematics::srv::SetLink_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<armpi_fpv_kinematics::srv::SetLink>()
{
  return "armpi_fpv_kinematics::srv::SetLink";
}

template<>
inline const char * name<armpi_fpv_kinematics::srv::SetLink>()
{
  return "armpi_fpv_kinematics/srv/SetLink";
}

template<>
struct has_fixed_size<armpi_fpv_kinematics::srv::SetLink>
  : std::integral_constant<
    bool,
    has_fixed_size<armpi_fpv_kinematics::srv::SetLink_Request>::value &&
    has_fixed_size<armpi_fpv_kinematics::srv::SetLink_Response>::value
  >
{
};

template<>
struct has_bounded_size<armpi_fpv_kinematics::srv::SetLink>
  : std::integral_constant<
    bool,
    has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Request>::value &&
    has_bounded_size<armpi_fpv_kinematics::srv::SetLink_Response>::value
  >
{
};

template<>
struct is_service<armpi_fpv_kinematics::srv::SetLink>
  : std::true_type
{
};

template<>
struct is_service_request<armpi_fpv_kinematics::srv::SetLink_Request>
  : std::true_type
{
};

template<>
struct is_service_response<armpi_fpv_kinematics::srv::SetLink_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_LINK__TRAITS_HPP_
