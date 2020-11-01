cmake_minimum_required(VERSION 3.17)

add_subdirectory(math_static)

project(helloworld)
add_executable(helloworld helloworld.cpp)
target_link_libraries(helloworld math_static)