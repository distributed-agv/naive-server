cmake_minimum_required(VERSION 3.13)

project(agv C CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(Threads REQUIRED)
find_package(gRPC CONFIG REQUIRED)

add_executable(server main_server.cc guide_service_impl.cc util.cc guide.grpc.pb.cc guide.pb.cc)
add_executable(client main_client.cc guide.grpc.pb.cc guide.pb.cc)

target_link_libraries(server gRPC::grpc++)
target_link_libraries(server Threads::Threads)
target_link_libraries(client gRPC::grpc++)
