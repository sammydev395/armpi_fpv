// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armpi_fpv_kinematics:srv/GetLink.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/get_link.hpp"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__BUILDER_HPP_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armpi_fpv_kinematics/srv/detail/get_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armpi_fpv_kinematics
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::GetLink_Request>()
{
  return ::armpi_fpv_kinematics::srv::GetLink_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_GetLink_Response_data
{
public:
  explicit Init_GetLink_Response_data(::armpi_fpv_kinematics::srv::GetLink_Response & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::GetLink_Response data(::armpi_fpv_kinematics::srv::GetLink_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::GetLink_Response msg_;
};

class Init_GetLink_Response_success
{
public:
  Init_GetLink_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLink_Response_data success(::armpi_fpv_kinematics::srv::GetLink_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetLink_Response_data(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::GetLink_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::GetLink_Response>()
{
  return armpi_fpv_kinematics::srv::builder::Init_GetLink_Response_success();
}

}  // namespace armpi_fpv_kinematics


namespace armpi_fpv_kinematics
{

namespace srv
{

namespace builder
{

class Init_GetLink_Event_response
{
public:
  explicit Init_GetLink_Event_response(::armpi_fpv_kinematics::srv::GetLink_Event & msg)
  : msg_(msg)
  {}
  ::armpi_fpv_kinematics::srv::GetLink_Event response(::armpi_fpv_kinematics::srv::GetLink_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::GetLink_Event msg_;
};

class Init_GetLink_Event_request
{
public:
  explicit Init_GetLink_Event_request(::armpi_fpv_kinematics::srv::GetLink_Event & msg)
  : msg_(msg)
  {}
  Init_GetLink_Event_response request(::armpi_fpv_kinematics::srv::GetLink_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLink_Event_response(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::GetLink_Event msg_;
};

class Init_GetLink_Event_info
{
public:
  Init_GetLink_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLink_Event_request info(::armpi_fpv_kinematics::srv::GetLink_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLink_Event_request(msg_);
  }

private:
  ::armpi_fpv_kinematics::srv::GetLink_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::armpi_fpv_kinematics::srv::GetLink_Event>()
{
  return armpi_fpv_kinematics::srv::builder::Init_GetLink_Event_info();
}

}  // namespace armpi_fpv_kinematics

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__BUILDER_HPP_
