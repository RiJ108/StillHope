cmake_minimum_required(VERSION 3.18.0)
project(StillHope VERSION 1.0)

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
add_subdirectory("mef")

add_executable(StillHope_build_1.0 StillHope_build_1.0.cpp)

target_link_libraries(
    StillHope_build_1.0
    mef
    #libglfw3.a 
    #libgdi32.a
    #libfreetype.a
    #libpthread.a
    #glad
    )