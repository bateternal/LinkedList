add_executable(run_test test.cpp)
target_link_libraries(run_test ${GTEST_LIBRARIES} pthread)
add_test(runtest run_test)

add_executable(run_test2 test2.cpp)
target_link_libraries(run_test2 ${GTEST_LIBRARIES} pthread)
add_test(runtest2 run_test2)