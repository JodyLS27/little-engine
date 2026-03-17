# Project CMake Lists

cmake_minimum_required(VERSION 3.20)
project("little_learners" VERSION 0.0.1)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output to a common /bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include Subdirectories/Projects
add_subdirectory(engine)
add_subdirectory(editor)
add_subdirectory(game)