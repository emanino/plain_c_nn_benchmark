######################
# REACH PROB DENSITY #
######################
file(GLOB_RECURSE REACH_PROB_C CONFIGURE_DEPENDS c_networks/reach_prob_density/*.c)

if(VERBOSE_CONFIGURATION)
  message("REACH PROB DENSITY lib: ${REACH_PROB_C}")
endif()

add_library(reach_prob_lib ${REACH_PROB_C})

add_subdirectory(safety_properties)
