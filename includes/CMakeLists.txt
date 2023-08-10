# Just obtain every C file in here :)

# Keras2c
file(GLOB_RECURSE KERAS_C LIST_DIRECTORIES true CONFIGURE_DEPENDS keras2c/*.c)

if(VERBOSE_CONFIGURATION)
  message("KERAS lib: ${KERAS_C}")
endif()

add_library(keras_lib ${KERAS_C})


# MUSL

file(GLOB_RECURSE MUSL_C LIST_DIRECTORIES true CONFIGURE_DEPENDS musl_math/*.c)

if(VERBOSE_CONFIGURATION)
  message("MUSL lib: ${KERAS_C}")
endif()

# I am having some issues compiling musl
#add_library(musl_lib ${KERAS_C})

# STUB

add_library(stub verifier_stubs.c)
