cmake_minimum_required(VERSION 3.5)

project(Guess_Number LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Guess_Number main.cpp)

install(TARGETS Guess_Number
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
