#include <python2.7/Python.h>
#include "guidepycli.h"
#include "guide.pb.h"
#include "guide.grpc.pb.h"
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

static void DeleteGuideClient(void *guide_client);

PyMethodDef GuidePyCliMethods[] = {
  {"GuideClient", guidepycli_GuideClient, METH_VARARGS, ""},
  {"get_next_step", guidepycli_get_next_step, METH_VARARGS, ""},
  {NULL, NULL, 0, NULL},
};

PyMODINIT_FUNC initguidepycli() {
  Py_InitModule("guidepycli", GuidePyCliMethods);
}

PyAPI_FUNC(PyObject *) guidepycli_GuideClient(PyObject *self,
                                              PyObject *args) {
  const char *server_addr;
  std::shared_ptr<grpc::ChannelCredentials> credentials;
  std::shared_ptr<grpc::Channel> channel;
  GuideClient *guide_client = new GuideClient;

  if (!PyArg_ParseTuple(args, "s", &server_addr))
    return NULL;

  credentials = grpc::InsecureChannelCredentials();
  channel = grpc::CreateChannel(server_addr, credentials);
  guide_client->stub = Guide::NewStub(channel);

  return PyCObject_FromVoidPtr(guide_client, DeleteGuideClient);
}

PyAPI_FUNC(PyObject *) guidepycli_get_next_step(PyObject *self,
                                                PyObject *args) {
  PyObject *py_object = NULL;
  int car_id = 0;
  int cur_row_idx = 0;
  int cur_col_idx = 0;
  int goal_row_idx = 0;
  int goal_col_idx = 0;
  GuideClient *guide_client = NULL;
  grpc::ClientContext context;
  CarState car_state;
  Step step;
  grpc::Status status;

  if (!PyArg_ParseTuple(args, "Oiiiii", &py_object, &car_id, &cur_row_idx,
                        &cur_col_idx, &goal_row_idx, &goal_col_idx))
    return NULL;
  if (PyCObject_Check(py_object))
    guide_client = (GuideClient *) ((PyCObject *) py_object)->cobject;
  else
    return PyErr_Format(PyExc_AttributeError, "");

  car_state.set_car_id(car_id);
  car_state.set_cur_row_idx(cur_row_idx);
  car_state.set_cur_col_idx(cur_col_idx);
  car_state.set_goal_row_idx(goal_row_idx);
  car_state.set_goal_col_idx(goal_col_idx);

  status = guide_client->stub->GetNextStep(&context, car_state, &step);
  if (!status.ok())
    return PyErr_Format(PyExc_RuntimeError, "");

  return PyInt_FromLong(step.step_code());
}

static void DeleteGuideClient(void *guide_client) {
  delete (GuideClient *) guide_client;
}
