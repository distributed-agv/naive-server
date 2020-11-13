#include "guide_service_impl.h"
#include "util.h"
#include <string>
#include <utility>
#include <memory>
#include <iostream>
#include <vector>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/security/server_credentials.h>

int main() {
  int row_num = 5;
  int col_num = 5;
  std::vector<IntPair> starts = {IntPair(0, 0), IntPair(0, 4)};
  std::vector<IntPair> goals = {IntPair(4, 4), IntPair(4, 0)};
  GuideServiceImpl service(row_num, col_num, starts, goals);
  std::string server_addr = "0.0.0.0:50051";
  grpc::ServerBuilder builder;
  std::unique_ptr<grpc::Server> server;

  builder.AddListeningPort(server_addr, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  server = builder.BuildAndStart();

  std::cout << "Server listening on " << server_addr << std::endl;
  server->Wait();

  return 0;
}
