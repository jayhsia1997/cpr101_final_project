cmake_minimum_required(VERSION 3.30)
project(cpr101_final_project C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(
    tokenize
    tokenizing.c
    tokenizingMain.c
)
