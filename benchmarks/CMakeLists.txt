# BENCHMARKS
file(GLOB_RECURSE BENCHMARKS_C CONFIGURE_DEPENDS *.c)

#foreach(benchmark ${BENCHMARKS_C})
#  if(VERBOSE_CONFIGURATION)
#    message("Adding target ${benchmark}")
#  endif()
#  get_filename_component(filename ${benchmark} NAME)
#  add_executable(${filename}-exe ${benchmark})
#  target_link_libraries(${filename}-exe  keras_lib stub NETWORKS m)
#endforeach()


########################
# BENCHEXEC GENERATION #
########################

# In order to use benchexec for a run, we need three things: (1) the benchmark, (2) the configuration
# file, and (3) a run-set file.
#
# (1) Although its not a requirement, it is usual to send benchmarks in a singular '.i' format. This
# format is preprocessed (so no architecture specific shinanigans) and it should make the life of
# most verifiers easier.
#
# (2) The configuration file is an YAML file containing information about the property, expected-verdict
# and input files.
#
# (3) The run-set is just a regex for all files that should be included in a meta-category.


if(NOT EXPORT_SUITE)
  return()
endif()

# Function to combine multiple C sources into one preprocessed .i
function(generate_amalgamation FILES NAME)
  set(DESTINATION ${CMAKE_BINARY_DIR}/${NAME}.c)
  file(WRITE ${DESTINATION}) # Create the file

 foreach(C IN LISTS ${FILES})
   file(READ ${C} FILE_CONTENT)
   string(REPLACE "\<verifier_functions.h\>" "\"verifier_functions.h\"" PREPROCESS_CONTENT ${FILE_CONTENT}) 
   # Note: We need to force the input to be strings (using quotes) due to CMake considering ';' as a list separator.
   file(APPEND ${DESTINATION} "${PREPROCESS_CONTENT}") # Create the file
 endforeach()

 # Just to check whether it compiles...
 add_custom_target(
   ${NAME} ALL
   COMMAND "${CMAKE_C_COMPILER}" -E ${CMAKE_BINARY_DIR}/${NAME}.c -I ${CMAKE_SOURCE_DIR}/extern -I ${CMAKE_SOURCE_DIR}/benchmarks/hopfield_nets/c_networks -I ${CMAKE_SOURCE_DIR}/benchmarks/poly_approx/c_networks -I ${CMAKE_SOURCE_DIR}/benchmarks/reach_prob_density/c_networks -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include -m32 > ${CMAKE_BINARY_DIR}/${NAME}.i
#   BYPRODUCT ${CMAKE_BINARY_DIR}/${NAME}.i
  DEPENDS ${CMAKE_BINARY_DIR}/${NAME}.c
  COMMENT "Producing ${NAME}.i"
  VERBATIM)
endfunction()


# Function to construct the YML
function(generate_benchmark_yml BENCHMARK)
  string(FIND ${BENCHMARK} "_safe" IS_SAFE)
  if(${IS_SAFE} EQUAL -1)
    string(FIND ${BENCHMARK} "_unsafe" IS_UNSAFE)
    if(${IS_UNSAFE} EQUAL -1)
      message(FATAL_ERROR "${BENCHMARK} is neither safe or unsafe")
    else()
      set(EXPECTED "false")
    endif()
  else()
    set(EXPECTED "true")
  endif()
  
  set(DESTINATION ${CMAKE_BINARY_DIR}/${BENCHMARK}.yml)
  file(WRITE ${DESTINATION}) # Create the file
  file(APPEND ${DESTINATION} "format_version: '2.0'\n\n")
  file(APPEND ${DESTINATION} "input_files: '${BENCHMARK}.i'\n\n")

  # Property
  file(APPEND ${DESTINATION} "properties:\n")
  file(APPEND ${DESTINATION} "  - property_file: ../properties/unreach-call.prp\n")
  file(APPEND ${DESTINATION} "    expected_verdict: ${EXPECTED}\n")

  # Options
  file(APPEND ${DESTINATION} "options:\n")
  file(APPEND ${DESTINATION} "  language: C\n")
  file(APPEND ${DESTINATION} "  data_model: ILP32\n")
endfunction()

# Generating the benchmarks
add_subdirectory(activation_functions)
add_subdirectory(hopfield_nets)
add_subdirectory(math_functions)
add_subdirectory(poly_approx)
add_subdirectory(reach_prob_density)
add_subdirectory(reinforcement_learning)
add_subdirectory(neural_layers)
####################
# NETWORKS LIBRARY #
####################
add_library(NETWORKS INTERFACE)
target_link_libraries(NETWORKS INTERFACE hopfield_lib poly_approx_lib reach_prob_lib reinforcement_lib)
