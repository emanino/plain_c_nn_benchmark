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
	__VERIFIER_assume(tensor_input[0][2] >= -4.70567364696052f && tensor_input[0][2] <= 4.713524824052456f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__VERIFIER_assume(tensor_input[0][4] >= -1.376651562650054f && tensor_input[0][4] <= 5.195179481948719f);
	__VERIFIER_assume(tensor_input[0][5] >= -4.682357045665843f && tensor_input[0][5] <= 4.748858981963619f);
	__VERIFIER_assume(tensor_input[0][6] >= -4.704947998087309f && tensor_input[0][6] <= 4.693443099890087f);
	__VERIFIER_assume(tensor_input[0][7] >= -4.789876244936825f && tensor_input[0][7] <= 4.779759238824299f);
	__VERIFIER_assume(tensor_input[0][8] >= -4.711698453428989f && tensor_input[0][8] <= 4.679913978248367f);
	__VERIFIER_assume(tensor_input[0][9] >= -4.750969386078381f && tensor_input[0][9] <= 4.748340828817344f);
	__VERIFIER_assume(tensor_input[0][10] >= -4.694677372527132f && tensor_input[0][10] <= 4.668078398353459f);
	__VERIFIER_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__VERIFIER_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__VERIFIER_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
