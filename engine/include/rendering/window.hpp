//
// Created by Jody Stocks on 4/5/26.
// Description: Used to handle the main window
//
#pragma once

#include <memory>


namespace engine::rendering
{
    class Window
    {
    public:
        // Constructor is used to set up the primary window
        Window(unsigned int width, unsigned int height, const std::string& window_name);
        ~Window();

        // Initialize any windowing sub-systems
        void initialize();

        // Shutdown any windowing sub-systems
        void shutdown();

        // ==== Helper Functions ====

        sf::Window& get_window() { return m_window; }

    private:
        unsigned int m_width{};
        unsigned int m_height{};
        std::unique_ptr<sf::Window> m_window{};
    };
}
