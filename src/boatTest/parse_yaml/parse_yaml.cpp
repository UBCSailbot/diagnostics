#include "parse_yaml.h"

#include <iomanip>

std::string readFile(const char * file_path)
{
    std::ifstream in_file(file_path, std::ios::in | std::ios::binary);

    if (!in_file) {
        std::cerr << "Could not open file: " << file_path << std::endl;
        throw std::ifstream::failure("ERROR: ifstream could not open file");
    }

    std::stringstream file_buffer;
    file_buffer << in_file.rdbuf();

    return file_buffer.str();
}

std::vector<BoatTest> YamlParser::parseYaml(const char * yaml_file_path)
{
    std::vector<BoatTest> tests;

    std::string yaml_contents = readFile(yaml_file_path);

    ryml::Tree    tree = ryml::parse_in_place(ryml::to_substr(yaml_contents));
    ryml::NodeRef foo  = tree["foo"];
    for (ryml::NodeRef const & child : foo.children()) {
        std::cout << "key: " << child.key() << " val: " << child.val() << std::endl;
    }

    ryml::NodeRef array = tree["matrix"]["array"];
    for (ryml::NodeRef const & child : array.children()) {
        double val;
        child >> val;
        std::cout << "float val: " << std::setprecision(18) << val << std::endl;
    }

    return tests;
}
