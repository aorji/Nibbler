cmake_minimum_required(VERSION 3.13)
project(Nibbler)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(Nibbler
        inc/Barrier.hpp
        inc/Food.hpp
        inc/Score.hpp
        inc/Snake.hpp
        src/Barrier.cpp
        src/Food.cpp
        src/main.cpp
        src/Score.cpp
        src/Snake.cpp src/Game.cpp inc/Game.hpp)
