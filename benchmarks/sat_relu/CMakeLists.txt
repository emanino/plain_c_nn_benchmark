#####################
# SAT RELU NETWORKS #
#####################

file(GLOB_RECURSE SAT_RELU_C CONFIGURE_DEPENDS c_networks/*.c)

if(VERBOSE_CONFIGURATION)
  message("SAT RELU lib: ${SAT_RELU_C}")
endif()

add_library(sat_relu_lib ${SAT_RELU_C})

add_subdirectory(safety_properties)
