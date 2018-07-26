#ifndef CvMatServer_2eproto__INCLUDED
#define CvMatServer_2eproto__INCLUDED
#include "cvmat.grpc.pb.h"
#include <grpc++/grpc++.h>

#endif

class CvMatImpl final : public CvMat::Service {
    public:
        ::grpc::Status transferMat(::grpc::ServerContext* context,
         const ::MatInput* request, ::Response* response) override;


};