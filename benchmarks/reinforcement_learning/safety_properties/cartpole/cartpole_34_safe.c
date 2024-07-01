#include <verifier_functions.h>

#include <math.h>

void entry(const float tensor_input[1][4], float tensor_output[1][2]);

int main()
{
	float tensor_input[1][4];
	float tensor_output[1][2];

	tensor_input[0][0] = __VERIFIER_nondet_float();
	tensor_input[0][1] = __VERIFIER_nondet_float();
	tensor_input[0][2] = __VERIFIER_nondet_float();
	tensor_input[0][3] = __VERIFIER_nondet_float();

	__VERIFIER_assume(tensor_input[0][0] >= -0.4257297624525585f && tensor_input[0][0] <= -0.4015650375474415f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.8721008075474415f && tensor_input[0][1] <= 0.8962655324525586f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.11996634245255852f && tensor_input[0][2] <= -0.09580161754744149f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.2701069624525585f && tensor_input[0][3] <= -1.2459422375474414f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
