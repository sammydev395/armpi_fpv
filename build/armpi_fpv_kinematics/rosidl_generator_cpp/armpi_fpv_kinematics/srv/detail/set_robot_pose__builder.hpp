// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_robot_pose.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetRobotPose_Request_resolution
{
public:
  explicit Init_SetRobotPose_Request_resolution(::armpi_fpv_kinematics::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request resolution(::armpi_fpv_kinematics::srv::SetRobotPose_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_roll
{
public:
  explicit Init_SetRobotPose_Request_roll(::armpi_fpv_kinematics::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_resolution roll(::armpi_fpv_kinematics::srv::SetRobotPose_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_SetRobotPose_Request_resolution(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_pitch_range
{
public:
  explicit Init_SetRobotPose_Request_pitch_range(::armpi_fpv_kinematics::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_roll pitch_range(::armpi_fpv_kinematics::srv::SetRobotPose_Request::_pitch_range_type arg)
  {
    msg_.pitch_range = std::move(arg);
    return Init_SetRobotPose_Request_roll(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_pitch
{
public:
  explicit Init_SetRobotPose_Request_pitch(::armpi_fpv_kinematics::srv::SetRobotPose_Request & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Request_pitch_range pitch(::armpi_fpv_kinematics::srv::SetRobotPose_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SetRobotPose_Request_pitch_range(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request msg_;
};

class Init_SetRobotPose_Request_position
{
public:
  Init_SetRobotPose_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotPose_Request_pitch position(::armpi_fpv_kinematics::srv::SetRobotPose_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetRobotPose_Request_pitch(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetRobotPose_Request>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetRobotPose_Request_position();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetRobotPose_Response_min_variation
{
public:
  explicit Init_SetRobotPose_Response_min_variation(::armpi_fpv_kinematics::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response min_variation(::armpi_fpv_kinematics::srv::SetRobotPose_Response::_min_variation_type arg)
  {
    msg_.min_variation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_rpy
{
public:
  explicit Init_SetRobotPose_Response_rpy(::armpi_fpv_kinematics::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_min_variation rpy(::armpi_fpv_kinematics::srv::SetRobotPose_Response::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_SetRobotPose_Response_min_variation(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_current_pulse
{
public:
  explicit Init_SetRobotPose_Response_current_pulse(::armpi_fpv_kinematics::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_rpy current_pulse(::armpi_fpv_kinematics::srv::SetRobotPose_Response::_current_pulse_type arg)
  {
    msg_.current_pulse = std::move(arg);
    return Init_SetRobotPose_Response_rpy(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_pulse
{
public:
  explicit Init_SetRobotPose_Response_pulse(::armpi_fpv_kinematics::srv::SetRobotPose_Response & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Response_current_pulse pulse(::armpi_fpv_kinematics::srv::SetRobotPose_Response::_pulse_type arg)
  {
    msg_.pulse = std::move(arg);
    return Init_SetRobotPose_Response_current_pulse(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response msg_;
};

class Init_SetRobotPose_Response_success
{
public:
  Init_SetRobotPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotPose_Response_pulse success(::armpi_fpv_kinematics::srv::SetRobotPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetRobotPose_Response_pulse(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetRobotPose_Response>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetRobotPose_Response_success();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetRobotPose_Event_response
{
public:
  explicit Init_SetRobotPose_Event_response(::armpi_fpv_kinematics::srv::SetRobotPose_Event & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetRobotPose_Event response(::armpi_fpv_kinematics::srv::SetRobotPose_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Event msg_;
};

class Init_SetRobotPose_Event_request
{
public:
  explicit Init_SetRobotPose_Event_request(::armpi_fpv_kinematics::srv::SetRobotPose_Event & msg)
  : msg_(msg)
  {}
  Init_SetRobotPose_Event_response request(::armpi_fpv_kinematics::srv::SetRobotPose_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetRobotPose_Event_response(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Event msg_;
};

class Init_SetRobotPose_Event_info
{
public:
  Init_SetRobotPose_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRobotPose_Event_request info(::armpi_fpv_kinematics::srv::SetRobotPose_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetRobotPose_Event_request(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetRobotPose_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetRobotPose_Event>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetRobotPose_Event_info();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__BUILDER_HPP_
