// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from armpi_fpv_kinematics:srv/SetJointRange.idl
// generated code does not contain a copyright notice

#include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__SetJointRange__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0xf3, 0x9d, 0x27, 0xf3, 0x02, 0x17, 0x0f,
      0xd4, 0x14, 0x7c, 0xe8, 0x41, 0x95, 0xeb, 0x01,
      0x61, 0x74, 0xad, 0x6a, 0x2b, 0xff, 0x05, 0xc3,
      0x14, 0xb1, 0x31, 0x85, 0x0d, 0x95, 0x17, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0xcc, 0x99, 0x7b, 0x0f, 0x7a, 0xb1, 0xe2,
      0x63, 0xc8, 0xa6, 0x78, 0x7e, 0x4c, 0xee, 0xa0,
      0xcd, 0x8e, 0x45, 0x65, 0x56, 0x52, 0x5c, 0x26,
      0xf3, 0x9d, 0x17, 0xd7, 0x15, 0x9e, 0x4b, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xbf, 0x1a, 0x4a, 0x59, 0xf2, 0xe2, 0x70,
      0xfa, 0xc4, 0x9a, 0xf9, 0x4a, 0x71, 0x7b, 0xbf,
      0xcd, 0x56, 0x07, 0x6d, 0xae, 0x2e, 0xf5, 0xe0,
      0x4a, 0x54, 0xd2, 0x61, 0x4b, 0xe8, 0x0d, 0x23,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x4e, 0x0b, 0xa9, 0x86, 0x77, 0x11, 0xa5,
      0xc3, 0xa3, 0x97, 0xe2, 0x8b, 0xf2, 0xdb, 0xb0,
      0x65, 0xab, 0x21, 0x50, 0x5b, 0x55, 0x69, 0x53,
      0xe6, 0x4f, 0x86, 0x02, 0x02, 0xea, 0xef, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"
#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH = {1, {
    0xd4, 0x0c, 0x67, 0xf4, 0x91, 0xba, 0x12, 0x79,
    0xf7, 0x5d, 0x89, 0xd5, 0x7b, 0x32, 0x7d, 0xa3,
    0x9d, 0x54, 0x3e, 0xc7, 0x9a, 0x64, 0x6b, 0xbb,
    0xcb, 0xc4, 0x48, 0x52, 0x61, 0x28, 0x87, 0xf7,
  }};
static const rosidl_type_hash_t armpi_fpv_kinematics__msg__JointsRange__EXPECTED_HASH = {1, {
    0x28, 0x11, 0x9c, 0x48, 0xa7, 0x56, 0x99, 0xaf,
    0xfb, 0xb2, 0x66, 0x0a, 0xca, 0xa1, 0x71, 0x0d,
    0x5f, 0x68, 0xa3, 0x02, 0xbf, 0x7f, 0x87, 0xb1,
    0x63, 0xab, 0x85, 0x0c, 0xac, 0x54, 0x3a, 0x1d,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char armpi_fpv_kinematics__srv__SetJointRange__TYPE_NAME[] = "armpi_fpv_kinematics/srv/SetJointRange";
static char armpi_fpv_kinematics__msg__JointRange__TYPE_NAME[] = "armpi_fpv_kinematics/msg/JointRange";
static char armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME[] = "armpi_fpv_kinematics/msg/JointsRange";
static char armpi_fpv_kinematics__srv__SetJointRange_Event__TYPE_NAME[] = "armpi_fpv_kinematics/srv/SetJointRange_Event";
static char armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME[] = "armpi_fpv_kinematics/srv/SetJointRange_Request";
static char armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME[] = "armpi_fpv_kinematics/srv/SetJointRange_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__request_message[] = "request_message";
static char armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__response_message[] = "response_message";
static char armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__SetJointRange__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__SetJointRange_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__SetJointRange__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__SetJointRange__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__SetJointRange__TYPE_NAME, 38, 38},
      {armpi_fpv_kinematics__srv__SetJointRange__FIELDS, 3, 3},
    },
    {armpi_fpv_kinematics__srv__SetJointRange__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__JointRange__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointsRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointsRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = armpi_fpv_kinematics__msg__JointsRange__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__SetJointRange_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__SetJointRange_Request__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__SetJointRange_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
      {armpi_fpv_kinematics__srv__SetJointRange_Request__FIELDS, 1, 1},
    },
    {armpi_fpv_kinematics__srv__SetJointRange_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__JointRange__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointsRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointsRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = armpi_fpv_kinematics__msg__JointsRange__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__SetJointRange_Response__FIELD_NAME__success[] = "success";
static char armpi_fpv_kinematics__srv__SetJointRange_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__SetJointRange_Response__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
      {armpi_fpv_kinematics__srv__SetJointRange_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__info[] = "info";
static char armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__request[] = "request";
static char armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__SetJointRange_Event__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__SetJointRange_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__SetJointRange_Event__TYPE_NAME, 44, 44},
      {armpi_fpv_kinematics__srv__SetJointRange_Event__FIELDS, 3, 3},
    },
    {armpi_fpv_kinematics__srv__SetJointRange_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__JointRange__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointsRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointsRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = armpi_fpv_kinematics__msg__JointsRange__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "armpi_fpv_kinematics/JointsRange data\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__SetJointRange__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__SetJointRange__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__SetJointRange_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__SetJointRange_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__SetJointRange_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__SetJointRange_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__SetJointRange_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__SetJointRange_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__SetJointRange__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__SetJointRange__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(NULL);
    sources[2] = *armpi_fpv_kinematics__msg__JointsRange__get_individual_type_description_source(NULL);
    sources[3] = *armpi_fpv_kinematics__srv__SetJointRange_Event__get_individual_type_description_source(NULL);
    sources[4] = *armpi_fpv_kinematics__srv__SetJointRange_Request__get_individual_type_description_source(NULL);
    sources[5] = *armpi_fpv_kinematics__srv__SetJointRange_Response__get_individual_type_description_source(NULL);
    sources[6] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__SetJointRange_Request__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(NULL);
    sources[2] = *armpi_fpv_kinematics__msg__JointsRange__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__SetJointRange_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__SetJointRange_Event__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(NULL);
    sources[2] = *armpi_fpv_kinematics__msg__JointsRange__get_individual_type_description_source(NULL);
    sources[3] = *armpi_fpv_kinematics__srv__SetJointRange_Request__get_individual_type_description_source(NULL);
    sources[4] = *armpi_fpv_kinematics__srv__SetJointRange_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
