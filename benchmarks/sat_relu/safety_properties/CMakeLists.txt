
set(SAT_RELU_MODES "5;8;13;21;34;55;89;144")

foreach(width ${SAT_RELU_MODES})
  file(GLOB_RECURSE SAT_RELU_C CONFIGURE_DEPENDS bool_v${width}/*.c)
  foreach(benchmark ${SAT_RELU_C})
    get_filename_component(filename ${benchmark} NAME)
    string(REPLACE "prop_" "" network_file ${filename})
    set(benchmark_network ${CMAKE_SOURCE_DIR}/benchmarks/sat_relu/c_networks/sat_relu/bool_v${width}/${network_file})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${benchmark_network}")

    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
      ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
      ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/sat_relu/)

  endforeach()
  
endforeach()
