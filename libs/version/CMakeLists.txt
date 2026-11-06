configure_file(
    version_config.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version_config.h
)

add_library(version STATIC
    src/version.cpp
)

target_include_directories(version
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_BINARY_DIR}
)

set_target_properties(version PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)
