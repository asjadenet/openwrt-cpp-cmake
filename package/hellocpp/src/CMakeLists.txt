cmake_minimum_required(VERSION 3.16)
project(hellocpp CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

INSTALL(TARGETS ${CMAKE_PROJECT_NAME} RUNTIME DESTINATION /usr/bin/)
