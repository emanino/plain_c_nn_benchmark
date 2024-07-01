#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.9368715024016057f && tensor_input[0][0] <= -0.8637274975983944f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.025636374598394428f && tensor_input[0][1] <= 0.09878037940160558f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.7388439975983945f && tensor_input[0][2] <= 0.8119880024016055f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.2606061824016056f && tensor_input[0][3] <= -0.18746217759839442f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.44544702240160555f && tensor_input[0][4] <= -0.3723030175983944f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03657200282818138f && tensor_input[0][5] <= 0.03657200197502977f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9634279975983944f && tensor_input[0][6] <= 1.0365720024016056f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.036572002401605574f && tensor_input[0][7] <= 0.036572002401605574f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
