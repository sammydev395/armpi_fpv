// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwonder_servo_msgs:action/ActionGroupRunner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/action/action_group_runner.hpp"


#ifndef HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_HPP_
#define HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Goal __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_Goal_
{
  using Type = ActionGroupRunner_Goal_<ContainerAllocator>;

  explicit ActionGroupRunner_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->repeat = 0ul;
    }
  }

  explicit ActionGroupRunner_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->repeat = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _repeat_type =
    uint32_t;
  _repeat_type repeat;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__repeat(
    const uint32_t & _arg)
  {
    this->repeat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Goal
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Goal
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_Goal_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->repeat != other.repeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_Goal_

// alias to use template instance with default allocator
using ActionGroupRunner_Goal =
  hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Result __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Result __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_Result_
{
  using Type = ActionGroupRunner_Result_<ContainerAllocator>;

  explicit ActionGroupRunner_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->result = "";
    }
  }

  explicit ActionGroupRunner_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->result = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Result
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Result
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_Result_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_Result_

// alias to use template instance with default allocator
using ActionGroupRunner_Result =
  hiwonder_servo_msgs::action::ActionGroupRunner_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Feedback __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_Feedback_
{
  using Type = ActionGroupRunner_Feedback_<ContainerAllocator>;

  explicit ActionGroupRunner_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->step = 0ul;
    }
  }

  explicit ActionGroupRunner_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->step = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _step_type =
    uint32_t;
  _step_type step;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__step(
    const uint32_t & _arg)
  {
    this->step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Feedback
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_Feedback
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_Feedback_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_Feedback_

// alias to use template instance with default allocator
using ActionGroupRunner_Feedback =
  hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_SendGoal_Request_
{
  using Type = ActionGroupRunner_SendGoal_Request_<ContainerAllocator>;

  explicit ActionGroupRunner_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActionGroupRunner_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hiwonder_servo_msgs::action::ActionGroupRunner_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_SendGoal_Request_

// alias to use template instance with default allocator
using ActionGroupRunner_SendGoal_Request =
  hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_SendGoal_Response_
{
  using Type = ActionGroupRunner_SendGoal_Response_<ContainerAllocator>;

  explicit ActionGroupRunner_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActionGroupRunner_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_SendGoal_Response_

// alias to use template instance with default allocator
using ActionGroupRunner_SendGoal_Response =
  hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_SendGoal_Event_
{
  using Type = ActionGroupRunner_SendGoal_Event_<ContainerAllocator>;

  explicit ActionGroupRunner_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActionGroupRunner_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_SendGoal_Event_

// alias to use template instance with default allocator
using ActionGroupRunner_SendGoal_Event =
  hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs

namespace hiwonder_servo_msgs
{

namespace action
{

struct ActionGroupRunner_SendGoal
{
  using Request = hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Request;
  using Response = hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Response;
  using Event = hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal_Event;
};

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_GetResult_Request_
{
  using Type = ActionGroupRunner_GetResult_Request_<ContainerAllocator>;

  explicit ActionGroupRunner_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActionGroupRunner_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_GetResult_Request_

// alias to use template instance with default allocator
using ActionGroupRunner_GetResult_Request =
  hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_GetResult_Response_
{
  using Type = ActionGroupRunner_GetResult_Response_<ContainerAllocator>;

  explicit ActionGroupRunner_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionGroupRunner_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hiwonder_servo_msgs::action::ActionGroupRunner_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_GetResult_Response_

// alias to use template instance with default allocator
using ActionGroupRunner_GetResult_Response =
  hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_GetResult_Event_
{
  using Type = ActionGroupRunner_GetResult_Event_<ContainerAllocator>;

  explicit ActionGroupRunner_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActionGroupRunner_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_GetResult_Event_

// alias to use template instance with default allocator
using ActionGroupRunner_GetResult_Event =
  hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs

namespace hiwonder_servo_msgs
{

namespace action
{

struct ActionGroupRunner_GetResult
{
  using Request = hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Request;
  using Response = hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Response;
  using Event = hiwonder_servo_msgs::action::ActionGroupRunner_GetResult_Event;
};

}  // namespace action

}  // namespace hiwonder_servo_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage __declspec(deprecated)
#endif

namespace hiwonder_servo_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionGroupRunner_FeedbackMessage_
{
  using Type = ActionGroupRunner_FeedbackMessage_<ContainerAllocator>;

  explicit ActionGroupRunner_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActionGroupRunner_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hiwonder_servo_msgs::action::ActionGroupRunner_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage
    std::shared_ptr<hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionGroupRunner_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionGroupRunner_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionGroupRunner_FeedbackMessage_

// alias to use template instance with default allocator
using ActionGroupRunner_FeedbackMessage =
  hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hiwonder_servo_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hiwonder_servo_msgs
{

namespace action
{

struct ActionGroupRunner
{
  /// The goal message defined in the action definition.
  using Goal = hiwonder_servo_msgs::action::ActionGroupRunner_Goal;
  /// The result message defined in the action definition.
  using Result = hiwonder_servo_msgs::action::ActionGroupRunner_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hiwonder_servo_msgs::action::ActionGroupRunner_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hiwonder_servo_msgs::action::ActionGroupRunner_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hiwonder_servo_msgs::action::ActionGroupRunner_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hiwonder_servo_msgs::action::ActionGroupRunner_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActionGroupRunner ActionGroupRunner;

}  // namespace action

}  // namespace hiwonder_servo_msgs

#endif  // HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_HPP_
