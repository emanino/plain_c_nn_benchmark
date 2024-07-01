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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.1861058569718459f && tensor_dense_input[0][0] <= 0.017979784564756504f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5081257803592859f && tensor_dense_input[0][1] <= -0.30404013882268344f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.05911786554604232f && tensor_dense_input[0][2] <= 0.1449677759905601f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.024520517739409053f && tensor_dense_input[0][3] <= 0.17956512379719336f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.3979571792316988f && tensor_dense_input[0][4] <= 0.6020428207683012f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.10204282076830119f && tensor_dense_input[0][5] <= 0.10204282076830122f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.5843512593138612f && tensor_dense_input[0][6] <= -0.38026561777725876f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.23387062552793372f && tensor_dense_input[0][7] <= -0.02978498399133131f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
