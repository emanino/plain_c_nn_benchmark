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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.3932105095661591f && tensor_dense_input[0][0] <= -0.262541517713905f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.6695609364270917f && tensor_dense_input[0][1] <= -0.5388919445748376f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.10509902179691151f && tensor_dense_input[0][2] <= 0.23576801364916566f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.7106414786912884f && tensor_dense_input[0][3] <= -0.5799724868390342f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43466550407387294f && tensor_dense_input[0][4] <= 0.5653344959261271f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06533449592612713f && tensor_dense_input[0][5] <= 0.06533449592612701f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.2789124684056263f && tensor_dense_input[0][6] <= -0.14824347655337217f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.3867544883143057f && tensor_dense_input[0][7] <= 0.5174234801665598f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
