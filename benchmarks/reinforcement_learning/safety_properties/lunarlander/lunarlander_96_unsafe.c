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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7596896658406525f && tensor_input[0][0] <= -0.6994774541593476f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.01839424915934757f && tensor_input[0][1] <= 0.07860646084065243f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0010723888406524301f && tensor_input[0][2] <= 0.05913982284065243f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07742329084065243f && tensor_input[0][3] <= -0.017211079159347567f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.05151241415934757f && tensor_input[0][4] <= 0.11172462584065243f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.09505331584065244f && tensor_input[0][5] <= -0.034841104159347575f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9698938941593476f && tensor_input[0][6] <= 1.0301061058406524f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9698938941593476f && tensor_input[0][7] <= 1.0301061058406524f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
