# HOPFIELD depends on specific Networks (and keras)
foreach(width ${HOPFIELD_MODES})
  # TODO: fixed paths should be libraries
  file(GLOB_RECURSE HOPFIELD_NETWORK CONFIGURE_DEPENDS
    ${CMAKE_SOURCE_DIR}/networks/hopfield_nets/softsign/${width}/*.c)

  file(GLOB_RECURSE HOPFIELD_C CONFIGURE_DEPENDS ${width}/*.c)
  foreach(benchmark ${HOPFIELD_C})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${HOPFIELD_NETWORK};${HOPFIELD_KERAS}")

    get_filename_component(filename ${benchmark} NAME)
    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
      DESTINATION ${CMAKE_BINARY_DIR}/export/hopfield_nets/)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/hopfield_nets/)
  endforeach()

endforeach()
