cmake_minimum_required(VERSION 3.10)

project("inari-tool")

include_directories(AFTER "${CMAKE_SOURCE_DIR}/third-party/include")

message(STATUS "CMAKE_SOURCE_DIR=${CMAKE_SOURCE_DIR}")

add_subdirectory("src")