#include <grpc++/grpc++.h>
#include <gtest/gtest.h>
#include <thread>
#include "../src/CvMatServer.h"
using namespace grpc;
using namespace std;

namespace
{

class CvMatServerTest : public ::testing::Test
{

  protected:
    ::grpc::string target = "0.0.0.0:17007";
    CvMatServerTest() {}

    virtual ~CvMatServerTest() {}

    virtual void SetUp() {}

    virtual void TearDown() {}

    // Objects declared here can be used by all tests in the test case for Foo.
};

// Test Basic Server Test
TEST_F(CvMatServerTest, Inttegration_TestServerBasic)
{
    std::unique_ptr<CvMat::Stub> stub_;

    std::shared_ptr<grpc::Channel> channel =
        grpc::CreateChannel(target, grpc::InsecureChannelCredentials());
    stub_ = CvMat::NewStub(channel);

    Response response;
    ClientContext context;
    MatInput parameter;
    Status status = stub_->transferMat(&context, parameter, &response);
    ASSERT_TRUE(status.ok());
    cout << "detectObject OK" << endl;
}

void RunServer(string server_address)
{

    cout << "Going to Start the Server" << endl;
    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    CvMatImpl cvMatgrpc;
    builder.RegisterService(&cvMatgrpc);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    cout << "Server listening on {}" << server_address << endl;
    server->Wait();
}


} // end namespace

int main(int argc, char **argv)
{
    cout << "Going to Run all tests " << endl;
    auto startGRPCServer = [](string k) { RunServer(k); };
    string server_address("0.0.0.0:17007");
    thread t1(startGRPCServer, server_address);
    this_thread::sleep_for(chrono::milliseconds(1000));
    ::testing::InitGoogleTest(&argc, argv);
    int out = RUN_ALL_TESTS();
    t1.detach();
    return out;
}