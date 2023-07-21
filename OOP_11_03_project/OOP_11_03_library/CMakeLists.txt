cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(OOP_11_03_library)

set(SOURCES_LIB leaver.h leaver.cpp)

add_library(OOP_11_03_library SHARED ${SOURCES_LIB})