cmake_minimum_required(VERSION 3.12)
project(Tetris)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)

set(SOURCE main.cpp mainwindow.cpp Images.cpp)
set(HEADER mainwindow.h Images.cpp)

add_executable(Tetris main.cpp mainwindow.h mainwindow.cpp Images.cpp)

qt5_use_modules(Tetris Widgets)

