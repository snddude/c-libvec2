cmake_minimum_required(VERSION 3.31)
project(vec2)

set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

add_library(${PROJECT_NAME} STATIC src/vec2.c)
target_include_directories(${PROJECT_NAME} PUBLIC include)

if(${BUILD_TESTS})
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    add_subdirectory(external/googletest)
    enable_testing()

    file(GLOB TEST_SOURCES test/*.cpp)
    add_executable(tests ${TEST_SOURCES})

    target_link_libraries(tests PRIVATE vec2 GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif()
