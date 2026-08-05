cmake_minimum_required(VERSION 3.31)
project(vec2)

add_library(${PROJECT_NAME} STATIC src/vec2.c)
target_include_directories(${PROJECT_NAME} PUBLIC include)

if(${BUILD_TESTS})
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    enable_testing()

    add_subdirectory(extern/googletest)

    add_executable(constants test/constants.cpp)
    target_link_libraries(constants PRIVATE vec2 GTest::gtest_main)
endif()
