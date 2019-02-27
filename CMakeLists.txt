project(muster)
cmake_minimum_required(VERSION 2.8)

add_executable(test test.c)


enable_testing()
add_test(usage_test test)
set_tests_properties(usage_test PROPERTIES WILL_FAIL TRUE)

add_test(success_test test 0)
set_tests_properties(success_test PROPERTIES PASS_REGULAR_EXPRESSION "SUCCESS")

add_test(fail_test test 1)
set_tests_properties(fail_test PROPERTIES WILL_FAIL TRUE)

add_test(fail_test_output test 1)
set_tests_properties(fail_test_output PROPERTIES PASS_REGULAR_EXPRESSION "FAIL")
