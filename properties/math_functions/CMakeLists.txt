# Math Functions doesn't depend on anything

file(GLOB_RECURSE MATH_C CONFIGURE_DEPENDS *.c)

foreach(benchmark ${MATH_C})
  get_filename_component(filename ${benchmark} NAME)
  generate_amalgamation(benchmark ${filename}-amalgamation)
  generate_benchmark_yml(${filename}-amalgamation)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
    DESTINATION ${CMAKE_BINARY_DIR}/export/math_functions/)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
    DESTINATION ${CMAKE_BINARY_DIR}/export/math_functions/)
endforeach()
