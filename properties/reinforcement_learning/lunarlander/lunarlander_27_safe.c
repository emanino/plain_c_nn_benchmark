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

	__ESBMC_assume(tensor_input[0][0] >= -0.66026027947777f && tensor_input[0][0] <= -0.60435112052223f);
	__ESBMC_assume(tensor_input[0][1] >= 0.09127355052223f && tensor_input[0][1] <= 0.14718270947777f);
	__ESBMC_assume(tensor_input[0][2] >= -0.0038324844777699978f && tensor_input[0][2] <= 0.052076674477769994f);
	__ESBMC_assume(tensor_input[0][3] >= -0.035432835677769996f && tensor_input[0][3] <= 0.02047632327777f);
	__ESBMC_assume(tensor_input[0][4] >= 0.06630987552223f && tensor_input[0][4] <= 0.12221903447777f);
	__ESBMC_assume(tensor_input[0][5] >= -0.06792289947777f && tensor_input[0][5] <= -0.012013740522230004f);
	__ESBMC_assume(tensor_input[0][6] >= 0.97204542052223f && tensor_input[0][6] <= 1.02795457947777f);
	__ESBMC_assume(tensor_input[0][7] >= 0.97204542052223f && tensor_input[0][7] <= 1.02795457947777f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
