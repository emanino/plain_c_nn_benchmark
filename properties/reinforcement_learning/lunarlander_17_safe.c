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

	__ESBMC_assume(tensor_input[0][0] >= -0.07017065683201679f && tensor_input[0][0] <= 0.081538263948716f);
	__ESBMC_assume(tensor_input[0][1] >= 0.12414553960963362f && tensor_input[0][1] <= 0.27585446039036643f);
	__ESBMC_assume(tensor_input[0][2] >= 0.49985364278956523f && tensor_input[0][2] <= 0.651562563570298f);
	__ESBMC_assume(tensor_input[0][3] >= -0.1749732971111509f && tensor_input[0][3] <= -0.023264376330418127f);
	__ESBMC_assume(tensor_input[0][4] >= -0.08243393214241393f && tensor_input[0][4] <= 0.06927498863831885f);
	__ESBMC_assume(tensor_input[0][5] >= -0.20626093545750507f && tensor_input[0][5] <= -0.05455201467677229f);
	__ESBMC_assume(tensor_input[0][6] >= -0.07585446039036639f && tensor_input[0][6] <= 0.07585446039036639f);
	__ESBMC_assume(tensor_input[0][7] >= -0.07585446039036639f && tensor_input[0][7] <= 0.07585446039036639f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
