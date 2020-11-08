cmake_minimum_required(VERSION 3.17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(math_static)
add_subdirectory(math_dynamic)

project(helloworld)
add_executable(helloworld helloworld.cpp)
target_link_libraries(helloworld math_static math_dynamic)
