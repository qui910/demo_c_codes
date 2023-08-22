cmake_minimum_required(VERSION 3.17)
project(demo_c_codes C)

set(CMAKE_C_STANDARD 90)
set(SOURCES main.c
        learn_c/chap01/list0101.c
        )

add_executable(demo_codes ${SOURCES})
target_include_directories(demo_codes
        PRIVATE
        ${PROJECT_SOURCE_DIR}/learn_c/chap01/
        )