# Game CMakeLists

# Executable file
add_executable(game)

target_include_directories(game PRIVATE include)

# engine has `target_include_directories` set to public, It will be pulled in here.
target_link_libraries(game PRIVATE engine)

# The /src/CMakeLists has the target_sources()
add_subdirectory(src)