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

	__VERIFIER_assume(tensor_input[0][0] >= -0.27827620297728844f && tensor_input[0][0] <= -0.26469859702271153f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.33043815702271156f && tensor_input[0][1] <= 0.3440157629772885f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.044072897977288444f && tensor_input[0][2] <= -0.030495292022711562f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.9262667429772885f && tensor_input[0][3] <= -0.9126891370227116f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
