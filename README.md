# Plain C Neural Network Verification Benchmark

A collection of neural networks implemented in plain C language, paired with formal specifications of their properties.

## File Structure

1. **./includes/keras2c** contains the implementation of several types of neural network layers. These are used by networks converted via the keras2c tool: currently, polynomial approximation and hopfield networks belong to this category.

2. **./includes/musl_math** contains the MUSL mathematical library (except for complex number functions) in plain C. This has been extracted from the MUSL implementation of the C standard library.

3. **./networks** contains the neural network code in plain C. All networks in  **/hopfield_nets** and **/poly_approx** depend on the keras2c layer described above. In contrast, all networks in **/reach_prob_density** and **/reinforcement_learning** have been converted with the onnx2c tool, which requires no dependencies.

4. **./properties** contains the safety properties. Each property is specified as a main() C function with a precondition (assume), a call to the neural network (or mathematical function) and a postcondition (assert). The precondition and postcondition are exprssed in ESBMC format. Each filename contains the expected result of the verification process: unsafe means that there exists at least one input to the neural network (or mathematical function) that lies in the precondition region but violates the postcondition.

## Running ESBMC

Each category of our benchmark has different dependencies: here are some examples of ESBMC calls.

### Activation Functions

1. **elu:** esbmc ./properties/activation_functions/elu/elu_0_safe.c ./includes/musl_math/expf.c -I ./includes/musl_math/

2. **gelu:** esbmc ./properties/activation_functions/gelu/gelu_5_unsafe.c ./includes/musl_math/erff.c ./includes/musl_math/fabsf.c ./includes/musl_math/expf.c -I ./includes/musl_math/

3. **logistic:** esbmc ./properties/activation_functions/logistic/logistic_5_unsafe.c ./includes/musl_math/log1pf.c ./includes/musl_math/atanhf.c ./includes/musl_math/expm1f.c ./includes/musl_math/tanhf.c -I ./includes/musl_math/

4. **relu:** esbmc ./properties/activation_functions/relu/relu_2_safe.c ./includes/musl_math/fmaxf.c -I ./includes/musl_math/

5. **softmax:** esbmc ./properties/activation_functions/softmax/softmax_1_unsafe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/

6. **softplus:** esbmc ./properties/activation_functions/softplus/softplus_3_safe.c ./includes/musl_math/log1pf.c ./includes/musl_math/expf.c -I ./includes/musl_math/

7. **softsign:** esbmc ./properties/activation_functions/softsign/softsign_2_safe.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/

8. **tanh:** esbmc ./properties/activation_functions/tanh/tanh_6_safe.c ./includes/musl_math/log1pf.c ./includes/musl_math/atanhf.c ./includes/musl_math/expm1f.c ./includes/musl_math/tanhf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/

### Hopfield Networks

The network width (4, 8, 16, 32 or 64) does not affect the dependencies. However, the activation function (softsign or tanh) does.

1. **softsign:** esbmc ./properties/hopfield_nets/softsign/w4/softsign_w4_r1_case_1_safe.c ./networks/hopfield_nets/softsign/w4/hop_softsign_w4_r1.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_helper_functions.c ./includes/keras2c/k2c_recurrent_layers.c ./includes/musl_math/fabsf.c -I ./includes/keras2c/ ./includes/musl_math/ ./networks/hopfield_nets/softsign/w4/

1. **tanh:** esbmc ./properties/hopfield_nets/softsign/w4/softsign_w4_r1_case_1_safe.c ./networks/hopfield_nets/softsign/w4/hop_softsign_w4_r1.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_helper_functions.c ./includes/keras2c/k2c_recurrent_layers.c ./includes/musl_math/tanhf.c ./includes/musl_math/expm1f.c -I ./includes/keras2c/ ./includes/musl_math/ ./networks/hopfield_nets/softsign/w4/

### Mathematical Functions

1. **cos:** esbmc ./properties/math_functions/cos/cos_4_safe.c ./includes/musl_math/cosf.c ./includes/musl_math/fabsf.c ./includes/musl_math/acosf.c ./includes/musl_math/sinf.c ./includes/musl_math/__cosdf.c ./includes/musl_math/__sindf.c ./includes/musl_math/__rem_pio2f.c ./includes/musl_math/__rem_pio2_large.c -I ./includes/musl_math/

2. **erf:** esbmc ./properties/math_functions/erf/erf_0_safe.c ./includes/musl_math/erff.c ./includes/musl_math/fabsf.c ./includes/musl_math/expf.c -I ./includes/musl_math/

3. **exp:** esbmc ./properties/math_functions/exp/exp_6_safe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c ./includes/musl_math/logf.c -I ./includes/musl_math/

4. **log:** esbmc ./properties/math_functions/log/log_5_unsafe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c ./includes/musl_math/logf.c -I ./includes/musl_math/

6. **sin:** esbmc ./properties/math_functions/sin/sin_0_safe.c ./includes/musl_math/cosf.c ./includes/musl_math/fabsf.c ./includes/musl_math/asinf.c ./includes/musl_math/sinf.c ./includes/musl_math/__cosdf.c ./includes/musl_math/__sindf.c ./includes/musl_math/__rem_pio2f.c ./includes/musl_math/__rem_pio2_large.c -I ./includes/musl_math/

6. **sqrt:** esbmc ./properties/math_functions/sqrt/sqrt_7_safe.c ./includes/musl_math/sqrtf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/

### Polynomial Approximation Networks

The network architecture does not affect the dependencies. Furthermore, keras2c does not require math dependencies for the ReLU activation.

1. ** all:** esbmc ./properties/poly_approx/poly_8_8_8/poly_8_8_8_thresh_3_unsafe.c ./networks/poly_approx/poly_8_8_8.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_core_layers.c ./includes/keras2c/k2c_helper_functions.c -I ./includes/keras2c/ ./networks/poly_approx/

### Reachability of Probability Density Networks

These ReLU networks have no library dependencies thanks to onnx2c.

1. ** gcas:** esbmc ./properties/reach_prob_density/gcas/gcas_9_unsafe.c ./networks/reach_prob_density/gcas.c

2. ** robot:** esbmc ./properties/reach_prob_density/robot/robot_3_safe.c ./networks/reach_prob_density/robot.c

3. ** vdp:** esbmc ./properties/reach_prob_density/vdp/vdp_6_unsafe.c ./networks/reach_prob_density/vdp.c

### Reinforcement Learning Networks

These ReLU networks have no library dependencies thanks to onnx2c.

1. ** cartpole:** esbmc ./properties/reinforcement_learning/cartpole/cartpole_38_unsafe.c ./networks/reinforcement_learning/cartpole.c

2. ** dubinsrejoin:** esbmc ./properties/reinforcement_learning/dubinsrejoin/dubinsrejoin_13_safe.c ./networks/reinforcement_learning/dubinsrejoin.c

3. ** lunarlander:** esbmc ./properties/reinforcement_learning/lunarlander/lunarlander_89_safe.c ./networks/reinforcement_learning/lunarlander.c
