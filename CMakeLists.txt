cmake_minimum_required(VERSION 3.13)
project(Symulowanie)

set(CMAKE_CXX_STANDARD 17)

add_executable(Symulowanie main.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})