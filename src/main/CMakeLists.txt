# Add main.exe
add_executable(diagnostics main.cpp)

# List of required header files
target_include_directories(diagnostics PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Modules that main depends on
# ex: target_link_libraries(SailbotDiagnostics_main PRIVATE module1 module2)
target_link_libraries(diagnostics PRIVATE
    yaml
    ryml::ryml
)

# Import configuration file
target_compile_definitions(
    diagnostics PUBLIC YAML_TEST_PATH="${YAML_TEST_PATH}"
)
