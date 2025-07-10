// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice

#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__msg__JointsRange__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0x11, 0x9c, 0x48, 0xa7, 0x56, 0x99, 0xaf,
      0xfb, 0xb2, 0x66, 0x0a, 0xca, 0xa1, 0x71, 0x0d,
      0x5f, 0x68, 0xa3, 0x02, 0xbf, 0x7f, 0x87, 0xb1,
      0x63, 0xab, 0x85, 0x0c, 0xac, 0x54, 0x3a, 0x1d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH = {1, {
    0xd4, 0x0c, 0x67, 0xf4, 0x91, 0xba, 0x12, 0x79,
    0xf7, 0x5d, 0x89, 0xd5, 0x7b, 0x32, 0x7d, 0xa3,
    0x9d, 0x54, 0x3e, 0xc7, 0x9a, 0x64, 0x6b, 0xbb,
    0xcb, 0xc4, 0x48, 0x52, 0x61, 0x28, 0x87, 0xf7,
  }};
#endif

static char armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME[] = "armpi_fpv_kinematics/msg/JointsRange";
static char armpi_fpv_kinematics__msg__JointRange__TYPE_NAME[] = "armpi_fpv_kinematics/msg/JointRange";

// Define type names, field names, and default values
static char armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint1[] = "joint1";
static char armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint2[] = "joint2";
static char armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint3[] = "joint3";
static char armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint4[] = "joint4";
static char armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint5[] = "joint5";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__msg__JointsRange__FIELDS[] = {
  {
    {armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointsRange__FIELD_NAME__joint5, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription armpi_fpv_kinematics__msg__JointsRange__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__msg__JointsRange__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
      {armpi_fpv_kinematics__msg__JointsRange__FIELDS, 5, 5},
    },
    {armpi_fpv_kinematics__msg__JointsRange__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&armpi_fpv_kinematics__msg__JointRange__EXPECTED_HASH, armpi_fpv_kinematics__msg__JointRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = armpi_fpv_kinematics__msg__JointRange__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "armpi_fpv_kinematics/JointRange joint1\n"
  "armpi_fpv_kinematics/JointRange joint2\n"
  "armpi_fpv_kinematics/JointRange joint3\n"
  "armpi_fpv_kinematics/JointRange joint4\n"
  "armpi_fpv_kinematics/JointRange joint5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__msg__JointsRange__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__msg__JointsRange__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 195, 195},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__msg__JointsRange__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__msg__JointsRange__get_individual_type_description_source(NULL),
    sources[1] = *armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
