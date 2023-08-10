cmake_minimum_required(VERSION 3.2)

project(nn-benchmarks C)

option(VERBOSE_CONFIGURATION "Enable verbose mode during configuration (mostly for debugging)" ON)

option(EXPORT_SUITE "Export benchmarks into SV-COMP compliant format" OFF)
if(EXPORT_SUITE)
  message("SV-COMP benchmarks will be exported at the end of the build")
endif()

# Includes
include_directories(includes)
include_directories(networks)

# Libraries
add_subdirectory(includes) # (The include folder is also a lib!)
add_subdirectory(networks) 

# Benchmarks
add_subdirectory(properties)


