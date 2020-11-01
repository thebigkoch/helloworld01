cmake_minimum_required(VERSION 3.17)

project(math_static)
add_library(math_static STATIC math_static.cpp)
target_include_directories(math_static PUBLIC include)
