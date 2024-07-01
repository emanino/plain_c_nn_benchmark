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

	__VERIFIER_assume(tensor_input[0][0] >= -0.08793896136497134f && tensor_input[0][0] <= 0.10183800158713932f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.10511151852394468f && tensor_input[0][1] <= 0.29488848147605534f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.6090046078183783f && tensor_input[0][2] <= 0.798781570770489f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.3107399771827989f && tensor_input[0][3] <= 0.5005169401349095f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.10293442027335042f && tensor_input[0][4] <= 0.08684254267876024f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.254330703594433f && tensor_input[0][5] <= -0.06455374064232236f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.09488848147605533f && tensor_input[0][6] <= 0.09488848147605533f);
	__VERIFIER_assume(tensor_input[0][7] >= -0.09488848147605533f && tensor_input[0][7] <= 0.09488848147605533f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][0])));

	return 0;
}
