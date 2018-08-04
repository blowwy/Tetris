cmake_minimum_required(VERSION 3.12)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(tetris main.cpp Field.cpp Field.h Block.cpp Block.h Coordinates.cpp Coordinates.h BlockType.h MoveType.h)