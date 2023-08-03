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

	__ESBMC_assume(tensor_input[0][0] >= -0.9450730019586818f && tensor_input[0][0] <= -0.8809063980413182f);
	__ESBMC_assume(tensor_input[0][1] >= 0.03837461804131821f && tensor_input[0][1] <= 0.10254122195868177f);
	__ESBMC_assume(tensor_input[0][2] >= 0.034761653041318216f && tensor_input[0][2] <= 0.09892825695868178f);
	__ESBMC_assume(tensor_input[0][3] >= -0.05139622895868178f && tensor_input[0][3] <= 0.01277037495868178f);
	__ESBMC_assume(tensor_input[0][4] >= -0.44095838195868176f && tensor_input[0][4] <= -0.37679177804131825f);
	__ESBMC_assume(tensor_input[0][5] >= -0.03208329432058578f && tensor_input[0][5] <= 0.032083309596777784f);
	__ESBMC_assume(tensor_input[0][6] >= 0.9679166980413182f && tensor_input[0][6] <= 1.0320833019586817f);
	__ESBMC_assume(tensor_input[0][7] >= 0.9679166980413182f && tensor_input[0][7] <= 1.0320833019586817f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
