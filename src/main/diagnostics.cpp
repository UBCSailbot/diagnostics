#include <iostream>

#include "commonUI.h"

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;

    std::cout << "Welcome to UBC Sailbot Diagnostics! The C++ version" << std::endl;

    CommonUI myObj;

    int width = myObj.getTerminalWidthPub();

    std::cout << "Terminal width is: " << width << std::endl;

    return 0;
}
