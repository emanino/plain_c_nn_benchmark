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

	__ESBMC_assume(tensor_dense_input[0][0] >= 0.27148721442773766f && tensor_dense_input[0][0] <= 0.4027911282255087f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.5440449664680371f && tensor_dense_input[0][1] <= -0.41274105267026606f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.7512129630259217f && tensor_dense_input[0][2] <= 0.8825168768236926f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.6849818535200527f && tensor_dense_input[0][3] <= -0.5536779397222817f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43434804310111447f && tensor_dense_input[0][4] <= 0.5656519568988855f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.0656519568988855f && tensor_dense_input[0][5] <= 0.06565195689888553f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.1834599066806335f && tensor_dense_input[0][6] <= -0.052155992882862476f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.42027117176265605f && tensor_dense_input[0][7] <= 0.5515750855604271f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][2]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][6]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][6])))));

	return 0;
}
