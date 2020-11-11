cmake_minimum_required(VERSION 3.18.0)
project(StillHope VERSION 1.1)

set(CMAKE_CXX_FLAGS "-std=c++0x")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

option(BUILD_SHARED_LIBS "True when building a shared library" True)

set_property(TARGET PROPERTY CXX_STANDARD 17)

add_library(
    glad
    lib/glad/glad.h
    lib/glad/glad.c
)

add_subdirectory("threadHandler")
add_subdirectory("shader")
add_subdirectory("entity")
add_subdirectory("generator")
add_subdirectory("window")
add_subdirectory("mef")

add_executable(StillHope_build_1.1 StillHope_build_1.1.cpp)

target_link_libraries(
    StillHope_build_1.1
    window
    #libglfw3.a 
    #libgdi32.a
    #libfreetype.a
    #glad
    )