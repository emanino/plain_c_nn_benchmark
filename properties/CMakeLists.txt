# BENCHMARKS
file(GLOB_RECURSE BENCHMARKS_C CONFIGURE_DEPENDS *.c)

foreach(benchmark ${BENCHMARKS_C})
  if(VERBOSE_CONFIGURATION)
    message("Adding target ${benchmark}")
  endif()
  get_filename_component(filename ${benchmark} NAME)
  add_executable(${filename}-exe ${benchmark})
  target_link_libraries(${filename}-exe  keras_lib stub NETWORKS m)
endforeach()



