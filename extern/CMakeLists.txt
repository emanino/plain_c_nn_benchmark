# Just obtain every C file in here :)

# Keras2c
file(GLOB_RECURSE KERAS_C CONFIGURE_DEPENDS keras2c/*.c)

if(VERBOSE_CONFIGURATION)
  message("KERAS lib: ${KERAS_C}")
endif()

add_library(keras_lib ${KERAS_C})
target_link_libraries(keras_lib PUBLIC m)

# MUSL

file(GLOB_RECURSE MUSL_C CONFIGURE_DEPENDS math_op_models/musl/*.c)

if(VERBOSE_CONFIGURATION)
  message("MUSL lib: ${MUSL_C}")
endif()

#add_library(musl_lib ${KERAS_C})

# CORE-MATH

file(GLOB_RECURSE CORE_MATH_C CONFIGURE_DEPENDS math_op_models/core_math/*.c)

if(VERBOSE_CONFIGURATION)
  message("CORE-MATH lib: ${CORE_MATH_C}")
endif()

#add_library(core_math_lib ${KERAS_C})

# STUB

add_library(stub verifier_stubs.c)

# The almagamations rely on a local verifier_functions header for compilation.
file(COPY verifier_functions.h DESTINATION ${CMAKE_BINARY_DIR}/)
file(COPY verifier_stubs.c DESTINATION ${CMAKE_BINARY_DIR}/)
