// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: guide.proto
#ifndef GRPC_guide_2eproto__INCLUDED
#define GRPC_guide_2eproto__INCLUDED

#include "guide.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class Guide final {
 public:
  static constexpr char const* service_full_name() {
    return "Guide";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::Step* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Step>> AsyncGetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Step>>(AsyncGetNextStepRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Step>> PrepareAsyncGetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Step>>(PrepareAsyncGetNextStepRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Step>* AsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Step>* PrepareAsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::Step* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Step>> AsyncGetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Step>>(AsyncGetNextStepRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Step>> PrepareAsyncGetNextStep(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Step>>(PrepareAsyncGetNextStepRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetNextStep(::grpc::ClientContext* context, const ::CarPosition* request, ::Step* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Step>* AsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Step>* PrepareAsyncGetNextStepRaw(::grpc::ClientContext* context, const ::CarPosition& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetNextStep_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetNextStep(::grpc::ServerContext* context, const ::CarPosition* request, ::Step* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetNextStep() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetNextStep(::grpc::ServerContext* context, ::CarPosition* request, ::grpc::ServerAsyncResponseWriter< ::Step>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetNextStep<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetNextStep() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::CarPosition, ::Step>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::CarPosition* request, ::Step* response) { return this->GetNextStep(context, request, response); }));}
    void SetMessageAllocatorFor_GetNextStep(
        ::grpc::experimental::MessageAllocator< ::CarPosition, ::Step>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::CarPosition, ::Step>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetNextStep(
      ::grpc::CallbackServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetNextStep(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetNextStep<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetNextStep<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetNextStep() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetNextStep() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetNextStep(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetNextStep() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetNextStep(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetNextStep(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetNextStep(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetNextStep : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetNextStep() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::CarPosition, ::Step>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::CarPosition, ::Step>* streamer) {
                       return this->StreamedGetNextStep(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetNextStep() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetNextStep(::grpc::ServerContext* /*context*/, const ::CarPosition* /*request*/, ::Step* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetNextStep(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::CarPosition,::Step>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetNextStep<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetNextStep<Service > StreamedService;
};


#endif  // GRPC_guide_2eproto__INCLUDED
