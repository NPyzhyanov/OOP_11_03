cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(OOP_11_03_project)

include_directories(OOP_11_03_library)

set(SOURCES_EXE main.cpp)
add_executable(OOP_11_03_project ${SOURCES_EXE})

add_subdirectory(OOP_11_03_library)
target_link_libraries(OOP_11_03_project OOP_11_03_library)
