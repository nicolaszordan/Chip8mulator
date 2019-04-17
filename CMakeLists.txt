# CMakeList.txt : Top-level CMake project file, does global configuration
# and includes sub-projects.
#
cmake_minimum_required (VERSION 3.8)

project ("Chip8mulator")

# Include sub-projects.
add_subdirectory ("src")
