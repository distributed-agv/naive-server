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
  std::shared_ptr<grpc::Channel> channel =
      grpc::CreateChannel(server_addr, grpc::InsecureChannelCredentials());
  std::unique_ptr<Guide::Stub> stub = Guide::NewStub(channel);

  while (true) {
    grpc::ClientContext context;
    grpc::Status status;
    CarState car_state;
    Step step;
    int car_id = 0;
    int cur_row_idx = 0;
    int cur_col_idx = 0;
    int goal_row_idx = 0;
    int goal_col_idx = 0;

    std::cin >> car_id >> cur_row_idx >> cur_col_idx
             >> goal_row_idx >> goal_col_idx;
    car_state.set_car_id(car_id);
    car_state.set_cur_row_idx(cur_row_idx);
    car_state.set_cur_col_idx(cur_col_idx);
    car_state.set_goal_row_idx(goal_row_idx);
    car_state.set_goal_col_idx(goal_col_idx);

    status = stub->GetNextStep(&context, car_state, &step);

    if (status.ok())
      std::cout << step.step_code() << std::endl;
    else
      std::cout << status.error_message() << std::endl;
  }

  return 0;
}
