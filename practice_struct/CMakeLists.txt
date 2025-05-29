cmake_minimum_required(VERSION 3.10)
project(Practice_struct)
add_executable(student src/student.c main.c)

target_include_directories(student PUBLIC
    $(CMAKE_CURRENT_SOURCE_DIR)/src
)
