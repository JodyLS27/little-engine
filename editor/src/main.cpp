#include <iostream>

#include "Runtime/Engine.hpp"

int main()
{
    std::cout << "Hello World! \n";
    std::cout << "Welcome to: " << PROJECT_NAME << "\n";
    std::cout << "---------------------------------------\n\n";

    engine::runtime::Engine LittleEngine;

    if (!LittleEngine.Initialize())
    {
        LL_LOG_FATAL("ENGINE::CORE::APP::INITIALIZE: Returned false, check the log for more details");
        return -1;
    }

    LittleEngine.Run();

    LittleEngine.Shutdown();


    return 0;
}