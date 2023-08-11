cmake_minimum_required(VERSION 3.2)

project(nn-benchmarks C)

option(VERBOSE_CONFIGURATION "Enable verbose mode during configuration (mostly for debugging)" ON)

# Let's create a singular .c file containing ALL other .c
function(generate_amalgamation FILES NAME)
  set(DESTINATION ${CMAKE_BINARY_DIR}/${NAME}.c)
  file(WRITE ${DESTINATION}) # Create the file

 foreach(C IN LISTS ${FILES})
   file(APPEND ${DESTINATION} "#include \"${C}\"\n") # Create the file
 endforeach()

 # Just to check whether it compiles...
 add_custom_target(
   Amalgamation ALL
   COMMAND "${CMAKE_C_COMPILER}" -E ${CMAKE_BINARY_DIR}/${NAME}.c -I ${CMAKE_SOURCE_DIR}/includes -I ${CMAKE_SOURCE_DIR}/networks > ${CMAKE_BINARY_DIR}/${NAME}.i
#   BYPRODUCT ${CMAKE_BINARY_DIR}/${NAME}.i
  DEPENDS ${CMAKE_BINARY_DIR}/${NAME}.c
  COMMENT "Producing ${NAME}.i"
  VERBATIM)

 
endfunction()

# Includes
include_directories(includes)
include_directories(networks)

# Libraries
add_subdirectory(includes) # (The include folder is also a lib!)
add_subdirectory(networks) 

# Benchmarks
add_subdirectory(properties)


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

option(EXPORT_SUITE "Export benchmarks into SV-COMP compliant format" OFF)
if(NOT EXPORT_SUITE)
  return()
endif()
# (1) Generating the benchmarks

#generate_amalgamation(${MUSL_C} MUSL)

