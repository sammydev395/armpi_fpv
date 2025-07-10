// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from armpi_fpv_kinematics:srv/GetLink.idl
// generated code does not contain a copyright notice

#include "armpi_fpv_kinematics/srv/detail/get_link__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__GetLink__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x8b, 0x87, 0x04, 0xd6, 0x14, 0x8e, 0x69,
      0xf4, 0x8e, 0x68, 0x5c, 0x92, 0xe4, 0xdf, 0xe0,
      0x22, 0x4a, 0x5e, 0x39, 0xab, 0x6d, 0x0f, 0xb4,
      0xc1, 0xf8, 0xdc, 0x98, 0x1e, 0xbe, 0x89, 0x68,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__GetLink_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0x6e, 0xb5, 0xf3, 0x7a, 0xd4, 0x86, 0x4a,
      0x27, 0x27, 0xaf, 0xe2, 0xf4, 0x1d, 0x3c, 0x24,
      0xf9, 0x6b, 0x9b, 0xbc, 0x39, 0x15, 0x27, 0x7d,
      0xf4, 0x48, 0x7f, 0x92, 0xf8, 0xaf, 0xc1, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__GetLink_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x28, 0xcf, 0x5a, 0x44, 0x9f, 0xc7, 0x6e,
      0xd3, 0x30, 0x66, 0x05, 0x41, 0x77, 0x6c, 0x0f,
      0x0f, 0x39, 0xea, 0x6f, 0xe6, 0x2d, 0xa0, 0xae,
      0x34, 0x08, 0x07, 0xab, 0x3b, 0xb5, 0xca, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__srv__GetLink_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x3b, 0xe2, 0xc5, 0x54, 0x41, 0xd2, 0x55,
      0x51, 0x88, 0xd3, 0x40, 0xf9, 0x51, 0xc1, 0xc3,
      0xdf, 0xbf, 0x8a, 0x00, 0xd5, 0x70, 0x57, 0xfa,
      0xc1, 0xd4, 0x13, 0xa1, 0x79, 0xb7, 0x5c, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "armpi_fpv_kinematics/msg/detail/link__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t armpi_fpv_kinematics__msg__Link__EXPECTED_HASH = {1, {
    0xd0, 0xaf, 0x1d, 0x8e, 0xc0, 0x8e, 0x6d, 0x07,
    0x16, 0x9a, 0x18, 0x36, 0xac, 0x5e, 0x65, 0x25,
    0xb5, 0x47, 0x63, 0x93, 0x72, 0xc2, 0x89, 0x73,
    0x47, 0xfe, 0xab, 0x7f, 0xc2, 0x6f, 0x74, 0xe1,
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

static char armpi_fpv_kinematics__srv__GetLink__TYPE_NAME[] = "armpi_fpv_kinematics/srv/GetLink";
static char armpi_fpv_kinematics__msg__Link__TYPE_NAME[] = "armpi_fpv_kinematics/msg/Link";
static char armpi_fpv_kinematics__srv__GetLink_Event__TYPE_NAME[] = "armpi_fpv_kinematics/srv/GetLink_Event";
static char armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME[] = "armpi_fpv_kinematics/srv/GetLink_Request";
static char armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME[] = "armpi_fpv_kinematics/srv/GetLink_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__request_message[] = "request_message";
static char armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__response_message[] = "response_message";
static char armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__GetLink__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__srv__GetLink_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__GetLink__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
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
armpi_fpv_kinematics__srv__GetLink__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__GetLink__TYPE_NAME, 32, 32},
      {armpi_fpv_kinematics__srv__GetLink__FIELDS, 3, 3},
    },
    {armpi_fpv_kinematics__srv__GetLink__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__Link__EXPECTED_HASH, armpi_fpv_kinematics__msg__Link__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__Link__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = armpi_fpv_kinematics__srv__GetLink_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = armpi_fpv_kinematics__srv__GetLink_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = armpi_fpv_kinematics__srv__GetLink_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__GetLink_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__GetLink_Request__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__GetLink_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__GetLink_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
      {armpi_fpv_kinematics__srv__GetLink_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__GetLink_Response__FIELD_NAME__success[] = "success";
static char armpi_fpv_kinematics__srv__GetLink_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__GetLink_Response__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__GetLink_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__GetLink_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__srv__GetLink_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
      {armpi_fpv_kinematics__srv__GetLink_Response__FIELDS, 2, 2},
    },
    {armpi_fpv_kinematics__srv__GetLink_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__Link__EXPECTED_HASH, armpi_fpv_kinematics__msg__Link__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__Link__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__info[] = "info";
static char armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__request[] = "request";
static char armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__srv__GetLink_Event__FIELDS[] = {
  {
    {armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__srv__GetLink_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
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
armpi_fpv_kinematics__srv__GetLink_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__srv__GetLink_Event__TYPE_NAME, 38, 38},
      {armpi_fpv_kinematics__srv__GetLink_Event__FIELDS, 3, 3},
    },
    {armpi_fpv_kinematics__srv__GetLink_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__Link__EXPECTED_HASH, armpi_fpv_kinematics__msg__Link__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__Link__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = armpi_fpv_kinematics__srv__GetLink_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = armpi_fpv_kinematics__srv__GetLink_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "bool success\n"
  "armpi_fpv_kinematics/Link data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__GetLink__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__GetLink__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__GetLink_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__GetLink_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__GetLink_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__GetLink_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__srv__GetLink_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__srv__GetLink_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__GetLink__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__GetLink__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(NULL);
    sources[2] = *armpi_fpv_kinematics__srv__GetLink_Event__get_individual_type_description_source(NULL);
    sources[3] = *armpi_fpv_kinematics__srv__GetLink_Request__get_individual_type_description_source(NULL);
    sources[4] = *armpi_fpv_kinematics__srv__GetLink_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__GetLink_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__GetLink_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__GetLink_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__GetLink_Response__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__srv__GetLink_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__srv__GetLink_Event__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(NULL);
    sources[2] = *armpi_fpv_kinematics__srv__GetLink_Request__get_individual_type_description_source(NULL);
    sources[3] = *armpi_fpv_kinematics__srv__GetLink_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
