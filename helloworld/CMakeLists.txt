cmake_minimum_required(VERSION 3.5)
Project(helloworld)
add_executable(hello src/helloworld.c main.c)

target_include_directories(hello PUBLIC include)