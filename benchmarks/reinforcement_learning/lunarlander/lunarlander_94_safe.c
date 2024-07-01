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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8582691990432433f && tensor_input[0][0] <= -0.7844292009567567f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.019623174043243274f && tensor_input[0][1] <= 0.05421682404324327f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.014536076043243272f && tensor_input[0][2] <= 0.05930392204324327f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.02294316595675673f && tensor_input[0][3] <= 0.09678316404324327f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.3752377790432433f && tensor_input[0][4] <= -0.30139778095675673f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.02960876904324327f && tensor_input[0][5] <= 0.044231229043243274f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9630800009567567f && tensor_input[0][6] <= 1.0369199990432432f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.03691999904324327f && tensor_input[0][7] <= 0.03691999904324327f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
