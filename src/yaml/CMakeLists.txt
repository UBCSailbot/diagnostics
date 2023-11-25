# src/yaml/CMakeLists.txt

# Collect header files
set(HEADER_FILES
    parse_yaml.h
)

# Collect source files
set(SOURCE_FILES
    parse_yaml.cpp
)

# Create a library from the source files
add_library(yaml ${SOURCE_FILES} ${HEADER_FILES})

# Include directories
target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
