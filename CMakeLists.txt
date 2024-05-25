cmake_minimum_required(VERSION 3.5)

project(untitled LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(source_file  employee.cpp main.cpp)
add_executable(untitled ${source_file})
