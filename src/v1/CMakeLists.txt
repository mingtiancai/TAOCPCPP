cmake_minimum_required(VERSION 3.10)

add_library(v1 v1.cpp)

target_include_directories(v1 PUBLIC
                          "${PROJECT_SOURCE_DIR}/src/base"
                          )