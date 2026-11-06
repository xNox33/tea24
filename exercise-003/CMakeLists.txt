
add_executable(exercise-003
    main.cpp
)

target_link_libraries(exercise-003
    PRIVATE
        version
        fmt::fmt
)

set_target_properties(exercise-003 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
