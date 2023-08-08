#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7782541258391302f && tensor_input[0][0] <= -0.7236962741608697f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04469426416086973f && tensor_input[0][1] <= 0.09925211583913028f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.010597697839130279f && tensor_input[0][2] <= 0.04396015383913028f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.05448284183913028f && tensor_input[0][3] <= 7.500983913027656f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.04185864416086972f && tensor_input[0][4] <= 0.09641649583913027f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.07075923283913028f && tensor_input[0][5] <= -0.016201381160869725f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9727210741608697f && tensor_input[0][6] <= 1.0272789258391304f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9727210741608697f && tensor_input[0][7] <= 1.0272789258391304f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
