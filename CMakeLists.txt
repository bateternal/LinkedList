cmake_minimum_required(VERSION 3.0.0)
project(linkedlist)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(include)
set(SOURCES main.cpp)

add_executable(LinkedList ${SOURCES})
add_executable(run_test tests/test.cpp)
add_test(runtest run_test)

enable_testing()

target_link_libraries(run_test ${GTEST_LIBRARIES} pthread)