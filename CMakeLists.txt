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

# Include FetchContent module for managing external dependencies
include(FetchContent)

# Set Additional Compiler warnings to be caught
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Prevent GLFW from building its Own Docs, Tests
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# Specity GLFW Version to be used
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG         3.5.1
    GIT_SHALLOW     TRUE
)

FetchContent_MakeAvalable(glfw)

# Include Subdirectories/Projects
add_subdirectory(engine)
add_subdirectory(editor)
add_subdirectory(game)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw)