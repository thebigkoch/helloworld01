cmake_minimum_required(VERSION 3.17)

project(math_dynamic)
add_library(math_dynamic SHARED math_dynamic.cpp)

target_include_directories(math_dynamic PUBLIC include)

target_link_libraries(math_dynamic math_static)