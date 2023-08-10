#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.8162473594720753f && tensor_dense_input[0][0] <= -0.682314254684358f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.43771796735031065f && tensor_dense_input[0][1] <= -0.3037848625625935f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0669665523938585f && tensor_dense_input[0][2] <= -0.9330334476061414f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.40631274216665564f && tensor_dense_input[0][3] <= -0.2723796373789385f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.43303344760614143f && tensor_dense_input[0][4] <= 0.5669665523938586f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.0669665523938586f && tensor_dense_input[0][5] <= 0.06696655239385857f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.1553420933571366f && tensor_dense_input[0][6] <= 0.28927519814485375f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5148268721637156f && tensor_dense_input[0][7] <= -0.3808937673759984f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
