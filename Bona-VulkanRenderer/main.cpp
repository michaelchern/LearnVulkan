﻿#include <iostream>
#include "application.h"

int main()
{
    LearnVulkan::Application app;

    try
    {
        app.run();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
