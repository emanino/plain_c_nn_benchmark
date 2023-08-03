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

	__ESBMC_assume(tensor_input[0][0] >= -0.7249236382015363f && tensor_input[0][0] <= -0.6276064817984637f);
	__ESBMC_assume(tensor_input[0][1] >= 0.008805149798463648f && tensor_input[0][1] <= 0.10612230620153634f);
	__ESBMC_assume(tensor_input[0][2] >= -0.03374018120153635f && tensor_input[0][2] <= 0.06357697520153635f);
	__ESBMC_assume(tensor_input[0][3] >= 0.01089425179846365f && tensor_input[0][3] <= 0.10821140820153635f);
	__ESBMC_assume(tensor_input[0][4] >= -0.13313723820153633f && tensor_input[0][4] <= -0.035820081798463646f);
	__ESBMC_assume(tensor_input[0][5] >= 0.05605466179846365f && tensor_input[0][5] <= 0.15337181820153634f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9513414217984637f && tensor_input[0][6] <= 1.0486585782015363f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9513414217984637f && tensor_input[0][7] <= 1.0486585782015363f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
