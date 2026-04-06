#include "rendering/window.hpp"
#include <SFML/Window.hpp>

#include "core/defines.hpp"

engine::rendering::Window::Window(const unsigned int width, const unsigned int height, const std::string& window_name)
    : m_width(width), m_height(height), m_window_name(window_name)
{
    // Setting up the window object when the class is initialized to keep it seperate from the initialize() function
    m_window = std::make_unique<sf::Window>(sf::VideoMode({m_width, m_height}), window_name);
}

engine::rendering::Window::~Window()
{
    // A silent catch if there is an error to make sure the destruction order is correct.
    shutdown();
}

void engine::rendering::Window::initialize()
{
    LL_LOG_INFO("Window Initialize Complete");
}

void engine::rendering::Window::shutdown()
{
    LL_LOG_WARNING("Window Shutdown Compelte");
}

// ===== HELPER FUNCTIONS =====

bool engine::rendering::Window::is_open()
{
    return m_window->isOpen();
}
