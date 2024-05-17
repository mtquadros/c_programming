cmake_minimum_required(VERSION 3.22)

project(DataStructures)

set(CMAKE_C_STANDARD 99)

add_executable(slist.out main.c)
add_subdirectory(datastructures)
target_link_libraries(slist.out slink_list)