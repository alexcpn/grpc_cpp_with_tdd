// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cvmat.proto

#include "cvmat.pb.h"
#include "cvmat.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>

static const char* CvMat_method_names[] = {
  "/CvMat/transferMat",
};

std::unique_ptr< CvMat::Stub> CvMat::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< CvMat::Stub> stub(new CvMat::Stub(channel));
  return stub;
}

CvMat::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_transferMat_(CvMat_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CvMat::Stub::transferMat(::grpc::ClientContext* context, const ::MatInput& request, ::Response* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_transferMat_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::Response>* CvMat::Stub::AsynctransferMatRaw(::grpc::ClientContext* context, const ::MatInput& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::Response>(channel_.get(), cq, rpcmethod_transferMat_, context, request);
}

CvMat::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      CvMat_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< CvMat::Service, ::MatInput, ::Response>(
          std::mem_fn(&CvMat::Service::transferMat), this)));
}

CvMat::Service::~Service() {
}

::grpc::Status CvMat::Service::transferMat(::grpc::ServerContext* context, const ::MatInput* request, ::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

