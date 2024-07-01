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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9425007381494963f && tensor_input[0][0] <= -0.8374168618505038f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.002944319850503682f && tensor_input[0][1] <= 0.10802819614949631f);
	__VERIFIER_assume(tensor_input[0][2] >= 1.0827536618505038f && tensor_input[0][2] <= 1.1878375381494963f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.38055300814949633f && tensor_input[0][3] <= -0.2754691318505037f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4614172581494963f && tensor_input[0][4] <= -0.35633338185050367f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.052541941497206014f && tensor_input[0][5] <= 0.052541934801786615f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9474580618505037f && tensor_input[0][6] <= 1.0525419381494963f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.052541938149496314f && tensor_input[0][7] <= 0.052541938149496314f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
