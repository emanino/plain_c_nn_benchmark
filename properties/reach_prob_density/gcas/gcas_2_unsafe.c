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
	__VERIFIER_assume(tensor_input[0][2] >= -3.2508292688354636f && tensor_input[0][2] <= 3.2586804459273995f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.7108058693099715f && tensor_input[0][3] <= 1.7638442067420586f);
	__VERIFIER_assume(tensor_input[0][4] >= -1.503012008611706f && tensor_input[0][4] <= 5.195179481948719f);
	__VERIFIER_assume(tensor_input[0][5] >= -3.225656493181992f && tensor_input[0][5] <= 3.292158429479768f);
	__VERIFIER_assume(tensor_input[0][6] >= -3.253317427355474f && tensor_input[0][6] <= 3.2418125291582522f);
	__VERIFIER_assume(tensor_input[0][7] >= -3.311796084814807f && tensor_input[0][7] <= 3.3016790787022816f);
	__VERIFIER_assume(tensor_input[0][8] >= -3.2611148830961953f && tensor_input[0][8] <= 3.229330407915573f);
	__VERIFIER_assume(tensor_input[0][9] >= -3.2837513308757806f && tensor_input[0][9] <= 3.281122773614744f);
	__VERIFIER_assume(tensor_input[0][10] >= -3.248550864104737f && tensor_input[0][10] <= 3.221951889931064f);
	__VERIFIER_assume(tensor_input[0][11] >= -5.117915489174584f && tensor_input[0][11] <= 1.7230633312097163f);
	__VERIFIER_assume(tensor_input[0][12] >= -1.7504824551751277f && tensor_input[0][12] <= 1.7192793482457187f);
	__VERIFIER_assume(tensor_input[0][13] >= 0.0f && tensor_input[0][13] <= 3.5f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][12] <= -2.2838113986655717) && (tensor_output[0][0] >= -0.0)));

	return 0;
}
