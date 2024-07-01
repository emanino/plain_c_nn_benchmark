


##########################
# REINFORCEMENT LEARNING #
##########################
file(GLOB_RECURSE REINFORCEMENT_C  CONFIGURE_DEPENDS reinforcement_learning/*.c)

if(VERBOSE_CONFIGURATION)
  message("REINFORCEMENT lib: ${REINFORCEMENT_C}")
endif()

add_library(reinforcement_lib ${REINFORCEMENT_C})

####################
# NETWORKS LIBRARY #
####################
add_library(NETWORKS INTERFACE)
target_link_libraries(NETWORKS INTERFACE hopfield_lib poly_approx_lib reach_prob_lib reinforcement_lib)
