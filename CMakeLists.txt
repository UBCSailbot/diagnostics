# Top level CMake file for entire Diagnostics app

# Set CMake version and create project
cmake_minimum_required(VERSION 3.22)
project(diagnostics)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 20)

# Import rapidYaml
find_package(ryml REQUIRED)

# Add source files
add_subdirectory(config)
add_subdirectory(src)
