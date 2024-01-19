add_library(parseYaml parse_yaml.cpp parse_yaml.h)
target_include_directories(parseYaml PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(parseYaml PRIVATE boatTest_Common)

target_compile_definitions(
    parseYaml PUBLIC YAML_TEST_PATH="${YAML_TEST_PATH}"
)
