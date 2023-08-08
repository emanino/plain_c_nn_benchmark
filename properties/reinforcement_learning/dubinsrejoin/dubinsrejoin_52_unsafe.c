#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.3055983530470798f && tensor_dense_input[0][0] <= -0.1730534931041296f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.6967545483142481f && tensor_dense_input[0][1] <= -0.5642096883712979f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.6993552742875939f && tensor_dense_input[0][2] <= -0.5668104143446437f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.38860606628781463f && tensor_dense_input[0][3] <= -0.25606120634486446f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4337275700285249f && tensor_dense_input[0][4] <= 0.5662724299714751f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06627242997147514f && tensor_dense_input[0][5] <= 0.06627242997147506f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.1364460226273984f && tensor_dense_input[0][6] <= -0.0039011626844481923f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.5626775232010625f && tensor_dense_input[0][7] <= -0.4301326632581123f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
