cmake_minimum_required(VERSION 3.5)
project(studentSystem)

file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.c")

add_executable(myapp main.c ${SRC_FILES})

target_include_directories(myapp PUBLIC include)