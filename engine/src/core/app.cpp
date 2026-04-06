//
// Created by Jody Stocks on 4/3/26.
// Description: Holds the main game loop and represents the engine application lifecyle.
//

#include "core/app.hpp"

engine::core::App::App()
{
    LL_LOG_INFO("Engine Application construction.");
}

engine::core::App::~App() { }

void engine::core::App::initialize()
{
    // TODO: Pass these through from the editor !
    m_window = std::make_unique<rendering::Window>(800, 600, "Little Learners");
    m_window->initialize();
    LL_LOG_INFO("Engine Application initialize - Window:Complete");

    LL_LOG_INFO("Engine Application initialized");
}

void engine::core::App::run()
{
    // TODO: Seeing as the app will own the window object, The window will get created here, in run
    // TODO: I need an `is_open()` function. (true, Open | false, closed)
    // TODO: window.initialize() just setups up the renderer which draws stuff to the screen as it is the render manager.
    // TODO: Not sure if it should live here or not, maybe it will live in window and get referenced in app ?
    LL_LOG_INFO("engine main loop Running");
}

void engine::core::App::shutdown()
{
    LL_LOG_INFO("engine subsystems shutting down!");
}


