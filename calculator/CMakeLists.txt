cmake_minimum_required(VERSION 3.16)
project(my_qt_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(my_qt_project main.cpp)
target_link_libraries(my_qt_project Qt5::Widgets)
