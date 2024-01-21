#include "diagnostics.h"

int App::appGetTests(App * diagnostics_app, int & test_list) {}

int App::appStartup(App * diagnostics_app)
{
    CommonUI *   new_ui          = new CommonUI();
    YamlParser * new_yaml_parser = new YamlParser();

    diagnostics_app->ui          = new_ui;
    diagnostics_app->yaml_parser = new_yaml_parser;

    return 0;
}

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;
    // CommonUI base_elements;

    // base_elements.printDiv();
    // std::string title = "Welcome to UBC Sailbot Diagnostics!";
    // base_elements.printCenter(title);
    // base_elements.printDiv();

    // std::unordered_map<std::string, std::string> commands;
    // commands["ab"] = "Test AB";
    // commands["cd"] = "Test CD";
    // base_elements.printMenu(commands);

    // YamlParser main_yaml_parser;

    // main_yaml_parser.parseYaml(YAML_TEST_PATH);

    return 0;
}
