cmake_minimum_required(VERSION 4.1)
project(C99Projetin C)
set(CMAKE_C_STANDARD 99)

file(GLOB SOURCES
        "*.c"
        "Functions-Procedures/*.c"
        "Scope-Params/*.c"
        "Recursion-Pointers/*.c"
)

add_executable(C99Projetin ${SOURCES})
