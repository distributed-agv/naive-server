protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` guide.proto
protoc -I . --cpp_out=. guide.proto
python3 -m grpc_tools.protoc -I . --python_out=. --grpc_python_out=. guide.proto
