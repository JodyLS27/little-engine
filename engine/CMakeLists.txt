# Engine CMake Lists

# Used to mark this as a Static Library: .lib
add_library(engine STATIC)
target_include_directories(engine PUBLIC include)

# The CMakeLists has the target_sources()
add_subdirectory(src)