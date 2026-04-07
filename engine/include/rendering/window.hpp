//
// Created by Jody Stocks on 4/5/26.
// Description: Used to handle the main window
//
#pragma once

#include <memory>

// Forward declare
namespace sf
{
    class Window;
}

namespace engine::rendering
{
    class Window
    {
    public:
        /* Constructor is used to set up the primary window */
        Window(unsigned int width, unsigned int height, const std::string& window_name);
        ~Window();

        // Initialize any windowing sub-systems
        void initialize();

        // Shutdown any windowing sub-systems
        void shutdown();

        // ==== Helper Functions ====

        // Is the window object Open or not
        bool is_open();

    private:
        unsigned int m_width{};
        unsigned int m_height{};
        std::string m_window_name{};

        std::unique_ptr<sf::Window> m_window{};
    };
}
