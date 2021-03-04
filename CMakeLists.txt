cmake_minimum_required(VERSION 3.17)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(03-Sorting-Advance)

add_executable(algorithm
        03-Sorting-Advance/02-Merge-Sort/InsertionSort.h
        03-Sorting-Advance/02-Merge-Sort/main.cpp
        03-Sorting-Advance/02-Merge-Sort/SortTestHelper.h)
