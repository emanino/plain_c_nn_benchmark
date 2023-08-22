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

	__VERIFIER_assume(tensor_input[0][0] >= -0.8720256274890793f && tensor_input[0][0] <= -0.8132991725109208f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04845725251092073f && tensor_input[0][1] <= 0.10718370748907927f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.003802624489079264f && tensor_input[0][2] <= 0.05492383048907927f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.06159638348907927f && tensor_input[0][3] <= -0.0028699285109207336f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.03518591818907926f && tensor_input[0][4] <= 0.023540536789079265f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.04347061548907927f && tensor_input[0][5] <= 0.015255839489079265f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9706367725109207f && tensor_input[0][6] <= 1.0293632274890792f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9706367725109207f && tensor_input[0][7] <= 1.0293632274890792f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
