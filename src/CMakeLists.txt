# CMakeList.txt : CMake project for Chip8mulator, includes source and defines
# project specific logic.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable (chip8mulator "main.cpp")
