cmake_minimum_required(VERSION 3.8)
project(CrackingTheCodingInterview)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "Arrays and Files/Strings.cpp" "Arrays and Files/Strings.h")
add_executable(CrackingTheCodingInterview ${SOURCE_FILES})