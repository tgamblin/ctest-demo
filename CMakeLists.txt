project(muster)
cmake_minimum_required(VERSION 2.8)

add_executable(test_demo test.c)


enable_testing()
add_test(usage_test test_demo)
set_tests_properties(usage_test PROPERTIES WILL_FAIL TRUE)

add_test(success_test test_demo 0)
set_tests_properties(success_test PROPERTIES PASS_REGULAR_EXPRESSION "SUCCESS")

add_test(fail_test test_demo 1)
set_tests_properties(fail_test PROPERTIES WILL_FAIL TRUE)

add_test(fail_test_output test_demo 1)
set_tests_properties(fail_test_output PROPERTIES PASS_REGULAR_EXPRESSION "FAIL")
