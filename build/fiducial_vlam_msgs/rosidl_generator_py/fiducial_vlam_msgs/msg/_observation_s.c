// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
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
#include "fiducial_vlam_msgs/msg/detail/observation__struct.h"
#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fiducial_vlam_msgs__msg__observation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("fiducial_vlam_msgs.msg._observation.Observation", full_classname_dest, 47) == 0);
  }
  fiducial_vlam_msgs__msg__Observation * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x0
    PyObject * field = PyObject_GetAttrString(_pymsg, "x0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y0
    PyObject * field = PyObject_GetAttrString(_pymsg, "y0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x3
    PyObject * field = PyObject_GetAttrString(_pymsg, "x3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y3
    PyObject * field = PyObject_GetAttrString(_pymsg, "y3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fiducial_vlam_msgs__msg__observation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Observation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fiducial_vlam_msgs.msg._observation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Observation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fiducial_vlam_msgs__msg__Observation * ros_message = (fiducial_vlam_msgs__msg__Observation *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
