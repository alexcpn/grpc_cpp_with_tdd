#include "CvMatServer.h"

using namespace grpc;
using namespace std;

// Wrapper for starting the server
int main(int argc, char *argv[])
{

  string server_address("0.0.0.0:17007");
  cout << "Going to Start the Server" <<endl;
  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  CvMatImpl cvMatgrpc;
  builder.RegisterService(&cvMatgrpc);
  std::unique_ptr<Server> server(builder.BuildAndStart());
  cout << "Server listening on {}" << server_address <<endl;
  server->Wait();
  return 0;
}
