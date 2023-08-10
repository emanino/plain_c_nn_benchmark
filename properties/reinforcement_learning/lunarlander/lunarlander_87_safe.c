#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][8], float tensor_output[1][4]);

int main()
{
	float tensor_input[1][8];
	float tensor_output[1][4];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.6525412598015823f && tensor_input[0][0] <= -0.6120714201984176f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.0989981501984177f && tensor_input[0][1] <= 0.1394679898015823f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.0034877771984177033f && tensor_input[0][2] <= 0.0439576168015823f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.023658929601582297f && tensor_input[0][3] <= 0.0168109100015823f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.1219949298015823f && tensor_input[0][4] <= -0.0815250901984177f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.036259037801582295f && tensor_input[0][5] <= 0.004210801801582297f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.020234919801582298f && tensor_input[0][6] <= 0.020234919801582298f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9797650801984177f && tensor_input[0][7] <= 1.0202349198015823f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
