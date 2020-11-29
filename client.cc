#include "guide.grpc.pb.h"
#include <iostream>
#include <memory>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

int main() {
  std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051",
      grpc::InsecureChannelCredentials());
  auto stub = Guide::NewStub(channel);

  while (true) {
    grpc::ClientContext context;
    Point point;
    Step step;
    int car, lastX, lastY,nowX,nowY,goalX,goalY;
    std::cin >> car >> lastX>>lastY>>nowX>>nowY>>goalX>>goalY;;
    point.set_car(car);
    point.set_lastx(lastX);
    point.set_lasty(lastY);
    point.set_nowx(nowX);
    point.set_nowy(nowY);
    point.set_goalx(goalX);
    point.set_goaly(goalY);
    
    grpc::Status status = stub->GetNextStep(&context, point, &step);
    std::cout << step.step_code() << std::endl;
  }

  return 0;
}
