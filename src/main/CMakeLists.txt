add_executable(diagnostics diagnostics.cpp)

target_link_libraries(diagnostics PRIVATE UI)

target_include_directories(diagnostics PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
