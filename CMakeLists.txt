cmake_minimum_required(VERSION 3.18)

project(nn-benchmarks C)

option(VERBOSE_CONFIGURATION "Enable verbose mode during configuration (mostly for debugging)" OFF)
option(EXPORT_SUITE "Export benchmarks into SV-COMP compliant format" ON)
set(MATH_OP_MODEL "None" CACHE STRING "Choose the operational model for math functions")
set(VALID_MATH_OP_MODEL_VALUES "core_math;musl")

if(NOT (MATH_OP_MODEL STREQUAL "None" OR MATH_OP_MODEL IN_LIST VALID_MATH_OP_MODEL_VALUES))
    message(FATAL_ERROR "Invalid MATH_OP_MODEL: ${MATH_OP_MODEL}. Valid values: core_math, musl")
endif()

if(VERBOSE_CONFIGURATION)
  message(STATUS "MATH_OP_MODEL: ${MATH_OP_MODEL}")
endif()

# Includes
include_directories(extern)

# Libraries
add_subdirectory(extern) # (The extern folder is also a lib!)

# Benchmarks
add_subdirectory(benchmarks)

# Benchexec Extras
add_subdirectory(benchexec-extras)
