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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7038936737832864f && tensor_input[0][0] <= -0.6478205262167136f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.024730426216713623f && tensor_input[0][1] <= 0.08080357378328638f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.00446763621671362f && tensor_input[0][2] <= 0.06054078378328638f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07239500578328638f && tensor_input[0][3] <= -0.016321858216713624f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05579812621671362f && tensor_input[0][4] <= 0.11187127378328637f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03377660478328638f && tensor_input[0][5] <= 0.02229654278328638f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9719634262167136f && tensor_input[0][6] <= 1.0280365737832864f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9719634262167136f && tensor_input[0][7] <= 1.0280365737832864f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
