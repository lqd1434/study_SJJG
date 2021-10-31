cmake_minimum_required(VERSION 3.20)
project(C)

set(CMAKE_C_STANDARD 99)

add_executable(main.c src/day_01.c src/day_02/day_02.c src/day_02/day_02.h)
