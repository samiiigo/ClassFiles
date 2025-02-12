cmake_minimum_required(VERSION 3.30)
project(poker VERSION 0.1.0 LANGUAGES C CXX)

set(cmake_cxx_standard 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/samiiigo/ClassFiles.git
    GIT_TAG        masterx
)

FetchContent_MakeAvailable(fmt)

#add_library(poker poker.cpp)
add_executable(poker_test poker_test.cpp)
target_link_libraries(poker_test PRIVATE poker fmt::fmt)