// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:srv/SetJointRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_joint_range.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointRange_Request_data
{
public:
  Init_SetJointRange_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::armpi_fpv_kinematics::srv::SetJointRange_Request data(::armpi_fpv_kinematics::srv::SetJointRange_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointRange_Request>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointRange_Request_data();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointRange_Response_message
{
public:
  explicit Init_SetJointRange_Response_message(::armpi_fpv_kinematics::srv::SetJointRange_Response & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetJointRange_Response message(::armpi_fpv_kinematics::srv::SetJointRange_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Response msg_;
};

class Init_SetJointRange_Response_success
{
public:
  Init_SetJointRange_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointRange_Response_message success(::armpi_fpv_kinematics::srv::SetJointRange_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointRange_Response_message(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointRange_Response>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointRange_Response_success();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_SetJointRange_Event_response
{
public:
  explicit Init_SetJointRange_Event_response(::armpi_fpv_kinematics::srv::SetJointRange_Event & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::SetJointRange_Event response(::armpi_fpv_kinematics::srv::SetJointRange_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Event msg_;
};

class Init_SetJointRange_Event_request
{
public:
  explicit Init_SetJointRange_Event_request(::armpi_fpv_kinematics::srv::SetJointRange_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointRange_Event_response request(::armpi_fpv_kinematics::srv::SetJointRange_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointRange_Event_response(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Event msg_;
};

class Init_SetJointRange_Event_info
{
public:
  Init_SetJointRange_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointRange_Event_request info(::armpi_fpv_kinematics::srv::SetJointRange_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointRange_Event_request(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::SetJointRange_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::SetJointRange_Event>()
{
  return armpi_fpv_kinematics::srv::builder::Init_SetJointRange_Event_info();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_RANGE__BUILDER_HPP_
