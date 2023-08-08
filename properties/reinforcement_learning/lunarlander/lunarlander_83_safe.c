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

	__VERIFIER_assume(tensor_input[0][0] >= -0.7629583420769198f && tensor_input[0][0] <= -0.6983400579230802f);
	__VERIFIER_assume(tensor_input[0][1] >= 0.019368667923080195f && tensor_input[0][1] <= 0.08398695207691981f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.0421730720769198f && tensor_input[0][2] <= 0.022445212076919803f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.005097008076919804f && tensor_input[0][3] <= 0.0595212760769198f);
	__VERIFIER_assume(tensor_input[0][4] >= 0.014042957923080197f && tensor_input[0][4] <= 0.0786612420769198f);
	__VERIFIER_assume(tensor_input[0][5] >= -0.026578215076919803f && tensor_input[0][5] <= 0.0380400690769198f);
	__VERIFIER_assume(tensor_input[0][6] >= 0.9676908579230802f && tensor_input[0][6] <= 1.0323091420769197f);
	__VERIFIER_assume(tensor_input[0][7] >= 0.9676908579230802f && tensor_input[0][7] <= 1.0323091420769197f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][3] <= tensor_output[0][2])));

	return 0;
}
