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

	__VERIFIER_assume(tensor_input[0][0] >= 0.4353032663189951f && tensor_input[0][0] <= 0.46647019368100495f);
	__VERIFIER_assume(tensor_input[0][1] >= -1.091545863681005f && tensor_input[0][1] <= -1.0603789363189953f);
	__VERIFIER_assume(tensor_input[0][2] >= 0.03691213631899508f && tensor_input[0][2] <= 0.06807906368100493f);
	__VERIFIER_assume(tensor_input[0][3] >= 1.456711936318995f && tensor_input[0][3] <= 1.4878788636810047f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
