# chip8mulator::CMakeList.txt : CMake project for chip8mulator tests, include tests source
# here
#
cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(../src)

set(TEST_SRC
)

add_executable(test_ecs ${TEST_SRC} test_main.cpp)
