#####################################
# POLYNOMIAL APPROXIMATION NETWORKS #
#####################################

include_directories(c_networks)
file(GLOB_RECURSE POLY_C CONFIGURE_DEPENDS c_networks/*.c)

if(VERBOSE_CONFIGURATION)
  message("POLY APPROX lib: ${POLY_C}")
endif()

add_library(poly_approx_lib ${POLY_C})
target_link_libraries(poly_approx_lib keras_lib)

add_subdirectory(safety_properties)
