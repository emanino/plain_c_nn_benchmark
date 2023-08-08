#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7781061477108797f && tensor_input[0][0] <= -0.7235333322891202f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.04463707228912019f && tensor_input[0][1] <= 0.0992098877108798f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.006613255710879805f && tensor_input[0][2] <= 0.047959559710879805f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.05496374471087981f && tensor_input[0][3] <= -0.00039092928912019473f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.14272337171087981f && tensor_input[0][4] <= -0.08815055628912019f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.0831969477108798f && tensor_input[0][5] <= -0.028624132289120197f);
	__VERIFIER_assume(tensor_input[0][6] >= -0.027286407710879805f && tensor_input[0][6] <= 0.027286407710879805f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9727135922891202f && tensor_input[0][7] <= 1.0272864077108799f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
