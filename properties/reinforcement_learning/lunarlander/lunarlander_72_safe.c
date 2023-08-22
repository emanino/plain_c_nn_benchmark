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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8234760956231935f && tensor_input[0][0] <= -0.7690357043768066f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.009925516623193499f && tensor_input[0][1] <= 0.0445148746231935f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0763757026231935f && tensor_input[0][2] <= -0.0219353113768065f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.0203859143768065f && tensor_input[0][3] <= 0.0748263056231935f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.1666226956231935f && tensor_input[0][4] <= -0.11218230437680651f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.0250025510231935f && tensor_input[0][5] <= 0.029437840223193498f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9727798043768066f && tensor_input[0][6] <= 1.0272201956231934f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.0272201956231935f && tensor_input[0][7] <= 0.0272201956231935f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
