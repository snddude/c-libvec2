cmake_minimum_required(VERSION 3.31)
project(vec2)

add_library(${PROJECT_NAME} STATIC src/vec2.c)
target_include_directories(${PROJECT_NAME} PUBLIC include)
