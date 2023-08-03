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

	__ESBMC_assume(tensor_input[0][0] >= -0.03472532739182417f && tensor_input[0][0] <= -0.027739452608175827f);
	__ESBMC_assume(tensor_input[0][1] >= -0.24193276739182415f && tensor_input[0][1] <= -0.23494689260817583f);
	__ESBMC_assume(tensor_input[0][2] >= -0.06242637739182417f && tensor_input[0][2] <= -0.055440502608175825f);
	__ESBMC_assume(tensor_input[0][3] >= 0.14206548260817584f && tensor_input[0][3] <= 0.14905135739182415f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
