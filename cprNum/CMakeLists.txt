cmake_minimum_required(VERSION 3.10)
project(CprProject)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include headers directory
include_directories(headers)

# Define sources (all .cpp files in src)
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(CprProject ${SOURCES})
