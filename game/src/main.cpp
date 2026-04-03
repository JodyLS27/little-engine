#include <iostream>

#include "core/app.hpp"

int main()
{
    std::cout << "Hello World! \n";
    std::cout << "Welcome to the Little-Learners Game! \n\n";
    std::cout << "--------------------------------------------\n";
    LL_LOG_INFO(" Lets log a quick message  ");

    LL_LOG_WARNING("Engine Initialization starting");
    engine::core::App engine_app;

    LL_LOG_WARNING("Engine SubSystems Initializing");
    engine_app.initialize();

    LL_LOG_WARNING("Engine main loop Initializing");
    engine_app.run();

    LL_LOG_WARNING("Engine SubSystems Ending");
    engine_app.shutdown();

    std::cout << "--------------------------------------------\n";
    return 0;
}
