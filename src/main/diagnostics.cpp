#include "diagnostics.h"

#include <filesystem>

namespace fs = std::filesystem;

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

    YamlParser main_yaml_parser;

    main_yaml_parser.parseYaml(YAML_TEST_PATH);

    return 0;
}
