//
// Created by jodystocks on 4/3/26.
//

#pragma once

#include <memory>

# include "defines.hpp"
#include "rendering/window.hpp"

namespace engine::core
{
    class App
    {
    public:
        App();
        ~App();

        // Setup any sub systems and internal classes
        void initialize();

        // Main engine loop that runs
        void run();

        // used to destroy any objects and or subsystems
        void shutdown();

    private:
        std::unique_ptr<rendering::Window> m_window;
    };
}
