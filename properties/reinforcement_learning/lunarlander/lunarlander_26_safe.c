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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7596881158570574f && tensor_input[0][0] <= -0.6992308041429425f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.01776487014294256f && tensor_input[0][1] <= 0.07822218185705744f);
	__VERIFIER_assume(tensor_input[0][2] >= 8.177014294255894f && tensor_input[0][2] <= 0.06053908185705745f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.07765323285705744f && tensor_input[0][3] <= -0.01719592114294256f);
	__VERIFIER_assume(tensor_input[0][4] >= -0.039961814857057444f && tensor_input[0][4] <= 0.02049549685705744f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.10178652585705744f && tensor_input[0][5] <= -0.04132921414294255f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9697713441429425f && tensor_input[0][6] <= 1.0302286558570575f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9697713441429425f && tensor_input[0][7] <= 1.0302286558570575f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][2] <= tensor_output[0][3])));

	return 0;
}
