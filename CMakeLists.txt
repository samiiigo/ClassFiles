cmake_minimum_required(VERSION 3.10)
project(ClassFiles)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/bin)

# Find all .cpp files in the src directory
file(GLOB SOURCES "src/*.cpp")
file(GLOB SOURCES "CS_I zyLAB/*.cpp")
file(GLOB SOURCES "CS_II zyLAB/*.cpp")
file(GLOB SOURCES "LAB_Files/*.cpp")
file(GLOB SOURCES "temp/*.cpp")

# Add an executable target with all source files
add_executable(ClassFiles ${SOURCES})