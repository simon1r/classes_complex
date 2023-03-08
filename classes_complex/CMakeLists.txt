cmake_minimum_required(VERSION 3.5)

project(classes_complex LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(classes_complex main.cpp)

install(TARGETS classes_complex
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
