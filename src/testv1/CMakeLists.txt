cmake_minimum_required(VERSION 3.16)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_RELEASE_OUTPUT_BIN_DIR})

include_directories(${PROJECT_RELEASE_OUTPUT_SRC_DIR}/v1)

add_executable(testEuclidAlgorithm testEuclidAlgorithm.cpp)
target_link_libraries(testEuclidAlgorithm PUBLIC v1 gtest pthread)
