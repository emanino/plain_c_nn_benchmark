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

	__VERIFIER_assume(tensor_input[0][0] >= -0.2756855973456875f && tensor_input[0][0] <= -0.2608557426543125f);
	__VERIFIER_assume(tensor_input[0][1] >= -0.2564051073456875f && tensor_input[0][1] <= -0.24157525265431254f);
	__VERIFIER_assume(tensor_input[0][2] >= -0.025460287345687477f && tensor_input[0][2] <= -0.010630432654312521f);
	__VERIFIER_assume(tensor_input[0][3] >= -0.029694082345687475f && tensor_input[0][3] <= -0.01486422765431252f);

	entry(tensor_input, tensor_output);

	__VERIFIER_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
