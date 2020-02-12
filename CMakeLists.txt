# CMake for the Image stitching algorithm
cmake_minimum_required(VERSION 3.10)

project(PhotoOrganiser VERSION 1.0.0)

# Compile with C++17 (filesystem)
set(CMAKE_CXX_STANDARD 17)

message(STATUS "Adding the src dir")

# Add all directories with code here
include_directories(src)

# Compilation option to show as much debug info as possible
add_compile_options(-Wall -Wextra -Wpedantic)

# cuda_add_executable()
add_executable("${PROJECT_NAME}" src/main.cpp src/imagesorter.cpp)
target_link_libraries("${PROJECT_NAME}" stdc++fs)
