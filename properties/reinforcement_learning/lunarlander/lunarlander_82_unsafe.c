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

	__VERIFIER_assume(tensor_input[0][0] >= -0.6748165983146127f && tensor_input[0][0] <= -0.5724243016853873f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.03197995168538733f && tensor_input[0][1] <= 0.13437224831461267f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.09313152531461268f && tensor_input[0][2] <= 0.00926077131461267f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.023315509314612674f && tensor_input[0][3] <= 0.07907678731461268f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.04738191168538732f && tensor_input[0][4] <= 0.14977420831461266f);
	__VERIFIER_assume(tensor_input[0][5] >= 0.10201406168538735f && tensor_input[0][5] <= 0.20440635831461268f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9488038516853873f && tensor_input[0][6] <= 1.0511961483146126f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9488038516853873f && tensor_input[0][7] <= 1.0511961483146126f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
