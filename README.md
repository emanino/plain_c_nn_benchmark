# Plain C Neural Network Verification Benchmark

A collection of neural networks implemented in plain C language, paired with formal specifications of their properties.

For more information about how the benchmarks were created, read our short paper at: https://arxiv.org/abs/2309.03617

## File Structure

1. **./benchexec-extras** contains additional files for running benchexec.

2. **./includes/keras2c** contains the implementation of several types of neural network layers. These are used by networks converted via the keras2c tool: currently, polynomial approximation and hopfield networks belong to this category.

3. **./includes/math_op_models** contains operational models of all the necessary mathematical functions in plain C. These files have been extracted from the MUSL implementation of the C standard library.

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

All benchmarks depends on a verifier-specific implementation of `includes/verifier_functions.h`. Tools that already support SV-COMP standard should work out-of-box. Other tools will need to implement their custom version of the library and link it at the `gcc` invokation. See `includes/verifier_stubs.c` for an example.

If the verifier does not provide operational models for the math.h library, please include all .h and .c files in 'includes/math_op_models' (not shown here).

Finally, each category of our benchmark has different dependencies (see examples below).

### Activation Functions

**Example:** `gcc <verifier_functions_implementation.c> ./properties/activation_functions/elu/elu_0_safe.c`

### Hopfield Networks

**Notes:** There is a dependency on the 'includes/keras2c' library. The network width (4, 8, 16, 32 or 64) does not affect the dependencies. However, the activation function tanh adds a dependency to math.h (not shown here).

**Example:** `gcc <verifier_functions_implementation.c> ./properties/hopfield_nets/softsign/w4/softsign_w4_r1_case_1_safe.c ./networks/hopfield_nets/softsign/w4/hop_softsign_w4_r1.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_helper_functions.c ./includes/keras2c/k2c_recurrent_layers.c -I ./includes/keras2c/ ./networks/hopfield_nets/softsign/w4/`

### Mathematical Functions

**Example:** `gcc <verifier_functions_implementation.c> ./properties/math_functions/cos/cos_4_safe.c`

### Polynomial Approximation Networks

**Notes:** The network architecture does not affect the dependencies. Furthermore, keras2c does not require math.h dependencies for the ReLU activation.

**Example:** `gcc <verifier_functions_implementation.c> ./properties/poly_approx/poly_8_8_8/poly_8_8_8_thresh_3_unsafe.c ./networks/poly_approx/poly_8_8_8.c ./includes/keras2c/k2c_activations.c ./includes/keras2c/k2c_core_layers.c ./includes/keras2c/k2c_helper_functions.c -I ./includes/keras2c/ ./networks/poly_approx/`

### Reachability of Probability Density Networks

**Notes:** These ReLU networks have no library dependencies thanks to onnx2c.

**GCAS Example:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/gcas/gcas_9_unsafe.c ./networks/reach_prob_density/gcas.c`

**Robot Example:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/robot/robot_3_safe.c ./networks/reach_prob_density/robot.c`

**VDP Example:** `gcc <verifier_functions_implementation.c> ./properties/reach_prob_density/vdp/vdp_6_unsafe.c ./networks/reach_prob_density/vdp.c`

### Reinforcement Learning Networks

**Notes:** These ReLU networks have no library dependencies thanks to onnx2c.

**CartPole Example:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/cartpole/cartpole_38_unsafe.c ./networks/reinforcement_learning/cartpole.c`

**DubinsRejoin Example:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/dubinsrejoin/dubinsrejoin_13_safe.c ./networks/reinforcement_learning/dubinsrejoin.c`

**LunarLander Example:** `gcc <verifier_functions_implementation.c> ./properties/reinforcement_learning/lunarlander/lunarlander_89_safe.c ./networks/reinforcement_learning/lunarlander.c`
