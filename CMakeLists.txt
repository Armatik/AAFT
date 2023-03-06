cmake_minimum_required(VERSION 3.24)
project(AAFT)

set(CMAKE_CXX_STANDARD 20)

add_executable(AAFT src/main.cpp src/client/get_answer_from_terminal.hpp)
