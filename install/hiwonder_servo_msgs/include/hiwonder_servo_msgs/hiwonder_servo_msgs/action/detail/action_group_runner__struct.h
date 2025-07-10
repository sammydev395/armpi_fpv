// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwonder_servo_msgs:action/ActionGroupRunner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hiwonder_servo_msgs/action/action_group_runner.h"


#ifndef HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_H_
#define HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Goal
{
  rosidl_runtime_c__String name;
  uint32_t repeat;
} hiwonder_servo_msgs__action__ActionGroupRunner_Goal;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_Goal.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Result
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String result;
} hiwonder_servo_msgs__action__ActionGroupRunner_Result;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_Result.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Feedback
{
  rosidl_runtime_c__String name;
  uint32_t step;
} hiwonder_servo_msgs__action__ActionGroupRunner_Feedback;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_Feedback.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal goal;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence request;
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence response;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response
{
  int8_t status;
  hiwonder_servo_msgs__action__ActionGroupRunner_Result result;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence request;
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence response;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"

/// Struct defined in action/ActionGroupRunner in the package hiwonder_servo_msgs.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback feedback;
} hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage;

// Struct for a sequence of hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage.
typedef struct hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence
{
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWONDER_SERVO_MSGS__ACTION__DETAIL__ACTION_GROUP_RUNNER__STRUCT_H_
