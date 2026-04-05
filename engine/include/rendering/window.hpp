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
        // Constructor is used to setup the primary window
        Window(int width, int height, std::string_view window_name);
        ~Window();

        // Initialize any windowing sub-systems
        void initialize();

        // Shutdown any windowing sub-systems
        void shutdown();

        // ==== Helper Functions ====

        sf::Window& get_window();

    private:
        int m_width{};
        int m_height{};
        std::unique_ptr<sf::Window> m_window{};
    };
}
