# TODO: there might be a better way to define this path besides putting explicit paths :(
#       maybe adding a library and using `get_property` for the soures.
set(HOPFIELD_KERAS "${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_activations.c;${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_helper_functions.c;${CMAKE_SOURCE_DIR}/extern/keras2c/k2c_recurrent_layers.c")

set(HOPFIELD_MODES "w4;w8;w16;w32;w64")

add_subdirectory(tanh)
add_subdirectory(softsign)
