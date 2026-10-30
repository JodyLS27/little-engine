//
// Created by Jody Stocks on 4/3/26.
// Description: Holds the main game loop and represents the engine application lifecyle.
//

#include "../../include/Runtime/app.hpp"

engine::core::App::App()
{
    LL_LOG_INFO("Engine Application construction.");
}

engine::core::App::~App() { }

bool engine::core::App::initialize()
{
    // TODO: Pass these through from the editor !
    m_window = std::make_unique<rendering::Window>(800, 600, "Little Learners");
    m_window->initialize();
    LL_LOG_INFO("Engine Application initialize - Window:Complete");

    if (!m_window->is_open())
    {
        LL_LOG_ERROR("ENGINE::CORE::APP:INITIALIZE: The window is NOT Open");
        return false;
    }

    LL_LOG_INFO("Engine Application initialized");

    return true;
}

void engine::core::App::run()
{
    LL_LOG_INFO("engine main loop running");
    while (m_window->is_open())
    {
        // TODO: Setup pollEvents
        // TODO: Do Sprite Drawing
        // TODO: Do window clear
        // TODO: Do Window Draw
    }

    LL_LOG_INFO("engine main loop ended");
}

void engine::core::App::shutdown()
{
    LL_LOG_INFO("engine subsystems shutting down!");
    m_window->shutdown();
    m_window.reset();
}


