cmake_minimum_required(VERSION 3.16)
project(cpp20features CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(${CMAKE_PROJECT_NAME} main.cpp set_contains.cpp set_contains.h)

INSTALL(TARGETS ${CMAKE_PROJECT_NAME} RUNTIME DESTINATION /usr/bin/)
