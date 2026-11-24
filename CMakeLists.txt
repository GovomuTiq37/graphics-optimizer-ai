cmake_minimum_required(VERSION 3.16)
project(graphics-optimizer-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(graphicsoptimizerai
    src/main.cpp
    src/benchmark.cpp
    src/suggest.cpp
    src/apply.cpp
)

target_include_directories(graphicsoptimizerai PRIVATE include)

if(WIN32)
    target_link_libraries(graphicsoptimizerai PRIVATE userenv)
endif()
