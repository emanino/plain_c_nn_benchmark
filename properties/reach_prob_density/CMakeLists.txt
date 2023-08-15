# These ReLU networks have no library dependencies thanks to onnx2c.

set(REACH_MODES "gcas;vdp;robot")

foreach(width ${REACH_MODES})
  # TODO: fixed paths should be libraries
  set(REACH_NETWORK ${CMAKE_SOURCE_DIR}/networks/reach_prob_density/${width}.c)
    
  file(GLOB_RECURSE REACH_PROB_C CONFIGURE_DEPENDS ${width}/*.c)
  foreach(benchmark ${REACH_PROB_C})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${REACH_NETWORK}")
    get_filename_component(filename ${benchmark} NAME)
    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
      DESTINATION ${CMAKE_BINARY_DIR}/export/reach_prob_density/)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/reach_prob_density/)
  endforeach()

endforeach()

