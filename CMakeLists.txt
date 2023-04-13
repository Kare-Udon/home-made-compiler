cmake_minimum_required(VERSION 3.24)
project(home_made_compiler)

set(CMAKE_CXX_STANDARD 14)

add_executable(home_made_compiler
        main.cpp wordlist.h)
