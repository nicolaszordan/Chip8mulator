# chip8mulator::CMakeList.txt : CMake project for chip8mulator, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CHIP8SRC
    "emulator/Iemulator.hpp"
    "emulator/chip8mulator.hpp"
    "emulator/chip8mulator.cpp"

    "emulator/cpu/operations.hpp"
    "emulator/cpu/registers.hpp"
)

# Add source to this project's executable.
add_executable(chip8mulator ${CHIP8SRC} "main.cpp")
