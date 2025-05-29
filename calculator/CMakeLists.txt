cmake_minimum_required(VERSION 3.5)
Project(calculate)
add_executable(calculator src/calculator.c src/io.c main.c)

target_include_directories(calculator PUBLIC include)