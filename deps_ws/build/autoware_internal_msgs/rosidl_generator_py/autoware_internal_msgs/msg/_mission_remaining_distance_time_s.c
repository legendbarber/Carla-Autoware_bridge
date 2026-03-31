// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_internal_msgs:msg/MissionRemainingDistanceTime.idl
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
#include "autoware_internal_msgs/msg/detail/mission_remaining_distance_time__struct.h"
#include "autoware_internal_msgs/msg/detail/mission_remaining_distance_time__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autoware_internal_msgs__msg__mission_remaining_distance_time__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[89];
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
    assert(strncmp("autoware_internal_msgs.msg._mission_remaining_distance_time.MissionRemainingDistanceTime", full_classname_dest, 88) == 0);
  }
  autoware_internal_msgs__msg__MissionRemainingDistanceTime * ros_message = _ros_message;
  {  // remaining_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_internal_msgs__msg__mission_remaining_distance_time__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionRemainingDistanceTime */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_internal_msgs.msg._mission_remaining_distance_time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionRemainingDistanceTime");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_internal_msgs__msg__MissionRemainingDistanceTime * ros_message = (autoware_internal_msgs__msg__MissionRemainingDistanceTime *)raw_ros_message;
  {  // remaining_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
