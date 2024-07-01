# Poly approx

set(POLY_MODES "poly_16_16_16;poly_32_32_32_32;poly_8_8_8;poly_1024;poly_16_16_16_16;poly_4_4_4_4;poly_8_8_8_8;poly_128;poly_256;poly_512;poly_128_128;poly_32_32;poly_64_64;poly_16_16;poly_32_32_32;poly_64_64_64")

set(POLY_KERAS "${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_activations.c;${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_core_layers.c;${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_helper_functions.c") 

foreach(width ${POLY_MODES})
  # TODO: fixed paths should be libraries
  set(POLY_NETWORK ${CMAKE_SOURCE_DIR}/benchmarks/poly_approx/c_networks/poly_approx/${width}.c)
    
  file(GLOB_RECURSE POLY_C CONFIGURE_DEPENDS ${width}/*.c)
  foreach(benchmark ${POLY_C})
    set(BENCHMARKS_WITH_DEPS "${benchmark};${POLY_NETWORK};${POLY_KERAS}")

    get_filename_component(filename ${benchmark} NAME)
    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/poly_approx/)
  endforeach()

endforeach()




