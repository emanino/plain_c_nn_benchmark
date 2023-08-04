#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.4198914386683147f && tensor_dense_input[0][0] <= -0.2874982350288966f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.11409538127186748f && tensor_dense_input[0][1] <= 0.018297822367550662f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.8741041712754127f && tensor_dense_input[0][2] <= -0.7417109676359945f);
	__ESBMC_assume(tensor_dense_input[0][3] >= 0.09492804693080162f && tensor_dense_input[0][3] <= 0.22732125057021976f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.433803398180291f && tensor_dense_input[0][4] <= 0.5661966018197092f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.066196601819709f && tensor_dense_input[0][5] <= 0.06619660181970914f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.02010983432578818f && tensor_dense_input[0][6] <= 0.11228336931362996f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5640680810811358f && tensor_dense_input[0][7] <= -0.4316748774417176f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}