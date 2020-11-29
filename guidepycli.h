#ifndef GUIDEPYCLI_H_
#define GUIDEPYCLI_H_

#include <python2.7/Python.h>
#include "guide.grpc.pb.h"
#include <memory>

struct GuideClient {
  std::unique_ptr<Guide::Stub> stub;
};

extern PyMethodDef GuidePyCliMethods[];

PyMODINIT_FUNC initguidepycli();
PyAPI_FUNC(PyObject *) guidepycli_GuideClient(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) guidepycli_get_next_step(PyObject *, PyObject *);

#endif
