add_executable(run_test test_add.cpp)
target_link_libraries(run_test ${GTEST_LIBRARIES} pthread)
add_test(test_add run_test)

add_executable(run_test2 test_get.cpp)
target_link_libraries(run_test2 ${GTEST_LIBRARIES} pthread)
add_test(test_get run_test2)

add_executable(run_test3 test_slice.cpp)
target_link_libraries(run_test3 ${GTEST_LIBRARIES} pthread)
add_test(test_slice run_test3)