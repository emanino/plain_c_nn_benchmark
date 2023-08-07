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

	__ESBMC_assume(tensor_input[0][0] >= -0.7681482777366399f && tensor_input[0][0] <= -0.7318517222633601f);
	__ESBMC_assume(tensor_input[0][1] >= 0.18185172226336013f && tensor_input[0][1] <= 0.2181482777366399f);
	__ESBMC_assume(tensor_input[0][2] >= -0.018148277736639885f && tensor_input[0][2] <= 0.018148277736639885f);
	__ESBMC_assume(tensor_input[0][3] >= -0.018148277736639885f && tensor_input[0][3] <= 0.018148277736639885f);
	__ESBMC_assume(tensor_input[0][4] >= 0.03185172226336013f && tensor_input[0][4] <= 0.0681482777366399f);
	__ESBMC_assume(tensor_input[0][5] >= -0.018148277736639885f && tensor_input[0][5] <= 0.018148277736639885f);
	__ESBMC_assume(tensor_input[0][6] >= -0.018148277736639885f && tensor_input[0][6] <= 0.018148277736639885f);
	__ESBMC_assume(tensor_input[0][7] >= -0.018148277736639885f && tensor_input[0][7] <= 0.018148277736639885f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][3] <= tensor_output[0][1])));

	return 0;
}
