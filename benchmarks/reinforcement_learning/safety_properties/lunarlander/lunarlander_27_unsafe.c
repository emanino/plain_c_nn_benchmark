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

	__VERIFIER_assume(tensor_input[0][0] >= -0.66026027947777f && tensor_input[0][0] <= -0.60435112052223f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.09127355052223f && tensor_input[0][1] <= 0.14718270947777f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0038324844777699978f && tensor_input[0][2] <= 0.052076674477769994f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.035432835677769996f && tensor_input[0][3] <= 0.02047632327777f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.06630987552223f && tensor_input[0][4] <= 0.12221903447777f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.06792289947777f && tensor_input[0][5] <= -0.012013740522230004f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.97204542052223f && tensor_input[0][6] <= 1.02795457947777f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.97204542052223f && tensor_input[0][7] <= 1.02795457947777f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
