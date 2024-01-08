#include "diagnostics.h"

#include <iostream>

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;

    base_elements.printDiv();
    std::cout << "Welcome to UBC Sailbot Diagnostics! The C++ version" << std::endl;
    base_elements.printDiv();

    return 0;
}
