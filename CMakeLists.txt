cmake_minimum_required(VERSION 3.10)
project(leetcodeWithCpp)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(leetcodeWithCpp
        main.cpp
        Solution.cpp
        Solution.h)
