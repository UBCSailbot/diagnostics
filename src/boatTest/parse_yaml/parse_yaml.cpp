#include "parse_yaml.h"

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

std::vector<BoatTest> parseYaml()
{
    std::vector<BoatTest> tests;

    std::string yaml_contents = readFile(TEST_CONFIG_PATH);

    return tests;
}
