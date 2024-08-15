# No extra dependencies

file(GLOB_RECURSE MATH_C CONFIGURE_DEPENDS *.c)

if(VERBOSE_CONFIGURATION)
  message("Files: ${MATH_C}")
endif()

foreach(benchmark ${MATH_C})
  get_filename_component(filename ${benchmark} NAME)
  generate_amalgamation(benchmark ${filename}-amalgamation)
  generate_benchmark_yml(${filename}-amalgamation)
  install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
                ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
                ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
    DESTINATION ${CMAKE_BINARY_DIR}/export/math_functions/)
endforeach()
