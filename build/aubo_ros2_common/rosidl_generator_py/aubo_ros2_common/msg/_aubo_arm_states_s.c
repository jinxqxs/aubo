// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aubo_ros2_common:msg/AuboArmStates.idl
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
#include "aubo_ros2_common/msg/detail/aubo_arm_states__struct.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_states__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aubo_ros2_common__msg__aubo_arm_states__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("aubo_ros2_common.msg._aubo_arm_states.AuboArmStates", full_classname_dest, 51) == 0);
  }
  aubo_ros2_common__msg__AuboArmStates * ros_message = _ros_message;
  {  // move_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_type = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // collision_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collision_level = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // arm_power_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_power_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arm_power_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // collision_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->collision_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // singularity_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "singularity_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->singularity_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // protective_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "protective_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->protective_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_motion = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aubo_ros2_common__msg__aubo_arm_states__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AuboArmStates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aubo_ros2_common.msg._aubo_arm_states");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AuboArmStates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aubo_ros2_common__msg__AuboArmStates * ros_message = (aubo_ros2_common__msg__AuboArmStates *)raw_ros_message;
  {  // move_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->move_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->collision_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_power_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arm_power_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_power_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->collision_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // singularity_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->singularity_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "singularity_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protective_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->protective_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protective_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
