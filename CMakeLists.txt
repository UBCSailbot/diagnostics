# Top level CMake file for entire Diagnostics app

# Set CMake version and create project
cmake_minimum_required(VERSION 3.22)
project(SailbotDiagnostics)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 20)

# Add source files
add_subdirectory(src)
