
############################
# POLYNOMIAL APPROXIMATION #
############################
file(GLOB_RECURSE POLY_C  CONFIGURE_DEPENDS poly_approx/*.c)

if(VERBOSE_CONFIGURATION)
  message("POLY APPROX lib: ${POLY_C}")
endif()

add_library(poly_approx_lib ${POLY_C})
target_link_libraries(poly_approx_lib keras_lib)

######################
# REACH PROB DENSITY #
######################
file(GLOB_RECURSE REACH_PROB_C CONFIGURE_DEPENDS reach_prob_density/*.c)

if(VERBOSE_CONFIGURATION)
  message("REACH PROB DENSITY lib: ${REACH_PROB_C}")
endif()

add_library(reach_prob_lib ${REACH_PROB_C})

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
