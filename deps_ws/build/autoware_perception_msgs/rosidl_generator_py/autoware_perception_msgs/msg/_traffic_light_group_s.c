// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_perception_msgs:msg/TrafficLightGroup.idl
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
#include "autoware_perception_msgs/msg/detail/traffic_light_group__struct.h"
#include "autoware_perception_msgs/msg/detail/traffic_light_group__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__functions.h"
#include "autoware_perception_msgs/msg/detail/traffic_light_element__functions.h"
// end nested array functions include
bool autoware_perception_msgs__msg__traffic_light_element__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_perception_msgs__msg__traffic_light_element__convert_to_py(void * raw_ros_message);
bool autoware_perception_msgs__msg__predicted_traffic_light_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_perception_msgs__msg__predicted_traffic_light_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_perception_msgs__msg__traffic_light_group__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("autoware_perception_msgs.msg._traffic_light_group.TrafficLightGroup", full_classname_dest, 67) == 0);
  }
  autoware_perception_msgs__msg__TrafficLightGroup * ros_message = _ros_message;
  {  // traffic_light_group_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_group_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_light_group_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // elements
    PyObject * field = PyObject_GetAttrString(_pymsg, "elements");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'elements'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__init(&(ros_message->elements), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_perception_msgs__msg__TrafficLightElement__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_perception_msgs__msg__TrafficLightElement * dest = ros_message->elements.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_perception_msgs__msg__traffic_light_element__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // predictions
    PyObject * field = PyObject_GetAttrString(_pymsg, "predictions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predictions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_perception_msgs__msg__PredictedTrafficLightState__Sequence__init(&(ros_message->predictions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_perception_msgs__msg__PredictedTrafficLightState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_perception_msgs__msg__PredictedTrafficLightState * dest = ros_message->predictions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_perception_msgs__msg__predicted_traffic_light_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_perception_msgs__msg__traffic_light_group__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficLightGroup */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_perception_msgs.msg._traffic_light_group");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficLightGroup");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_perception_msgs__msg__TrafficLightGroup * ros_message = (autoware_perception_msgs__msg__TrafficLightGroup *)raw_ros_message;
  {  // traffic_light_group_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->traffic_light_group_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_group_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elements
    PyObject * field = NULL;
    size_t size = ros_message->elements.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_perception_msgs__msg__TrafficLightElement * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->elements.data[i]);
      PyObject * pyitem = autoware_perception_msgs__msg__traffic_light_element__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "elements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predictions
    PyObject * field = NULL;
    size_t size = ros_message->predictions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_perception_msgs__msg__PredictedTrafficLightState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->predictions.data[i]);
      PyObject * pyitem = autoware_perception_msgs__msg__predicted_traffic_light_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "predictions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
