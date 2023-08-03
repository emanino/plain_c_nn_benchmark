#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_input[0][0] >= -0.800264222598232f && tensor_input[0][0] <= -0.735752977401768f);
	__ESBMC_assume(tensor_input[0][1] >= -0.006690728598231981f && tensor_input[0][1] <= 0.05782051659823198f);
	__ESBMC_assume(tensor_input[0][2] >= -0.004318290598231984f && tensor_input[0][2] <= 0.060192954598231985f);
	__ESBMC_assume(tensor_input[0][3] >= -0.09229215259823198f && tensor_input[0][3] <= -0.027780907401768015f);
	__ESBMC_assume(tensor_input[0][4] >= 0.04505057340176801f && tensor_input[0][4] <= 0.10956181859823197f);
	__ESBMC_assume(tensor_input[0][5] >= -0.10331210759823198f && tensor_input[0][5] <= -0.03880086240176802f);
	__ESBMC_assume(tensor_input[0][6] >= 0.967744377401768f && tensor_input[0][6] <= 1.032255622598232f);
	__ESBMC_assume(tensor_input[0][7] >= 0.967744377401768f && tensor_input[0][7] <= 1.032255622598232f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
