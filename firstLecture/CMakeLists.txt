cmake_minimum_required(VERSION 3.10)

# Project Name
project(3classes)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Executable
add_executable(3classes main.cpp Dato.cpp Person.cpp Bil.cpp)
