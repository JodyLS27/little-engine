# Engine CMake Lists

# Include FetchContent module for managing external dependencies
include(FetchContent)

# Used to mark this as a Static Library: .lib
add_library(engine STATIC)
target_include_directories(engine PUBLIC include)

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

FetchContent_MakeAvailable(glfw)

# The CMakeLists has the target_sources()
add_subdirectory(src)

# Link SFML
target_link_libraries(engine PRIVATE
    glfw
)
