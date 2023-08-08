#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = nondet_float();
	tensor_input[0][1] = nondet_float();
	tensor_input[0][2] = nondet_float();
	tensor_input[0][3] = nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.2806474490426547f && tensor_input[0][0] <= -0.27793675095734527f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.05435324904265475f && tensor_input[0][1] <= -0.051642550957345254f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.026934419042654745f && tensor_input[0][2] <= -0.024223720957345252f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.3355960490426547f && tensor_input[0][3] <= -0.3328853509573453f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
