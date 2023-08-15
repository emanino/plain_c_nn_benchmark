set(REINFORCEMENT_MODES "cartpole;dubinsrejoin;lunarlander")

foreach(width ${REINFORCEMENT_MODES})
  # TODO: fixed paths should be libraries
  set(REACH_NETWORK ${CMAKE_SOURCE_DIR}/networks/reinforcement_learning/${width}.c)
    
  file(GLOB_RECURSE REACH_PROB_C CONFIGURE_DEPENDS ${width}/*.c)
  foreach(benchmark ${REACH_PROB_C})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${REACH_NETWORK}")
    get_filename_component(filename ${benchmark} NAME)
    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
      DESTINATION ${CMAKE_BINARY_DIR}/export/reinforcement_learning/)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/reinforcement_learning/)
  endforeach()

endforeach()
