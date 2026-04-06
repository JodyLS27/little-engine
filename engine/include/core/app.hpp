//
// Created by jodystocks on 4/3/26.
//

#pragma once

#include <memory>
#include "core/defines.hpp" // Defines are here so any project including engine/ gets the Requried macros
#include "rendering/window.hpp"

namespace engine::core
{
    class App
    {
    public:
        App();
        ~App();

        // Setup any sub systems and internal classes
        bool initialize();

        // Main engine loop that runs
        void run();

        // used to destroy any objects and or subsystems
        void shutdown();

    private:
        std::unique_ptr<rendering::Window> m_window;
    };
}
