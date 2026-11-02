# Project CMake Lists

cmake_minimum_required(VERSION 3.28)
project("little_learners"
        VERSION 0.0.1
        DESCRIPTION "A game project to help children learn new concepts through games and activities."
)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # Enforce strict standard compliance with the compiler

# Set output to a common /bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set Additional Compiler warnings to be caught
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Include Subdirectories/Projects
add_subdirectory(engine)
add_subdirectory(editor)