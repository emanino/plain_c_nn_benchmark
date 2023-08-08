#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][14], float tensor_output[1][14]);

int main()
{
	float tensor_input[1][14];
	float tensor_output[1][14];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();
	tensor_input[0][4] = nondet_float();
	tensor_input[0][5] = nondet_float();
	tensor_input[0][6] = nondet_float();
	tensor_input[0][7] = nondet_float();
	tensor_input[0][8] = nondet_float();
	tensor_input[0][9] = nondet_float();
	tensor_input[0][10] = nondet_float();
	tensor_input[0][11] = nondet_float();
	tensor_input[0][12] = nondet_float();
	tensor_input[0][13] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -1.7492930226200185f && tensor_input[0][0] <= 1.7312612073369356f);
	__VERIFIER_assume(tensor_input[0][1] >= -1.7306896924315087f && tensor_input[0][1] <= 1.7194907929960244f);
	__VERIFIER_assume(tensor_input[0][2] >= -3.0212351089328653f && tensor_input[0][2] <= 3.029086286024801f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__VERIFIER_assume(tensor_input[0][4] >= 1.6532894732949566f && tensor_input[0][4] <= 5.195179481948719f);
	__VERIFIER_assume(tensor_input[0][5] >= -2.995769403809446f && tensor_input[0][5] <= 3.062271340107222f);
	__VERIFIER_assume(tensor_input[0][6] >= -3.0242304498152164f && tensor_input[0][6] <= 3.0127255516179945f);
	__VERIFIER_assume(tensor_input[0][7] >= -3.078535003606063f && tensor_input[0][7] <= 3.068417997493538f);
	__VERIFIER_assume(tensor_input[0][8] >= -3.0321931364085635f && tensor_input[0][8] <= 3.000408661227941f);
	__VERIFIER_assume(tensor_input[0][9] >= -3.0522044370339096f && tensor_input[0][9] <= 3.0495758797728727f);
	__VERIFIER_assume(tensor_input[0][10] >= -3.020332502191682f && tensor_input[0][10] <= 2.993733528018009f);
	__VERIFIER_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__VERIFIER_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__VERIFIER_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
