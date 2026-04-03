//
// Created by jodystocks on 4/3/26.
//

#pragma once

# include "defines.hpp"

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

        // used to destory any objects and or subsystems
        void shutdown();
    };
}
