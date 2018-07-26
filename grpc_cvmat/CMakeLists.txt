cmake_minimum_required(VERSION 3.3)

project(CvMat)

find_package(Protobuf 3.2 REQUIRED)
if ( NOT (PROTOBUF_FOUND))
      message(FATAL_ERROR "Please Compile and Install ProtoBuffer -version 3 using GRPC C++: CMake will Exit")
endif()

set(CMAKE_BUILD_TYPE Debug)
MESSAGE(${PROTOBUF_PROTOC_EXECUTABLE})
get_filename_component(PROTO_PATH ${CMAKE_SOURCE_DIR} DIRECTORY)
set(PROTO_PATH ${PROTO_PATH}/grpc_cvmat/Interfaces)
set(GENERATED_PROTOBUF_PATH ${CMAKE_SOURCE_DIR}/generated)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(GENERATED_PROTOBUF_PATH "${CMAKE_SOURCE_DIR}/generated")

execute_process(COMMAND  which grpc_cpp_plugin OUTPUT_VARIABLE GRPC_CPP_PLUGIN)
string(STRIP ${GRPC_CPP_PLUGIN} GRPC_CPP_PLUGIN)


set(PROTO_LIST "cvmat")
set(PROTO_FILE_LIST ${PROTO_PATH} )
foreach(loop_var  RANGE 0)
        list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
        list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

        message("file name " ${PROTO_FILE_NAME})
        message("file path " ${PROTO_PATH})

        add_custom_command(
                OUTPUT  "${PROTO_FILE_NAME}.pb.cc"
                        "${PROTO_FILE_NAME}.pb.h"
                COMMAND ${PROTOBUF_PROTOC_EXECUTABLE}
                ARGS "--proto_path=${PROTO_PATH}"
                "--cpp_out=${GENERATED_PROTOBUF_PATH}"
                "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
        )

        list(APPEND GENERATED_FILES
                "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.pb.cc"
        )

        list(APPEND OUT_FILES ${PROTO_FILE_NAME}.pb.cc ${PROTO_FILE_NAME}.pb.h)
       

endforeach(loop_var) 
foreach(loop_var  RANGE 0)
        list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
        list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

        message("file name " ${PROTO_FILE_NAME})
        message("file path " ${PROTO_PATH})

        add_custom_command(
                OUTPUT   "${PROTO_FILE_NAME}.grpc.pb.h"
                        "${PROTO_FILE_NAME}.grpc.pb.cc"
                COMMAND ${PROTOBUF_PROTOC_EXECUTABLE}
                ARGS "--proto_path=${PROTO_PATH}"
                "--grpc_out=${GENERATED_PROTOBUF_PATH}"
                "--plugin=protoc-gen-grpc=${GRPC_CPP_PLUGIN}"
                "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
          )

        list(APPEND GENERATED_FILES
               "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.grpc.pb.cc"
        )

        list(APPEND OUT_FILES ${PROTO_FILE_NAME}.grpc.pb.cc ${PROTO_FILE_NAME}.grpc.pb.h)

endforeach(loop_var)

add_custom_target(vsphere_header ALL  DEPENDS ${OUT_FILES})

include_directories(${GENERATED_PROTOBUF_PATH})
include_directories(${Protobuf_INCLUDE})

link_libraries(grpc++_unsecure grpc protobuf pthread )

set_source_files_properties(${GENERATED_FILES}
                            PROPERTIES GENERATED TRUE)

add_executable(cvMat  src/CvMatServer.cc src/GRPCServerStart.cpp    ${GENERATED_FILES})
add_dependencies(cvMat vsphere_header )

# -------------For TESTS-----------------------------

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
                 ${CMAKE_BINARY_DIR}/googletest-build)

enable_testing()
add_executable(cvMatTests  test/CvMatServerTest.cc src/CvMatServer.cc ${GENERATED_FILES})
target_link_libraries(cvMatTests gtest gtest_main  )
add_test(AllTestsInCvMat cvMatTests)
# to get command line output 
# make CTEST_OUTPUT_ON_FAILURE=1 test, else check the testing folder