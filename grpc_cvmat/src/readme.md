 protoc  --cpp_out=. cvmat.prot
  protoc --grpc_out=. --plugin=protoc-gen-grpc=`whichgrpc_cpp_plugin` cvmat.proto