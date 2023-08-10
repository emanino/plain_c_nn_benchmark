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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9105768261755529f && tensor_input[0][0] <= -0.8524218738244471f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0231561568244471f && tensor_input[0][1] <= 0.0813111091755529f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.009937440824447103f && tensor_input[0][2] <= 0.0680923931755529f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0689866361755529f && tensor_input[0][3] <= -0.010831683824447099f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4137532161755529f && tensor_input[0][4] <= -0.3555982638244471f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.2209604761755529f && tensor_input[0][5] <= -0.1628055238244471f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9709225238244471f && tensor_input[0][6] <= 1.029077476175553f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9709225238244471f && tensor_input[0][7] <= 1.029077476175553f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
