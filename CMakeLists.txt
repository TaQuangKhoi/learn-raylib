cmake_minimum_required(VERSION 3.29)
project(learn_raylib)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn_raylib main.cpp)

find_package(raylib)
target_link_libraries(learn_raylib raylib)