#include "Windowing/Window.hpp"

#include "core/defines.hpp"

engine::windowing::Window::Window(const unsigned int width, const unsigned int height, const std::string& window_name)
    : m_width(width), m_height(height), m_window_name(window_name)
{
    // Setting up the window object when the class is initialized to keep it seperate from the initialize() function
    //m_window = std::make_unique<sf::Window>(sf::VideoMode({m_width, m_height}), window_name);
}

engine::windowing::Window::~Window()
{
    // A silent catch if there is an error to make sure the destruction order is correct.
    Shutdown();
}

void engine::windowing::Window::Initialize()
{
    // TODO: window.initialize() just setups up the renderer which draws stuff to the screen as it is the render manager.
    LL_LOG_INFO("Window Initialize Complete");
}

void engine::windowing::Window::Shutdown()
{
    // Reset pointers
    //m_window.reset();
    LL_LOG_WARNING("Window Shutdown Complete");
}

// ===== HELPER FUNCTIONS =====

bool engine::windowing::Window::is_open()
{
    // NOTE: isOpen is an SFML Window Function, Create Agnostic open check, Platform Specific
    return m_window->isOpen();
}
