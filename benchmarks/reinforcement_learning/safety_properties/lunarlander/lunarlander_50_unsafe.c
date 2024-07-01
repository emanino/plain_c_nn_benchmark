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

	__VERIFIER_assume(tensor_input[0][0] >= -0.9343331534796633f && tensor_input[0][0] <= -0.8607790465203367f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.023647903520336647f && tensor_input[0][1] <= 0.09720201047966336f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.02151774152033665f && tensor_input[0][2] <= 0.09507184847966335f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.05361965947966335f && tensor_input[0][3] <= 0.019934447479663355f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.4456523134796634f && tensor_input[0][4] <= -0.37209820652033665f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.03677705247508605f && tensor_input[0][5] <= 0.03677705448424066f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9632229465203367f && tensor_input[0][6] <= 1.0367770534796634f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9632229465203367f && tensor_input[0][7] <= 1.0367770534796634f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
