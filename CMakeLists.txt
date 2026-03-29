# Project CMake Lists

cmake_minimum_required(VERSION 3.28)
project("little_learners"
        VERSION 0.0.1
        DESCRIPTION "A game project to help children learn new concepts through games and activities."
)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output to a common /bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# fetch-content for the vcpkg manager
find_package(SFML 3 COMPONENTS Graphics Window Audio System CONFIG REQUIRED)

# Include Subdirectories/Projects
add_subdirectory(engine)
add_subdirectory(editor)
add_subdirectory(game)