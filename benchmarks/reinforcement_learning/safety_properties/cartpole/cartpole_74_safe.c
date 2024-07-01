#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.27819048610839286f && tensor_input[0][0] <= -0.27045501389160714f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.25233568610839285f && tensor_input[0][1] <= -0.24460021389160713f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.028770691108392876f && tensor_input[0][2] <= -0.021035218891607126f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.03767356610839288f && tensor_input[0][3] <= -0.029938093891607127f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
