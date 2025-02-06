cmake_minimum_required(VERSION 3.10)

# Project Name
project(HowToClass)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Executable
add_executable(HowToClass main.cpp person.cpp)
