/* Include files */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

#include <ryml_std.hpp>
#include <ryml.hpp>
#include "parse_yaml.h"

/* Functions */

int main()
{
    std::cout << "UBC Sailbot Diagnostics App" << std::endl;
    std::cout << "Instructions for use can be found on https://ubcsailbot.atlassian.net/l/cp/mRm7BF1k" << std::endl;
    std::string contents = readFile(YAML_TEST_PATH);
    std::cout << contents << std::endl;
    std::cout << "------------------------------------" << std::endl;
    ryml::Tree tree = ryml::parse_in_place(ryml::to_substr(contents));
    ryml::NodeRef foo = tree["foo"];
    for (ryml::NodeRef const& child : foo.children()) {
        std::cout << "key: " << child.key() << " val: " << child.val() << std::endl;
    }

    ryml::NodeRef array = tree["matrix"]["array"];
    for (ryml::NodeRef const& child : array.children()) {
        double val;
        child >> val;
        std::cout << "float val: " << std::setprecision (18) << val << std::endl;
    }
    return 0;
}
