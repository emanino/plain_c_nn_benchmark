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

	__ESBMC_assume(tensor_input[0][0] >= 0.054600342471467354f && tensor_input[0][0] <= 0.11732423752853263f);
	__ESBMC_assume(tensor_input[0][1] >= 0.7532100024714674f && tensor_input[0][1] <= 0.8159338975285326f);
	__ESBMC_assume(tensor_input[0][2] >= -0.16274733752853263f && tensor_input[0][2] <= -0.10002344247146736f);
	__ESBMC_assume(tensor_input[0][3] >= -1.3011819475285327f && tensor_input[0][3] <= -1.2384580524714672f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}