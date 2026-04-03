//
// Created by Jody Stocks on 4/3/26.
// Description: Holds the main game loop and represents the engine application lifecyle.
//

#include "core/app.hpp"

engine::core::App::App()
{
}

engine::core::App::~App()
{
}

void engine::core::App::initialize()
{
    LL_LOG_INFO("engine Application initialized!");
}

void engine::core::App::run()
{
    LL_LOG_INFO("engine main loop Running");
}

void engine::core::App::shutdown()
{
    LL_LOG_INFO("engine subsystems shutting down!");
}


