cmake_minimum_required(VERSION 3.27)
project(letters)

set(CMAKE_CXX_STANDARD 17)

add_executable(letters main.cpp
        letters.cpp
        letters.h)
