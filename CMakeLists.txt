cmake_minimum_required(VERSION 3.20)
project(Rectangle)

set(CMAKE_CXX_STANDARD 14)

add_executable(Rectangle main.cpp Rectangle.cpp Rectangle.h RectangleInterface.h)
