# Add main.exe
add_executable(diagnostics main.cpp)

# List of required header files
target_include_directories(diagnostics PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Modules that main depends on
# ex: target_link_libraries(SailbotDiagnostics_main PRIVATE module1 module2)
