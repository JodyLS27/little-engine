# Editor CMakeLists

# Executable applications
add_executable(editor "src/main.cpp")

# Add the `editor` and `engine` include directories
target_include_directories(editor PRIVATE include)

# The CMakeLists has the target_sources()
add_subdirectory(src)

# engine has `link_libs` set to public, It will be pulled in here.
target_link_libraries(editor PRIVATE engine)