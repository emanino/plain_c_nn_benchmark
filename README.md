# Plain C Neural Network Verification Benchmark

A collection of neural networks implemented in plain C language, paired with formal specifications of their properties.

For more information about how the benchmarks were created, read our short paper at: https://arxiv.org/abs/2309.03617

## File Structure

1. **./benchexec-extras** contains additional files for running benchexec.

2. **./includes/keras2c** contains the implementation of several types of neural network layers. These are used by networks converted via the keras2c tool: currently, polynomial approximation and hopfield networks belong to this category.

3. **./includes/musl_math** contains the MUSL mathematical library (except for complex number functions) in plain C. This has been extracted from the MUSL implementation of the C standard library.

4. **./models** contains the reference Keras and ONNX models for the networks in **/hopfield_nets** and **/poly_approx**. These models are not part of the main benchmarks.

5. **./networks** contains the neural network code in plain C. All networks in  **/hopfield_nets** and **/poly_approx** depend on the keras2c layer described above. In contrast, all networks in **/reach_prob_density** and **/reinforcement_learning** have been converted with the onnx2c tool, which requires no dependencies.

6. **./properties** contains the safety properties. Each property is specified as a main() C function with a precondition, a call to the neural network (or mathematical function) and a postcondition. The precondition and postcondition are expressed in ESBMC format. Each filename contains the expected result of the verification process: unsafe means that there exists at least one input to the neural network (or mathematical function) that lies in the precondition region but violates the postcondition.

## Producing the benchmarks

The resulting benchmark suite consists in single preprocessed files (i.e., `*.i`*) that includes all libraries (except verification intrinsics) and a benchmark `*.yml` description for `benchexec`.

### Dependencies

On an Ubuntu 22.04, the following command will install all dependencies:

`apt install build-essential cmake gcc-multilib`


### Compiling

To generate the benchmarks:

```bash
mkdir build
cd build
cmake ..
make -j4 install
```

The benchmarks will be inside `./build/export`

## Compiling manually

All benchmarks depends on a verifier-specific implementation of `includes/verifier_functions.h`. Tools that already support SV-COMP standard should work out-of-box. Other tools will need to implement their custom
version of the library and link it at the `gcc` invokation. See `includes/verifier_stubs.c` for an example.

Finally, each category of our benchmark has different dependencies. Here, we include explicit dependencies to math.h functions, as implemented by the MUSL library in **./includes/musl_math**.

### Activation Functions

1. **elu:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/elu/elu_0_safe.c ./includes/musl_math/expm1f.c -I ./includes/musl_math/`

3. **gelu:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/gelu/gelu_5_unsafe.c ./includes/musl_math/erff.c ./includes/musl_math/fabsf.c ./includes/musl_math/expf.c -I ./includes/musl_math/`

4. **logistic:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/logistic/logistic_5_unsafe.c ./includes/musl_math/log1pf.c ./includes/musl_math/atanhf.c ./includes/musl_math/expm1f.c ./includes/musl_math/tanhf.c -I ./includes/musl_math/`

5. **relu:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/relu/relu_2_safe.c ./includes/musl_math/fmaxf.c -I ./includes/musl_math/`

6. **softmax:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/softmax/softmax_1_unsafe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/`

7. **softplus:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/softplus/softplus_3_safe.c ./includes/musl_math/log1pf.c ./includes/musl_math/expf.c -I ./includes/musl_math/`

8. **softsign:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/softsign/softsign_2_safe.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/`

9. **tanh:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/tanh/tanh_6_safe.c ./includes/musl_math/log1pf.c ./includes/musl_math/atanhf.c ./includes/musl_math/expm1f.c ./includes/musl_math/tanhf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/`

### Hopfield Networks

The network width (4, 8, 16, 32 or 64) does not affect the dependencies. However, the activation function (softsign or tanh) does.

1. **softsign:** `gcc <verifier_functions_implementation.c> ./properties/hopfield_nets/softsign/w4/softsign_w4_r1_case_1_safe.c ./networks/hopfield_nets/softsign/w4/hop_softsign_w4_r1.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_helper_functions.c ./includes/keras2c/k2c_recurrent_layers.c ./includes/musl_math/fabsf.c -I ./includes/keras2c/ ./includes/musl_math/ ./networks/hopfield_nets/softsign/w4/`

1. **tanh:** `gcc <verifier_functions_implementation.c> ./properties/hopfield_nets/softsign/w4/softsign_w4_r1_case_1_safe.c ./networks/hopfield_nets/softsign/w4/hop_softsign_w4_r1.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_helper_functions.c ./includes/keras2c/k2c_recurrent_layers.c ./includes/musl_math/tanhf.c ./includes/musl_math/expm1f.c -I ./includes/keras2c/ ./includes/musl_math/ ./networks/hopfield_nets/softsign/w4/`

### Mathematical Functions

1. **cos:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/cos/cos_4_safe.c ./includes/musl_math/cosf.c ./includes/musl_math/fabsf.c ./includes/musl_math/acosf.c ./includes/musl_math/sinf.c ./includes/musl_math/__cosdf.c ./includes/musl_math/__sindf.c ./includes/musl_math/__rem_pio2f.c ./includes/musl_math/__rem_pio2_large.c -I ./includes/musl_math/`

2. **erf:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/erf/erf_0_safe.c ./includes/musl_math/erff.c ./includes/musl_math/fabsf.c ./includes/musl_math/expf.c -I ./includes/musl_math/`

3. **exp:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/exp/exp_6_safe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c ./includes/musl_math/logf.c -I ./includes/musl_math/`

4. **log:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/log/log_5_unsafe.c ./includes/musl_math/expf.c ./includes/musl_math/fabsf.c ./includes/musl_math/logf.c -I ./includes/musl_math/`

6. **sin:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/sin/sin_0_safe.c ./includes/musl_math/cosf.c ./includes/musl_math/fabsf.c ./includes/musl_math/asinf.c ./includes/musl_math/sinf.c ./includes/musl_math/__cosdf.c ./includes/musl_math/__sindf.c ./includes/musl_math/__rem_pio2f.c ./includes/musl_math/__rem_pio2_large.c -I ./includes/musl_math/`

6. **sqrt:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/sqrt/sqrt_7_safe.c ./includes/musl_math/sqrtf.c ./includes/musl_math/fabsf.c -I ./includes/musl_math/`

### Polynomial Approximation Networks

The network architecture does not affect the dependencies. Furthermore, keras2c does not require math dependencies for the ReLU activation.

1. **all:** `gcc <verifier_functions_implementation.c> ./properties/poly_approx/poly_8_8_8/poly_8_8_8_thresh_3_unsafe.c ./networks/poly_approx/poly_8_8_8.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_core_layers.c ./includes/keras2c/k2c_helper_functions.c -I ./includes/keras2c/ ./networks/poly_approx/`

### Reachability of Probability Density Networks

These ReLU networks have no library dependencies thanks to onnx2c.

1. **gcas:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/gcas/gcas_9_unsafe.c ./networks/reach_prob_density/gcas.c`

2. **robot:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/robot/robot_3_safe.c ./networks/reach_prob_density/robot.c`

3. **vdp:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/vdp/vdp_6_unsafe.c ./networks/reach_prob_density/vdp.c`

### Reinforcement Learning Networks

These ReLU networks have no library dependencies thanks to onnx2c.

1. **cartpole:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/cartpole/cartpole_38_unsafe.c ./networks/reinforcement_learning/cartpole.c`

2. **dubinsrejoin:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/dubinsrejoin/dubinsrejoin_13_safe.c ./networks/reinforcement_learning/dubinsrejoin.c`

3. **lunarlander:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/lunarlander/lunarlander_89_safe.c ./networks/reinforcement_learning/lunarlander.c`
