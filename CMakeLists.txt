cmake_minimum_required(VERSION 3.29)
project(POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(POO main.cpp)
add_executable(Lab_3 Lab_03/main.cpp
        Lab_03/punct.cpp
        Lab_03/triunghi.cpp)
