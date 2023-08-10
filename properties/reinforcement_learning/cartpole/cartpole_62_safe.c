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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2513686195106128f && tensor_input[0][0] <= -0.24827650048938718f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05416862751061282f && tensor_input[0][1] <= -0.05107650848938718f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.05546532251061282f && tensor_input[0][2] <= -0.052373203489387184f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3444195595106128f && tensor_input[0][3] <= -0.3413274404893872f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
