// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointValue_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Request_type_support_ids_t;

static const _SetJointValue_Request_type_support_ids_t _SetJointValue_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Request_type_support_symbol_names_t _SetJointValue_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointValue_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointValue_Request)),
  }
};

typedef struct _SetJointValue_Request_type_support_data_t
{
  void * data[2];
} _SetJointValue_Request_type_support_data_t;

static _SetJointValue_Request_type_support_data_t _SetJointValue_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Request>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointValue_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointValue_Request)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointValue_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Response_type_support_ids_t;

static const _SetJointValue_Response_type_support_ids_t _SetJointValue_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Response_type_support_symbol_names_t _SetJointValue_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointValue_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointValue_Response)),
  }
};

typedef struct _SetJointValue_Response_type_support_data_t
{
  void * data[2];
} _SetJointValue_Response_type_support_data_t;

static _SetJointValue_Response_type_support_data_t _SetJointValue_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Response>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointValue_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointValue_Response)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointValue_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Event_type_support_ids_t;

static const _SetJointValue_Event_type_support_ids_t _SetJointValue_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Event_type_support_symbol_names_t _SetJointValue_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointValue_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointValue_Event)),
  }
};

typedef struct _SetJointValue_Event_type_support_data_t
{
  void * data[2];
} _SetJointValue_Event_type_support_data_t;

static _SetJointValue_Event_type_support_data_t _SetJointValue_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Event>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointValue_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointValue_Event)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointValue_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_type_support_ids_t;

static const _SetJointValue_type_support_ids_t _SetJointValue_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointValue_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_type_support_symbol_names_t _SetJointValue_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointValue)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointValue)),
  }
};

typedef struct _SetJointValue_type_support_data_t
{
  void * data[2];
} _SetJointValue_type_support_data_t;

static _SetJointValue_type_support_data_t _SetJointValue_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointValue_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<armpi_fpv_kinematics::srv::SetJointValue>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<armpi_fpv_kinematics::srv::SetJointValue>,
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointValue_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointValue)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<armpi_fpv_kinematics::srv::SetJointValue>();
}

#ifdef __cplusplus
}
#endif
