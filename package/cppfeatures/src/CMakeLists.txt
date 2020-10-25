cmake_minimum_required(VERSION 3.16)
project(cppfeatures CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

INSTALL(TARGETS ${CMAKE_PROJECT_NAME} RUNTIME DESTINATION /usr/bin/)
