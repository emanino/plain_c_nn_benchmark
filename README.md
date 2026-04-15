# NeuroCodeBench 2.0: a Floating-Point Neural Network Verification Benchmark in Plain C

Safety-critical systems with neural network components require strong guarantees. While existing neural network verification techniques have shown great progress towards this goal (see https://vnn-comp.github.io/), they cannot prove the absence of software faults in the network implementation. To truly fulfil neural network safety at the implementation level, we need better software verification techniques.

This repo contains NeuroCodeBench 2.0, a neural network verification benchmark that tests the floating-point reasoning capabilities of software verifiers. It contains 912 benchmark instances in plain C covering the following subcategories:

| Benchmark Category | Safe | Unsafe | Verdict Source |
| ------- | ------- | ------- | ------- |
| Maths Functions | 42 | 16 | Brute Force |
| Activation Functions | 44 | 13 | Brute Force |
| Neural Layers | 43 | 43 | By Construction |
| Hopfield Networks | 46 | 34 | By Construction |
| SAT ReLU Networks | 48 | 48 | By Construction |
| Polynomial Approximation | 48 | 48 | Brute Force |
| Lipschitz-Bounded Networks | 54 | 54 | By Construction |
| Probability Density | 22 | 13 | Counterexamples |
| Reinforcement Learning | 103 | 193 | Counterexamples |
| Total | 450 | 462 |

As the table shows, we took great care in balancing the number of unsafe instances (i.e. that contain a bug/counterexample) with the number of safe ones. Furthermore, the verdict of each instance has been established via an alternative technique. More information on the design of the benchmark, from requirements to safety properties and verdict sources, can be found in the paper:

Edoardo Manino, Bruno Farias, Rafael Sá Menezes, Fedor Shmarov, Lucas C. Cordeiro. _Floating-Point Neural Network Verification at the Software Level_. https://arxiv.org/abs/2510.23389

A shorter and older description can be found in:

Edoardo Manino, Rafael Sá Menezes, Fedor Shmarov, Lucas C. Cordeiro. _NeuroCodeBench: a plain C neural network benchmark for software verification_. Workshop on Automated Formal Reasoning for Trustworthy AI Systems at the Brazilian Symposium on Formal Methods. 2023. https://arxiv.org/abs/2309.03617

Please cite the above if you use NeuroCodeBench in your work.

## A Simple Example

Each benchmark instance comprises of one or more .c files and a single safety property. The safety property is specified directly inside the main() function via a small number of annotations provided by the header verifier_functions.h. Below, we show a small example, where we check that the implementation of the hyperbolic tangent function does not return values above 1.0. The original file can be found at https://github.com/emanino/plain_c_nn_benchmark/blob/main/benchmarks/activation_functions/safety_properties/tanh/tanh_1_safe.c

	#include <verifier_functions.h>
	#include <math.h>
	
	int main() /* check_upper_bound */
	{
		float x = __VERIFIER_nondet_float();
		
		__VERIFIER_assume(!isnan(x));
		
		float y = tanhf(x);
		
		__VERIFIER_assert(islessequal(y, 1.0f)); /* Expected result: verification successful */

		return 0;
	}

Larger benchmark instances usually store the neural network code and the main() function in separate files.

## Overall Results (October 2025)

Our own experiments indicate that software verifiers struggle on our benchmark. More specifically, we observe a high rate of timeouts (no verdict after 15 minutes) and a few too many incorrect verdicts. Crucially, some of these incorrect verdicts are false negatives, i.e. the verifier claims that the code is safe, when in reality we know that a counterexample is possible:

| Software Verifier | Correct Safe | Correct Unsafe | Incorrect Safe | Incorrect Unsafe |
| ------- | ------- | ------- | ------- | ------- |
| 2LS | 12 | 2 | - | - |
| CBMC | 66 | 305 | - | 121 |
| CPAChecker | 18 | 19 | - | - |
| DIVINE | 6 | 3 | - | - |
| ESBMC | 76 | 86 | - | - |
| PeSCo | 24 | 25 | 10 | - |
| Pinaka | 44 | 71 | - | 82 |

We hope that the presence of NeuroCodeBench will drive further research in effective software verification techniques for neural networks. An effort to disseminate the benchmark into relevant verification competition has already begun (see below).

## NeuroCodeBench at SV-COMP

Since 2024, NeuroCodeBench has been part of the official benchmark set of SV-COMP, the international Competition on Software Verification (https://sv-comp.sosy-lab.org/). The current version of our benchmark, NeuroCodeBench 2.0, has been introduced in the 2026 edition. You can check the performance of state-of-the-art software verifiers by filtering the official results in the float reachability category therein: https://sv-comp.sosy-lab.org/2026/results/results-verified/C.unreach-call.Floats.table.html#/

## Using the Benchmark

The repo organises the benchmark files as follows:

- /benchmarks contains all the annotated C files, split by categories. When relevant, the original neural network models are included for reference (in ONNX and sometimes Keras format). For the SAT ReLU category, the underlying formulae are given in DIMACS format.
- /extern contains all helper functions, including the annotation header verifier_functions.h. Neural networks trained with Keras (Hopfield Nets and Poly Approx) require the inclusion of the headers in /extern/keras2c. Operational models for relevant mathematical functions (e.g. tanhf(), epxf(), etc) can be found in /extern/math_op_models. These are standalone and written in plain C, but are optional.
- /benchexec-extras contains helper files for the BenchExec tool, which enables fair and reproducible comparisons between software verifiers (https://github.com/sosy-lab/benchexec). We include them to ensure compatibility with SV-COMP (see below).

In general, the whole repo structure is influenced by SV-COMP conventions. A part from the core C files, the repo contains automated scripts to produce standalone files in .i format, as required by the competition. Each .i file contains all the necessary code to compile a single benchmark instance. Furthermore, we include the YAML descriptions that are used to automatically run BenchExec on the whole benchmark.

### Installing Dependencies

On an Ubuntu 22.04, the following command will install all dependencies:

`apt install build-essential cmake gcc-multilib`

### Compiling the Benchmark

To generate the benchmarks:

```bash
mkdir build
cd build
cmake ..
make -j4 install
```

The benchmarks will be inside `./build/export`
