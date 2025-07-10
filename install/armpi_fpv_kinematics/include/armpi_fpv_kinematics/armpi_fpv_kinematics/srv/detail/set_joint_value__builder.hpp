// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_joint_value.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointValue_Request_joint_value
{
public:
  Init_SetJointValue_Request_joint_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::armpi_fpv_kinematics::srv::SetJointValue_Request joint_value(::armpi_fpv_kinematics::srv::SetJointValue_Request::_joint_value_type arg)
  {
    msg_.joint_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointValue_Request>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointValue_Request_joint_value();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointValue_Response_pose
{
public:
  explicit Init_SetJointValue_Response_pose(::armpi_fpv_kinematics::srv::SetJointValue_Response & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetJointValue_Response pose(::armpi_fpv_kinematics::srv::SetJointValue_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Response msg_;
};

class Init_SetJointValue_Response_solution
{
public:
  explicit Init_SetJointValue_Response_solution(::armpi_fpv_kinematics::srv::SetJointValue_Response & msg)
  : msg_(msg)
  {}
  Init_SetJointValue_Response_pose solution(::armpi_fpv_kinematics::srv::SetJointValue_Response::_solution_type arg)
  {
    msg_.solution = std::move(arg);
    return Init_SetJointValue_Response_pose(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Response msg_;
};

class Init_SetJointValue_Response_success
{
public:
  Init_SetJointValue_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointValue_Response_solution success(::armpi_fpv_kinematics::srv::SetJointValue_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointValue_Response_solution(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointValue_Response>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointValue_Response_success();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointValue_Event_response
{
public:
  explicit Init_SetJointValue_Event_response(::armpi_fpv_kinematics::srv::SetJointValue_Event & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetJointValue_Event response(::armpi_fpv_kinematics::srv::SetJointValue_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Event msg_;
};

class Init_SetJointValue_Event_request
{
public:
  explicit Init_SetJointValue_Event_request(::armpi_fpv_kinematics::srv::SetJointValue_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointValue_Event_response request(::armpi_fpv_kinematics::srv::SetJointValue_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointValue_Event_response(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Event msg_;
};

class Init_SetJointValue_Event_info
{
public:
  Init_SetJointValue_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointValue_Event_request info(::armpi_fpv_kinematics::srv::SetJointValue_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointValue_Event_request(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointValue_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointValue_Event>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointValue_Event_info();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__BUILDER_HPP_
