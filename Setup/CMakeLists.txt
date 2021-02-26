cmake_minimum_required(VERSION 3.17)
project(Setup)

set(CMAKE_CXX_STANDARD 14)

add_executable(Setup main.cpp BuildCams.cpp BuildCams.h)