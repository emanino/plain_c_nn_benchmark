
# Activation Functions doesn't depend on anything

file(GLOB_RECURSE ACTIVATION_C CONFIGURE_DEPENDS *.c)

if(VERBOSE_CONFIGURATION)
  message("Files: ${ACTIVATION_C}")
endif()

foreach(benchmark ${ACTIVATION_C})
  get_filename_component(filename ${benchmark} NAME)
  generate_amalgamation(benchmark ${filename}-amalgamation)
  generate_benchmark_yml(${filename}-amalgamation)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
    DESTINATION ${CMAKE_BINARY_DIR}/export/activation_functions/)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
    DESTINATION ${CMAKE_BINARY_DIR}/export/activation_functions/)
endforeach()

