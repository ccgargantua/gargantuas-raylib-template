cmake_minimum_required(VERSION 3.10)
project(raylib_project C)

set(CMAKE_C_STANDARD 99)

find_package(PkgConfig REQUIRED)
pkg_check_modules(RAYLIB REQUIRED raylib)

add_executable(raylib_project
        src/main.c
        src/rktest.c
)

target_include_directories(raylib_project PRIVATE ${RAYLIB_INCLUDE_DIRS}, lib)
target_link_libraries(raylib_project ${RAYLIB_LIBRARIES})
target_link_libraries(
        inih
        flecs
)

if(DEFINED TEST)
    add_compile_definitions(TEST)
endif()
