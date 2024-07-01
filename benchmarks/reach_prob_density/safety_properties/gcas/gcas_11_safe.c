#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][14], float tensor_output[1][14]);

int main()
{
	float tensor_input[1][14];
	float tensor_output[1][14];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();
	tensor_input[0][4] = __VERIFIER_nondet_float();
	tensor_input[0][5] = __VERIFIER_nondet_float();
	tensor_input[0][6] = __VERIFIER_nondet_float();
	tensor_input[0][7] = __VERIFIER_nondet_float();
	tensor_input[0][8] = __VERIFIER_nondet_float();
	tensor_input[0][9] = __VERIFIER_nondet_float();
	tensor_input[0][10] = __VERIFIER_nondet_float();
	tensor_input[0][11] = __VERIFIER_nondet_float();
	tensor_input[0][12] = __VERIFIER_nondet_float();
	tensor_input[0][13] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -1.7492930226200185f && tensor_input[0][0] <= 1.7312612073369356f);
	__VERIFIER_assume(tensor_input[0][1] >= -1.7306896924315087f && tensor_input[0][1] <= 1.7194907929960244f);
	__VERIFIER_assume(tensor_input[0][2] >= -3.359414996589872f && tensor_input[0][2] <= 3.367266173681808f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__VERIFIER_assume(tensor_input[0][4] >= 1.4415085045840699f && tensor_input[0][4] <= 5.195179481948719f);
	__VERIFIER_assume(tensor_input[0][5] >= -3.334380760870031f && tensor_input[0][5] <= 3.4008826971678072f);
	__VERIFIER_assume(tensor_input[0][6] >= -3.3616632850454944f && tensor_input[0][6] <= 3.3501583868482725f);
	__VERIFIER_assume(tensor_input[0][7] >= -3.4221160697420228f && tensor_input[0][7] <= 3.411999063629498f);
	__VERIFIER_assume(tensor_input[0][8] >= -3.369382595451911f && tensor_input[0][8] <= 3.3375981202712888f);
	__VERIFIER_assume(tensor_input[0][9] >= -3.39326059708603f && tensor_input[0][9] <= 3.3906320398249936f);
	__VERIFIER_assume(tensor_input[0][10] >= -3.3564859131746307f && tensor_input[0][10] <= 3.329886939000958f);
	__VERIFIER_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__VERIFIER_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__VERIFIER_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
