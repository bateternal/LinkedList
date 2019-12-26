cmake_minimum_required(VERSION 3.0.0)
project(linkedlist)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(include)
set(SOURCES main.cpp)

add_executable(LinkedList ${SOURCES})
include( CTest )
add_subdirectory(tests)


#enable_testing()
include( CTest )
