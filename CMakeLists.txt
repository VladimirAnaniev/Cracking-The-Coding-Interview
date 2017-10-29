cmake_minimum_required(VERSION 3.8)
project(CrackingTheCodingInterview)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "Arrays and Strings/Strings.cpp" "Arrays and Strings/Strings.h" "Arrays and Strings/Matrices.cpp" "Arrays and Strings/Matrices.h" LinkedLists/LinkedLists.cpp LinkedLists/LinkedLists.h "Stacks and Queues/Stacks/ThreeStacks.cpp" "Stacks and Queues/Stacks/ThreeStacks.h" "Stacks and Queues/Stacks/Stack.cpp" "Stacks and Queues/Stacks/Stack.h" "Stacks and Queues/Stacks/MinStack.cpp" "Stacks and Queues/Stacks/MinStack.h")
add_executable(CrackingTheCodingInterview ${SOURCE_FILES})