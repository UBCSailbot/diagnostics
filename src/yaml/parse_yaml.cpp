/* Include files */
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

/* Functions */

/**
 * @brief Parses a file and returns all its contents in a string
 *
 * @param file_path
 * @return std::string contains everything inside the defined file
 */
std::string readFile( const char *file_path ) {
    // open the file as input and read as binary
    std::ifstream in_file( file_path, std::ios::in | std::ios::binary );
    if (!in_file) {
        std::cerr << "PARSE_YAML: ifstream could not open file " << file_path << std::endl;
        throw std::ifstream::failure("ERROR: ifstream could not open file");
    }

    // put the contents of the file into a stringstream
    std::stringstream file_buffer;
    file_buffer << in_file.rdbuf();

    // return all contents of stringstream as a single string
    return file_buffer.str();
}
