if(NOT EXPORT_SUITE)
  return()
endif()

install(FILES activation_functions.set math_functions.set reach_prob_density.set hopfield_nets.set
  poly_approx.set reinforcement_learning.set lipschitz_bounded.set neural_layers.set sat_relu.set
  DESTINATION ${CMAKE_BINARY_DIR}/export/)

install(FILES unreach-call.prp DESTINATION ${CMAKE_BINARY_DIR}/export/properties/)
