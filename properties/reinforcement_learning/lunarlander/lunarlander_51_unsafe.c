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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7561822254285018f && tensor_input[0][0] <= -0.7028178945714982f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.021505264571498196f && tensor_input[0][1] <= 0.07486959542850181f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.003098261571498194f && tensor_input[0][2] <= 0.05646259242850181f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0744062074285018f && tensor_input[0][3] <= -0.021041876571498194f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.007162674571498193f && tensor_input[0][4] <= 0.06052700542850181f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.1085479254285018f && tensor_input[0][5] <= -0.055183594571498185f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9733178345714982f && tensor_input[0][6] <= 1.0266821654285019f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9733178345714982f && tensor_input[0][7] <= 1.0266821654285019f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
