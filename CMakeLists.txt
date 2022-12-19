cmake_minimum_required(VERSION 3.12)

project(ISR6Labwork)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib)

add_executable(main main.cpp lib/cipher.h)

enable_testing()
add_subdirectory(tests)