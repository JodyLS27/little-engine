#include "rendering/window.hpp"

engine::rendering::Window::Window(int width, int height, std::string_view window_name)
{
    m_width = width;
    m_height = height;
    m_window = std::make_unique<sf::Window>(sf::VideoMode(width, height), window_name);
}
