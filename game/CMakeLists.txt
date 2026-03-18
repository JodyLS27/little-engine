# Game CMakeLists

# Executable file
add_executable(game "src/main.cpp")

target_include_directories(game PRIVATE include)

# The CMakeLists has the target_sources()
add_subdirectory(src)

# Include the `engine` library
target_link_libraries(game PRIVATE engine)