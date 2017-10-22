cmake_minimum_required(VERSION 3.8)
project(untitled5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp pryamcoord.cpp pryamcoord.h sphere.cpp sphere.h tcoord.cpp tcoord.h)
add_executable(untitled5 ${SOURCE_FILES} sphere.h)