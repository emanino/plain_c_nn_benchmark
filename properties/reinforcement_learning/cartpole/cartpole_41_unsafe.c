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

	__VERIFIER_assume(tensor_input[0][0] >= -0.39008023207914894f && tensor_input[0][0] <= -0.37061230792085104f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.6816152379208511f && tensor_input[0][1] <= 0.7010831620791489f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.16651576207914892f && tensor_input[0][2] <= -0.14704783792085108f);
	__VERIFIER_assume(tensor_input[0][3] >= -1.030734062079149f && tensor_input[0][3] <= -1.011266137920851f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][0] <= tensor_output[0][1])));

	return 0;
}
