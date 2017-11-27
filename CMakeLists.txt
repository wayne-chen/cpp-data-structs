cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(cpp-data-structs)

include_directories(include)

set(SOURCES
    include/array.hpp
    include/filter.hpp
    include/heap.hpp
    include/insertionsort.hpp
    include/linkedlist.hpp
    include/queue.hpp
    include/stack.hpp
    include/tree.hpp
    include/vector.hpp
    src/main.cpp
)

add_executable(cpp-data-structs ${SOURCES})

set_property(TARGET cpp-data-structs PROPERTY CXX_STANDARD 14)
