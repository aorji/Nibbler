cmake_minimum_required(VERSION 3.13)
project(nibbler_)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(nibbler_
        inc/Barrier.hpp
        inc/Food.hpp
        inc/Game.hpp
        inc/IObject.hpp
        inc/Score.hpp
        inc/Snake.hpp
        src/Barrier.cpp
        src/Food.cpp
        src/Game.cpp
        src/IObject.cpp
        src/main.cpp
        src/Score.cpp
        src/Snake.cpp)
