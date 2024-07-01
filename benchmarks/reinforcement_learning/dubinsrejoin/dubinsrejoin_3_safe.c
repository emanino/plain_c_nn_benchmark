#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = __VERIFIER_nondet_float();
	tensor_dense_input[0][1] = __VERIFIER_nondet_float();
	tensor_dense_input[0][2] = __VERIFIER_nondet_float();
	tensor_dense_input[0][3] = __VERIFIER_nondet_float();
	tensor_dense_input[0][4] = __VERIFIER_nondet_float();
	tensor_dense_input[0][5] = __VERIFIER_nondet_float();
	tensor_dense_input[0][6] = __VERIFIER_nondet_float();
	tensor_dense_input[0][7] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.3839714743753795f && tensor_dense_input[0][0] <= -0.21866316200387656f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= 0.31635445745436863f && tensor_dense_input[0][1] <= 0.48166276982587164f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -0.08265415618575148f && tensor_dense_input[0][2] <= 0.08265415618575148f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.08265415618575148f && tensor_dense_input[0][3] <= 0.08265415618575148f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= -0.9925768787876817f && tensor_dense_input[0][4] <= -0.8272685664161789f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.08265415618575148f && tensor_dense_input[0][5] <= 0.08265415618575148f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= -0.4887145234428677f && tensor_dense_input[0][6] <= -0.3234062110713647f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= 0.13664575963372055f && tensor_dense_input[0][7] <= 0.3019540720052235f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
