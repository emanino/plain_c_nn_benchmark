#####################
# HOPFIELD NETWORKS #
#####################

#include_directories(c_networks)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

file(GLOB_RECURSE HOPFIELD_C CONFIGURE_DEPENDS c_networks/*.c)

if(VERBOSE_CONFIGURATION)
  message("HOPFIELD lib: ${HOPFIELD_C}")
endif()

add_library(hopfield_lib ${HOPFIELD_C})
target_link_libraries(hopfield_lib keras_lib)

add_subdirectory(safety_properties)
