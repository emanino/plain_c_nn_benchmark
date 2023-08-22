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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4338470831422797f && tensor_input[0][0] <= 0.48725007685772026f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.1278917768577203f && tensor_input[0][1] <= -0.0744887831422797f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.00923510314227971f && tensor_input[0][2] <= 0.06263809685772029f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.0004288648577202882f && tensor_input[0][3] <= 0.05297412885772029f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
