cmake_minimum_required(VERSION 3.12)
project(Tetris)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)

add_executable(Tetris main.cpp mainwindow.h mainwindow.cpp)

qt5_use_modules(Tetris Widgets)

