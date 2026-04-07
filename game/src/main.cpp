#include <iostream>

#include "core/app.hpp"

int main()
{
    std::cout << "Hello World! \n";
    std::cout << "Welcome to the Little-Learners Game! \n\n";
    std::cout << "--------------------------------------------\n";

    engine::core::App engine_app;

    if (!engine_app.initialize())
    {
        LL_LOG_ERROR("ENGINE::CORE::APP::INITIALIZE: Returned false, check the log for more details");
        return -1;
    }

    engine_app.run();

    engine_app.shutdown();
    return 0;
}
