##############################
# LIPSCHITZ BOUNDED NETWORKS #
##############################

file(GLOB_RECURSE LIPSCHITZ_C CONFIGURE_DEPENDS c_networks/*.c)

if(VERBOSE_CONFIGURATION)
  message("LIPSCHITZ lib: ${LIPSCHITZ_C}")
endif()

add_library(lipschitz_lib ${LIPSCHITZ_C})

add_subdirectory(safety_properties)
