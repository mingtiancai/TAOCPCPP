cmake_minimum_required(VERSION 3.16)

add_subdirectory(base)
add_subdirectory(v1)
add_subdirectory(testv1)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_RELEASE_OUTPUT_BIN_DIR})

add_executable(TAOCP main.cpp)
target_link_libraries(TAOCP PUBLIC v1) 
 
target_include_directories(TAOCP PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
