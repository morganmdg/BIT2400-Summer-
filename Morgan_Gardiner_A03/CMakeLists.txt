cmake_minimum_required(VERSION 3.28)
project(Morgan_Gardiner_A03)

set(CMAKE_CXX_STANDARD 17)

add_executable(Morgan_Gardiner_A03 main.cpp
        Person.h
        Person.cpp
        Student.h
        Student.cpp
        Faculty.h
        Faculty.h
        Faculty.cpp
        FullTime.h
        FullTime.cpp
        PartTime.h
        PartTime.cpp
        UnderGrad.h
        UnderGrad.cpp
        Graduate.h
        Graduate.cpp)
