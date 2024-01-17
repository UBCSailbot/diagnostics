#include "diagnostics.h"

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;
    CommonUI base_elements;

    base_elements.printDiv();
    std::string title = "Welcome to UBC Sailbot Diagnostics!";
    base_elements.printCenter(title);
    base_elements.printDiv();

    std::unordered_map<std::string, std::string> commands;
    commands["ab"] = "Test AB";
    commands["cd"] = "Test CD";
    base_elements.printMenu(commands);

    return 0;
}
