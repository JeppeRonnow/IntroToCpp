cmake_minimum_required(VERSION 3.1...3.28)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  Example
  VERSION 1.0
  LANGUAGES CXX)

add_executable(main main.cpp)
target_link_libraries(main)
