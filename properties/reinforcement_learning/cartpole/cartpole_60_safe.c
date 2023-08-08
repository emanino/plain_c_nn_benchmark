#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= 0.40749552775186315f && tensor_input[0][0] <= 0.4159786322481368f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.6917904522481368f && tensor_input[0][1] <= -0.6833073477518632f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.10162916375186318f && tensor_input[0][2] <= 0.11011226824813683f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.9263019877518631f && tensor_input[0][3] <= 0.9347850922481368f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
