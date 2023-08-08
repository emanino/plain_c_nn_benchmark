#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= 0.012293734129990103f && tensor_input[0][0] <= 0.06577092587000989f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.94962530412999f && tensor_input[0][1] <= 1.0031024958700099f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.08545808587000989f && tensor_input[0][2] <= -0.031980894129990105f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.50827119587001f && tensor_input[0][3] <= -1.45479400412999f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
