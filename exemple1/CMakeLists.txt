cmake_minimum_required(VERSION 3.29)
project(exemple1 C)

enable_testing()

set(CMAKE_C_STANDARD 11)

add_executable(exemple1 main.c)
add_executable(exemple1test1 test_add_one.c)
add_executable(exemple1test2 test_add_two.c)

add_test(NAME test_add_one COMMAND exemple1test1)
add_test(NAME test_add_two COMMAND exemple1test2)