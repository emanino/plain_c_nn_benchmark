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

	__VERIFIER_assume(tensor_input[0][0] >= -0.6673255483767447f && tensor_input[0][0] <= -0.5782269916232553f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.038217336623255264f && tensor_input[0][1] <= 0.12731589337674473f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.03551231237674474f && tensor_input[0][2] <= 0.05358624437674474f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.012713498376744736f && tensor_input[0][3] <= 0.07638505837674474f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.13607152837674474f && tensor_input[0][4] <= -0.04697297162325526f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.13066197162325527f && tensor_input[0][5] <= 0.21976052837674476f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9554507216232553f && tensor_input[0][6] <= 1.0445492783767447f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9554507216232553f && tensor_input[0][7] <= 1.0445492783767447f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
