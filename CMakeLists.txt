cmake_minimum_required(VERSION 3.13)
project(nibbler_)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(nibbler_
        inc/Game.hpp
        inc/Snake.hpp
        src/Game.cpp
        src/main.cpp
        src/Snake.cpp)
