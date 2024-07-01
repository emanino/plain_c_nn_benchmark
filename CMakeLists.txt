cmake_minimum_required(VERSION 3.2)

project(nn-benchmarks C)

option(VERBOSE_CONFIGURATION "Enable verbose mode during configuration (mostly for debugging)" OFF)
option(EXPORT_SUITE "Export benchmarks into SV-COMP compliant format" ON)

# Includes
include_directories(extern)
include_directories(networks)

# Libraries
add_subdirectory(extern) # (The include folder is also a lib!)
add_subdirectory(networks) 

# Benchmarks
add_subdirectory(properties)

# Benchexec Extras
add_subdirectory(benchexec-extras)


