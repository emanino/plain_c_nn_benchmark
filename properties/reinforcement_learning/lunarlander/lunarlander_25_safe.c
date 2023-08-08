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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9198044171343939f && tensor_input[0][0] <= -0.834482182865606f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.004493987865606126f && tensor_input[0][1] <= 0.08981622213439389f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.36601842286560615f && tensor_input[0][2] <= 0.45134065713439386f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.16073732713439387f && tensor_input[0][3] <= -0.07541509286560613f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.45153619713439386f && tensor_input[0][4] <= -0.36621396286560615f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.042661115604143075f && tensor_input[0][5] <= 0.04266111866464468f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9573388828656061f && tensor_input[0][6] <= 1.0426611171343938f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9573388828656061f && tensor_input[0][7] <= 1.0426611171343938f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
