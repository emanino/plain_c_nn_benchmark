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

	__VERIFIER_assume(tensor_input[0][0] >= -0.25071405742385394f && tensor_input[0][0] <= -0.23899242257614603f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.25432681742385393f && tensor_input[0][1] <= -0.24260518257614602f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05910250242385396f && tensor_input[0][2] <= -0.047380867576146034f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.03973980342385396f && tensor_input[0][3] <= -0.028018168576146037f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
