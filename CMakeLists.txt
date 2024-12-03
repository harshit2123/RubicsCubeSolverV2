cmake_minimum_required(VERSION 3.30)
project(RubicsCubeV2)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubicsCubeV2 main.cpp
        Modal/RubiksCube.cpp
        Modal/RubiksCube.h
        Modal/RubiksCube3dArray.cpp
        Modal/RubiksCube1dArray.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
)
