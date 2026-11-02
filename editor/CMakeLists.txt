# Editor CMakeLists

# Executable applications
add_executable(editor src/main.cpp)


target_compile_definitions(editor PRIVATE 
    PROJECT_NAME="${PROJECT_NAME}"
)

# Add the `editor` and `engine` include directories
target_include_directories(editor PRIVATE include)

# engine has `target_include_directories` set to public, It will be pulled in here.
target_link_libraries(editor PRIVATE engine)

# The /src/CMakeLists has the target_sources()
add_subdirectory(src)