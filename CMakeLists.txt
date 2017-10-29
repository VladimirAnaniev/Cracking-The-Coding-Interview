cmake_minimum_required(VERSION 3.8)
project(CrackingTheCodingInterview)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "Arrays and Strings/Strings.cpp" "Arrays and Strings/Strings.h" "Arrays and Strings/Matrices.cpp" "Arrays and Strings/Matrices.h" LinkedLists/LinkedLists.cpp LinkedLists/LinkedLists.h "Stacks and Queues/ThreeStacks.cpp" "Stacks and Queues/ThreeStacks.h" "Stacks and Queues/Stack.cpp" "Stacks and Queues/Stack.h" "Stacks and Queues/MinStack.cpp" "Stacks and Queues/MinStack.h" "Stacks and Queues/SetOfStacks.cpp" "Stacks and Queues/SetOfStacks.h" "Stacks and Queues/TowersOfHanoi.cpp" "Stacks and Queues/TowersOfHanoi.h")
add_executable(CrackingTheCodingInterview ${SOURCE_FILES})