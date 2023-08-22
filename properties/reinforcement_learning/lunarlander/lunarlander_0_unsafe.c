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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9731823167830256f && tensor_input[0][0] <= -0.7791152032169744f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05052490178302559f && tensor_input[0][1] <= 0.1435422117830256f);
	__VERIFIER_assume(tensor_input[0][2] >= 1.2862174432169744f && tensor_input[0][2] <= 1.4802845567830256f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.4966841867830256f && tensor_input[0][3] <= -0.3026170732169744f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.5059088167830256f && tensor_input[0][4] <= -0.3118417032169744f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.0970335583163994f && tensor_input[0][5] <= 0.09703355524965179f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9029664432169744f && tensor_input[0][6] <= 1.0970335567830256f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9029664432169744f && tensor_input[0][7] <= 1.0970335567830256f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
