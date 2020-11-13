// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: guide.proto

#include "guide.pb.h"
#include "guide.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* Guide_method_names[] = {
  "/Guide/GetNextStep",
};

std::unique_ptr< Guide::Stub> Guide::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Guide::Stub> stub(new Guide::Stub(channel));
  return stub;
}

Guide::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetNextStep_(Guide_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Guide::Stub::GetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::Step* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNextStep_, context, request, response);
}

void Guide::Stub::experimental_async::GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetNextStep_, context, request, response, std::move(f));
}

void Guide::Stub::experimental_async::GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetNextStep_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Step>* Guide::Stub::PrepareAsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Step>::Create(channel_.get(), cq, rpcmethod_GetNextStep_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::Step>* Guide::Stub::AsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetNextStepRaw(context, request, cq);
  result->StartCall();
  return result;
}

Guide::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Guide_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Guide::Service, ::CarPosition, ::Step>(
          [](Guide::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CarPosition* req,
             ::Step* resp) {
               return service->GetNextStep(ctx, req, resp);
             }, this)));
}

Guide::Service::~Service() {
}

::grpc::Status Guide::Service::GetNextStep(::grpc::ServerContext* context, const ::CarPosition* request, ::Step* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


