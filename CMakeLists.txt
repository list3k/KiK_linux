CMake_minimum_required (VERSION 2.6)

project (KolkoIKrzyzyk)

add_executable(KolkoIKrzyzyk main.cpp MyGame.cpp MyGame.h)
add_definitions(-std=c++11 -lsfml-graphics -lsfml-window -lsfml-system)

