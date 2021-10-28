cmake_minimum_required(VERSION 3.2)
project(MPAGSCipher VERSION 0.1.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

set (CMAKE_CXX_STANDARD 14)

add_executable (CaesarCipher 
    CaesarCipher.cpp
    CaesarCipher/runCaesarCipher.cpp
    )

target_include_directories(CaesarCipher
    PRIVATE CaesarCipher
    )

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wfatal-errors -Wshadow -pedantic")

target_compile_features(CaesarCipher
    PRIVATE cxx_auto_type cxx_range_for cxx_uniform_initialization
)