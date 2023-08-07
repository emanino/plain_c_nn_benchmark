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

	__ESBMC_assume(tensor_input[0][0] >= 0.03818484817244882f && tensor_input[0][0] <= 0.07127877182755119f);
	__ESBMC_assume(tensor_input[0][1] >= 0.37681383817244885f && tensor_input[0][1] <= 0.4099077618275512f);
	__ESBMC_assume(tensor_input[0][2] >= -0.10070808682755118f && tensor_input[0][2] <= -0.06761416317244882f);
	__ESBMC_assume(tensor_input[0][3] >= -0.6726517018275512f && tensor_input[0][3] <= -0.6395577781724487f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
