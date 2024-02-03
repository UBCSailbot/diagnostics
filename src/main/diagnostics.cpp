#include "diagnostics.h"

App::App()
{
    CommonUI *   new_ui          = new CommonUI();
    YamlParser * new_yaml_parser = new YamlParser();

    ui          = new_ui;
    yaml_parser = new_yaml_parser;
}

int App::appGetUserSelection(int * selection)
{
    while (true) {
        std::string user_input;
        std::cout << ">";
        getline(std::cin, user_input);

        try {
            if (user_input.compare("q") == 0) {
                *selection = -1;
            } else {
                *selection = stoi(user_input);
            }
            return 0;
        } catch (std::invalid_argument const& ex) {
            std::cout << "Diagnosics: " << ex.what() << std::endl;
        }
    }


}

App::~App()
{
    delete ui;
    delete yaml_parser;
}

int main(int argc, char ** argv)
{
    (void)argc;
    (void)argv;

    int status;
    App diagnostics_app;

    while (true) {
        int user_select;
        status = diagnostics_app.appGetUserSelection(&user_select);
        if (status) {
            std::cout << "Error in parsing user input. Exiting." << std::endl;
        }

        if (user_select < 0) {
            break;
        } else {
            std::cout << "Option " << user_select << " chosen." << std::endl;
        }
    }

    return 0;
}
