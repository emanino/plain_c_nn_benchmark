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

	__VERIFIER_assume(tensor_input[0][0] >= -0.02113823750667874f && tensor_input[0][0] <= -0.016611802493321257f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.04920080950667874f && tensor_input[0][1] <= -0.04467437449332126f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.06303995050667874f && tensor_input[0][2] <= -0.05851351549332126f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.06993232750667874f && tensor_input[0][3] <= -0.06540589249332127f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
