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

	__VERIFIER_assume(tensor_input[0][0] >= 0.05381735414854336f && tensor_input[0][0] <= 0.14946724585145665f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.9329833541485433f && tensor_input[0][1] <= 1.0286332458514567f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.20433929585145663f && tensor_input[0][2] <= -0.10868940414854336f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.6417829458514566f && tensor_input[0][3] <= -1.5461330541485434f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
