cmake_minimum_required(VERSION 3.12)
project(Tetris)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)

set(SOURCE main.cpp mainwindow.cpp Images.cpp Block.cpp Field.cpp Coordinates.cpp)
set(HEADER mainwindow.h Images.cpp DirectionType.h BlockType.h MoveType.h Field.h Coordinates.h)

add_executable(Tetris main.cpp Block.cpp Field.cpp mainwindow.cpp Images.cpp
        MainWidget.cpp BlockType.cpp DirectionType.cpp Coordinates.cpp)

qt5_use_modules(Tetris Widgets)

