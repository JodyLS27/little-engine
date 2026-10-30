# Engine CMake Lists

# Used to mark this as a Static Library: .lib
add_library(engine STATIC)
target_include_directories(engine PUBLIC Include)

# The CMakeLists has the target_sources()
add_subdirectory(Src)

# Link SFML
target_link_libraries(engine PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
    SFML::Audio
)
