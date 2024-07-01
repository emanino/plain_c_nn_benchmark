cmake_minimum_required(VERSION 3.2)

project(nn-benchmarks C)

option(VERBOSE_CONFIGURATION "Enable verbose mode during configuration (mostly for debugging)" OFF)
option(EXPORT_SUITE "Export benchmarks into SV-COMP compliant format" ON)

# Includes
include_directories(extern)

# Libraries
add_subdirectory(extern) # (The include folder is also a lib!)

# Benchmarks
add_subdirectory(benchmarks)

# Benchexec Extras
add_subdirectory(benchexec-extras)


