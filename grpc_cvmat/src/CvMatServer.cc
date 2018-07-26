#include "CvMatServer.h"

using namespace std;
using namespace grpc;


::grpc::Status CvMatImpl::transferMat(::grpc::ServerContext *context,
                                      const ::MatInput *request, ::Response *response)
{

  cout << "Got the call from Client Transfer Mat" << endl;
  response->set_response(0);
  return ::grpc::Status::OK;
}

