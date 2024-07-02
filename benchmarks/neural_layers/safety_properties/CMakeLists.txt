# No extra dependencies

file(GLOB_RECURSE NEURAL_LAYERS_C CONFIGURE_DEPENDS *.c)

if(VERBOSE_CONFIGURATION)
  message("Files: ${NEURAL_LAYERS_C}")
endif()

foreach(benchmark ${NEURAL_LAYERS_C})
  get_filename_component(filename ${benchmark} NAME)
  generate_amalgamation(benchmark ${filename}-amalgamation)
  generate_benchmark_yml(${filename}-amalgamation)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
                ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
                ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
    DESTINATION ${CMAKE_BINARY_DIR}/export/neural_layers/)
endforeach()
