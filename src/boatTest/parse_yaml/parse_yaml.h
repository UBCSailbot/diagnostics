#ifndef PARSE_YAML_H_
#define PARSE_YAML_H_

/* Include Files */
#include <fstream>
#include <ios>
#include <iostream>
#include <ryml.hpp>
#include <ryml_std.hpp>
#include <sstream>

#include "boatTest_common.h"

/* Defines */
#define YAML_CONFIG_FILE_PATH TEST_CONFIG_PATH

/* Yaml File Parser*/
class YamlParser
{
public:
    std::vector<BoatTest> parseYaml();
};

#endif
