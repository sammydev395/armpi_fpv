// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwonder_servo_msgs:action/ActionGroupRunner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/action/action_group_runner.hpp"


#ifndef HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__BUILDER_HPP_
#define HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_Goal_repeat
{
public:
  explicit Init_ActionGroupRunner_Goal_repeat(::hiwonder_servo_msgs::action::ActionGroupRunner_Goal & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Goal repeat(::hiwonder_servo_msgs::action::ActionGroupRunner_Goal::_repeat_type arg)
  {
    msg_.repeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Goal msg_;
};

class Init_ActionGroupRunner_Goal_name
{
public:
  Init_ActionGroupRunner_Goal_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_Goal_repeat name(::hiwonder_servo_msgs::action::ActionGroupRunner_Goal::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActionGroupRunner_Goal_repeat(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_Goal>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_Goal_name();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_Result_result
{
public:
  explicit Init_ActionGroupRunner_Result_result(::hiwonder_servo_msgs::action::ActionGroupRunner_Result & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Result result(::hiwonder_servo_msgs::action::ActionGroupRunner_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Result msg_;
};

class Init_ActionGroupRunner_Result_name
{
public:
  Init_ActionGroupRunner_Result_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_Result_result name(::hiwonder_servo_msgs::action::ActionGroupRunner_Result::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActionGroupRunner_Result_result(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_Result>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_Result_name();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_Feedback_step
{
public:
  explicit Init_ActionGroupRunner_Feedback_step(::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback step(::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback::_step_type arg)
  {
    msg_.step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback msg_;
};

class Init_ActionGroupRunner_Feedback_name
{
public:
  Init_ActionGroupRunner_Feedback_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_Feedback_step name(::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActionGroupRunner_Feedback_step(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_Feedback>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_Feedback_name();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_SendGoal_Request_goal
{
public:
  explicit Init_ActionGroupRunner_SendGoal_Request_goal(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request goal(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request msg_;
};

class Init_ActionGroupRunner_SendGoal_Request_goal_id
{
public:
  Init_ActionGroupRunner_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_SendGoal_Request_goal goal_id(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionGroupRunner_SendGoal_Request_goal(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_SendGoal_Request_goal_id();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_SendGoal_Response_stamp
{
public:
  explicit Init_ActionGroupRunner_SendGoal_Response_stamp(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response stamp(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response msg_;
};

class Init_ActionGroupRunner_SendGoal_Response_accepted
{
public:
  Init_ActionGroupRunner_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_SendGoal_Response_stamp accepted(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActionGroupRunner_SendGoal_Response_stamp(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_SendGoal_Response_accepted();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_SendGoal_Event_response
{
public:
  explicit Init_ActionGroupRunner_SendGoal_Event_response(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event response(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event msg_;
};

class Init_ActionGroupRunner_SendGoal_Event_request
{
public:
  explicit Init_ActionGroupRunner_SendGoal_Event_request(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ActionGroupRunner_SendGoal_Event_response request(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActionGroupRunner_SendGoal_Event_response(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event msg_;
};

class Init_ActionGroupRunner_SendGoal_Event_info
{
public:
  Init_ActionGroupRunner_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_SendGoal_Event_request info(::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActionGroupRunner_SendGoal_Event_request(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_SendGoal_Event_info();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_GetResult_Request_goal_id
{
public:
  Init_ActionGroupRunner_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request goal_id(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_GetResult_Request_goal_id();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_GetResult_Response_result
{
public:
  explicit Init_ActionGroupRunner_GetResult_Response_result(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response result(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response msg_;
};

class Init_ActionGroupRunner_GetResult_Response_status
{
public:
  Init_ActionGroupRunner_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_GetResult_Response_result status(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionGroupRunner_GetResult_Response_result(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_GetResult_Response_status();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_GetResult_Event_response
{
public:
  explicit Init_ActionGroupRunner_GetResult_Event_response(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event response(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event msg_;
};

class Init_ActionGroupRunner_GetResult_Event_request
{
public:
  explicit Init_ActionGroupRunner_GetResult_Event_request(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ActionGroupRunner_GetResult_Event_response request(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActionGroupRunner_GetResult_Event_response(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event msg_;
};

class Init_ActionGroupRunner_GetResult_Event_info
{
public:
  Init_ActionGroupRunner_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_GetResult_Event_request info(::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActionGroupRunner_GetResult_Event_request(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_GetResult_Event_info();
}

}  // namespace hiwonder_servo_msgs


namespace hiwonder_servo_msgs
{

namespace action
{

namespace builder
{

class Init_ActionGroupRunner_FeedbackMessage_feedback
{
public:
  explicit Init_ActionGroupRunner_FeedbackMessage_feedback(::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage feedback(::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage msg_;
};

class Init_ActionGroupRunner_FeedbackMessage_goal_id
{
public:
  Init_ActionGroupRunner_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupRunner_FeedbackMessage_feedback goal_id(::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionGroupRunner_FeedbackMessage_feedback(msg_);
  }

private:
  ::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage>()
{
  return hiwonder_servo_msgs::action::builder::Init_ActionGroupRunner_FeedbackMessage_goal_id();
}

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__BUILDER_HPP_
