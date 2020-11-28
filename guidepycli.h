#include "guide.grpc.pb.h"
#include <python2.7/Python.h>
#include <memory>

struct GuideClient {
  std::unique_ptr<Guide::Stub> stub;
};

extern PyMethodDef GuidePyCliMethods[];

PyMODINIT_FUNC initguidepycli();
PyAPI_FUNC(PyObject *) guidepycli_GuideClient(PyObject *, PyObject *);
PyAPI_FUNC(PyObject *) guidepycli_get_next_step(PyObject *, PyObject *);
