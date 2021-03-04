cmake_minimum_required(VERSION 3.10)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(03-Sorting-Advance)

aux_source_directory(./02-Sorting-Basic/05-Insertion-Sort DIR_SRCS)

set(EXECUTABLE_OUTPUT_PATH ../output_exe)

add_executable(output ${DIR_SRCS})
