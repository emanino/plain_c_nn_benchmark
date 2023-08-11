# Just obtain every C file in here :)

# Keras2c
file(GLOB_RECURSE KERAS_C CONFIGURE_DEPENDS keras2c/*.c)

if(VERBOSE_CONFIGURATION)
  message("KERAS lib: ${KERAS_C}")
endif()

add_library(keras_lib ${KERAS_C})
target_link_libraries(keras_lib PUBLIC m)

# MUSL

file(GLOB_RECURSE MUSL_C CONFIGURE_DEPENDS musl_math/*.c)

if(VERBOSE_CONFIGURATION)
  message("MUSL lib: ${MUSL_C}")
endif()

# I am having some issues compiling musl
#add_library(musl_lib ${KERAS_C})

# STUB

add_library(stub verifier_stubs.c)

generate_amalgamation(KERAS_C keras_almagamation)
