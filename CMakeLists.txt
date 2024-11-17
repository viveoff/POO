cmake_minimum_required(VERSION 3.29)
project(POO)

set(CMAKE_CXX_STANDARD 17)


add_executable(Lab_3 Lab_03/main.cpp
        Lab_03/punct.cpp
        Lab_03/triunghi.cpp)
add_executable(Lab_5 Lab_05/main.cpp
        Lab_05/punct.cpp
        Lab_05/triunghi.cpp)
add_executable(Student_Exemplu Lab_02/Student/main.cpp
        Lab_02/Student/Student.h
        Lab_02/Student/Student.cpp)
add_executable(Student Test/Student/main.cpp
        Test/Student/Student.h
        Test/Student/Student.cpp)
add_executable(Laptop Test/Laptop/main.cpp
        Test/Laptop/Laptop.h
        Test/Laptop/Laptop.cpp)
add_executable(Patrat Test/Patrat/main.cpp
        Test/Patrat/patrat.h
        Test/Patrat/patrat.cpp)
