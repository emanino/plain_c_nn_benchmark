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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2858820573630534f && tensor_input[0][0] <= -0.2726388626369466f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.8390224973630533f && tensor_input[0][1] <= -0.8257793026369467f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.032890632363053375f && tensor_input[0][2] <= -0.019647437636946624f);
	__VERIFIER_assume(tensor_input[0][3] >= 0.8065224026369466f && tensor_input[0][3] <= 0.8197655973630533f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
