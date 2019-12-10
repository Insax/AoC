cmake_minimum_required(VERSION 3.13)
project(AoC)

set(CMAKE_CXX_STANDARD 17)

add_executable(AoC main.cpp Module.cpp Module.h FuelRequirement.cpp FuelRequirement.h Rocket.cpp Rocket.h)