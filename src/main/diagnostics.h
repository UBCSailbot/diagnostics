#ifndef DIAGNOSTICS_H_
#define DIAGNOSTICS_H_

/* Include Files */
#include <iostream>
#include <unordered_map>
#include <vector>

#include "boatTest_common.h"
#include "commonUI.h"
#include "parse_yaml.h"

/* Classes */
class App
{
public:
    CommonUI *                          ui;
    YamlParser *                        yaml_parser;
    std::unordered_map<int, BoatTest *> test_map;

    int appStartup(App * diagnostics_app);
    int appGetTests(App * diagnostics_app, std::vector<BoatTest *> & test_list);
    int appOrganizeTest(App * diagnostics_app, std::vector<BoatTest *> & test_list);
    int appPrintMenu(App * diagnostics_app);
    int appGetUserSelection(int * selection);
    int appRunTest(App * diagnostics_app, int selected_test);
    int appShutdown(App * diagnostics_app);
};

#endif
