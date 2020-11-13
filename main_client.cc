#include "guide.grpc.pb.h"
#include <iostream>
#include <string>
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

int main() {
  std::string server_addr = "localhost:50051";
  std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(server_addr,
      grpc::InsecureChannelCredentials());
  std::unique_ptr<Guide::Stub> stub = Guide::NewStub(channel);

  while (true) {
    grpc::ClientContext context;
    grpc::Status status;
    CarPosition car_position;
    Step step;
    
    int car_id, row_idx, col_idx;
    std::cin >> car_id >> row_idx >> col_idx;
    car_position.set_car_id(car_id);
    car_position.set_row_idx(row_idx);
    car_position.set_col_idx(col_idx);

    status = stub->GetNextStep(&context, car_position, &step);

    if (status.ok())
      std::cout << step.step_code() << std::endl;
    else
      std::cout << status.error_message() << std::endl;
  }

  return 0;
}
