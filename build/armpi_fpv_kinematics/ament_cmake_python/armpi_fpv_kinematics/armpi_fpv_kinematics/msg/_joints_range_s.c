// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"

bool armpi_fpv_kinematics__msg__joint_range__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * armpi_fpv_kinematics__msg__joint_range__convert_to_py(void * raw_ros_message);
bool armpi_fpv_kinematics__msg__joint_range__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * armpi_fpv_kinematics__msg__joint_range__convert_to_py(void * raw_ros_message);
bool armpi_fpv_kinematics__msg__joint_range__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * armpi_fpv_kinematics__msg__joint_range__convert_to_py(void * raw_ros_message);
bool armpi_fpv_kinematics__msg__joint_range__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * armpi_fpv_kinematics__msg__joint_range__convert_to_py(void * raw_ros_message);
bool armpi_fpv_kinematics__msg__joint_range__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * armpi_fpv_kinematics__msg__joint_range__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool armpi_fpv_kinematics__msg__joints_range__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("armpi_fpv_kinematics.msg._joints_range.JointsRange", full_classname_dest, 50) == 0);
  }
  armpi_fpv_kinematics__msg__JointsRange * ros_message = _ros_message;
  {  // joint1
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint1");
    if (!field) {
      return false;
    }
    if (!armpi_fpv_kinematics__msg__joint_range__convert_from_py(field, &ros_message->joint1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint2
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint2");
    if (!field) {
      return false;
    }
    if (!armpi_fpv_kinematics__msg__joint_range__convert_from_py(field, &ros_message->joint2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint3
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint3");
    if (!field) {
      return false;
    }
    if (!armpi_fpv_kinematics__msg__joint_range__convert_from_py(field, &ros_message->joint3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint4
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint4");
    if (!field) {
      return false;
    }
    if (!armpi_fpv_kinematics__msg__joint_range__convert_from_py(field, &ros_message->joint4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint5
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint5");
    if (!field) {
      return false;
    }
    if (!armpi_fpv_kinematics__msg__joint_range__convert_from_py(field, &ros_message->joint5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * armpi_fpv_kinematics__msg__joints_range__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointsRange */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("armpi_fpv_kinematics.msg._joints_range");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointsRange");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  armpi_fpv_kinematics__msg__JointsRange * ros_message = (armpi_fpv_kinematics__msg__JointsRange *)raw_ros_message;
  {  // joint1
    PyObject * field = NULL;
    field = armpi_fpv_kinematics__msg__joint_range__convert_to_py(&ros_message->joint1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint2
    PyObject * field = NULL;
    field = armpi_fpv_kinematics__msg__joint_range__convert_to_py(&ros_message->joint2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint3
    PyObject * field = NULL;
    field = armpi_fpv_kinematics__msg__joint_range__convert_to_py(&ros_message->joint3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint4
    PyObject * field = NULL;
    field = armpi_fpv_kinematics__msg__joint_range__convert_to_py(&ros_message->joint4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint5
    PyObject * field = NULL;
    field = armpi_fpv_kinematics__msg__joint_range__convert_to_py(&ros_message->joint5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
