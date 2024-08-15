# These networks have no library dependencies thanks to onnx2c.

set(LIPSCHITZ_MODES "2x20x20x1;2x8x8x1;3x20x20x1;3x8x8x1;4x20x20x1;4x8x8x1;2x12x12x1;2x24x24x1;3x12x12x1;3x24x24x1;4x12x12x1;4x24x24x1;2x16x16x1;2x4x4x1;3x16x16x1;3x4x4x1;4x16x16x1;4x4x4x1")

foreach(width ${LIPSCHITZ_MODES})
  file(GLOB_RECURSE LIPSCHITZ_C CONFIGURE_DEPENDS sll_${width}/*.c)
  set(benchmark_network ${CMAKE_SOURCE_DIR}/benchmarks/lipschitz_bounded/c_networks/sll_arch_${width}.c)
  
  foreach(benchmark ${LIPSCHITZ_C})
    get_filename_component(filename ${benchmark} NAME)
    set(BENCHMARKS_WITH_DEPS "${benchmark};${benchmark_network}")

    generate_amalgamation(BENCHMARKS_WITH_DEPS ${filename}-amalgamation)
    generate_benchmark_yml(${filename}-amalgamation)
    install(FILES ${CMAKE_BINARY_DIR}/${filename}-amalgamation.c
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.i
                  ${CMAKE_BINARY_DIR}/${filename}-amalgamation.yml
      DESTINATION ${CMAKE_BINARY_DIR}/export/lipschitz_bounded/)
  endforeach()
endforeach()
