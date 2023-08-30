cmake_minimum_required(VERSION 3.17)
project(demo_c_codes C)

set(CMAKE_C_STANDARD 90)
#set(SOURCES main.c learn1/learn1.c learn1/learn1.h learn2/learn2.c learn2/learn2.h learn3/learn3.c base_learn/unit1/unit1.c)
# unit1
set(SOURCES
        # base_learn/unit1/unit1.c
        # base_learn/unit2/unit2.c
        # base_learn/unit2/unit2.h
        # base_learn/unit3/unit3.h
        # base_learn/unit3/unit3.c
        base_learn/unit4/unit4.h
        base_learn/unit4/unit4.c)

add_executable(demo_c_codes ${SOURCES})
target_include_directories(demo_c_codes
        PRIVATE
        ${PROJECT_SOURCE_DIR}/learn_c/chap01/
        )

# 暂时先注释掉
#FIND_PACKAGE(PkgConfig REQUIRED)
#PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)
#INCLUDE_DIRECTORIES(${GTK3_INCLUDE_DIRS})
#LINK_DIRECTORIES(${GTK3_LIBRARY_DIRS})
#TARGET_LINK_LIBRARIES(demo_c_codes ${GTK3_LIBRARIES})
