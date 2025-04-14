// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
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
#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.h"
#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__detect_more_loop_closures__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("rtabmap_msgs.srv._detect_more_loop_closures.DetectMoreLoopClosures_Request", full_classname_dest, 74) == 0);
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Request * ros_message = _ros_message;
  {  // cluster_radius_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_radius_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cluster_radius_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cluster_radius_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_radius_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cluster_radius_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cluster_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cluster_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "iterations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iterations = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // intra_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "intra_only");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->intra_only = (Py_True == field);
    Py_DECREF(field);
  }
  {  // inter_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "inter_only");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->inter_only = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__detect_more_loop_closures__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectMoreLoopClosures_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._detect_more_loop_closures");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectMoreLoopClosures_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Request * ros_message = (rtabmap_msgs__srv__DetectMoreLoopClosures_Request *)raw_ros_message;
  {  // cluster_radius_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cluster_radius_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_radius_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_radius_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cluster_radius_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_radius_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cluster_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iterations
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->iterations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iterations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intra_only
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->intra_only ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intra_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inter_only
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->inter_only ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inter_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__detect_more_loop_closures__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("rtabmap_msgs.srv._detect_more_loop_closures.DetectMoreLoopClosures_Response", full_classname_dest, 75) == 0);
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Response * ros_message = _ros_message;
  {  // detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detected = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__detect_more_loop_closures__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectMoreLoopClosures_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._detect_more_loop_closures");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectMoreLoopClosures_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Response * ros_message = (rtabmap_msgs__srv__DetectMoreLoopClosures_Response *)raw_ros_message;
  {  // detected
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->detected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/detect_more_loop_closures__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool rtabmap_msgs__srv__detect_more_loop_closures__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__srv__detect_more_loop_closures__request__convert_to_py(void * raw_ros_message);
bool rtabmap_msgs__srv__detect_more_loop_closures__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__srv__detect_more_loop_closures__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__detect_more_loop_closures__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("rtabmap_msgs.srv._detect_more_loop_closures.DetectMoreLoopClosures_Event", full_classname_dest, 72) == 0);
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!rtabmap_msgs__srv__DetectMoreLoopClosures_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtabmap_msgs__srv__DetectMoreLoopClosures_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtabmap_msgs__srv__DetectMoreLoopClosures_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtabmap_msgs__srv__detect_more_loop_closures__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!rtabmap_msgs__srv__DetectMoreLoopClosures_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtabmap_msgs__srv__DetectMoreLoopClosures_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtabmap_msgs__srv__DetectMoreLoopClosures_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtabmap_msgs__srv__detect_more_loop_closures__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * rtabmap_msgs__srv__detect_more_loop_closures__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectMoreLoopClosures_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._detect_more_loop_closures");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectMoreLoopClosures_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__DetectMoreLoopClosures_Event * ros_message = (rtabmap_msgs__srv__DetectMoreLoopClosures_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtabmap_msgs__srv__DetectMoreLoopClosures_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = rtabmap_msgs__srv__detect_more_loop_closures__request__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtabmap_msgs__srv__DetectMoreLoopClosures_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = rtabmap_msgs__srv__detect_more_loop_closures__response__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
