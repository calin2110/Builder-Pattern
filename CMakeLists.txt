cmake_minimum_required(VERSION 3.17)
project(builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder main.cpp Item.cpp Item.h ItemBuilder.cpp ItemBuilder.h FluentBuilder.cpp FluentBuilder.h)