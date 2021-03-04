cmake_minimum_required(VERSION 3.0.0)
project(basic_sort VERSION 0.1.0)


# aux_source_directory(./01-Selection-Sort DIR_SRCS)
# aux_source_directory(./02-Selection-Sort-Using-Template DIR_SRCS)
# aux_source_directory(./03-Selection-Sort-Generate-Test-Cases DIR_SRCS)
# aux_source_directory(./04-Selection-Sort-Detect-Performance DIR_SRCS)
aux_source_directory(./05-Insertion-Sort DIR_SRCS)
#aux_source_directory(./stl DIR_SRCS)

# 指定可执行程序的位置
set (EXECUTABLE_OUTPUT_PATH ../sort_exe)

# 生成可执行程序
# add_executable(basic_sort main.cpp)
add_executable(sort ${DIR_SRCS})