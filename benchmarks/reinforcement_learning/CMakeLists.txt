##########################
# REINFORCEMENT LEARNING #
##########################
file(GLOB_RECURSE REINFORCEMENT_C  CONFIGURE_DEPENDS c_networks/*.c)

if(VERBOSE_CONFIGURATION)
  message("REINFORCEMENT lib: ${REINFORCEMENT_C}")
endif()

add_library(reinforcement_lib ${REINFORCEMENT_C})


add_subdirectory(safety_properties)
