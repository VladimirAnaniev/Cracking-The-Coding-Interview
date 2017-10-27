cmake_minimum_required(VERSION 3.8)
project(CrackingTheCodingInterview)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "Arrays and Strings/Strings.cpp" "Arrays and Strings/Strings.h" "Arrays and Strings/Matrices.cpp" "Arrays and Strings/Matrices.h")
add_executable(CrackingTheCodingInterview ${SOURCE_FILES})