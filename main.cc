#include "guide_impl.h"

#include <string>
#include <utility>
#include <memory>
#include <iostream>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/security/server_credentials.h>

int main() {
  GuideImpl service(5, 5);

  std::string server_address = "0.0.0.0:50051";
  grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server = builder.BuildAndStart();

  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();

  return 0;
}
