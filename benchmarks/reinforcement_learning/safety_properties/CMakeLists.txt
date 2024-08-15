# These networks have no library dependencies thanks to onnx2c.

set(REINFORCEMENT_MODES "cartpole;dubinsrejoin;lunarlander")

foreach(width ${REINFORCEMENT_MODES})
  # TODO: fixed paths should be libraries
  set(REINFORCEMENT_NETWORK ${CMAKE_SOURCE_DIR}/benchmarks/reinforcement_learning/c_networks/${width}.c)
    
  file(GLOB_RECURSE REINFORCEMENT_C CONFIGURE_DEPENDS ${width}/*.c)
  foreach(benchmark ${REINFORCEMENT_C})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${REINFORCEMENT_NETWORK}")
	
    get_filename_component(filename ${benchmark} NAME)
    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/reinforcement_learning/)
  endforeach()
endforeach()
