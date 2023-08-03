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

	__ESBMC_assume(tensor_input[0][0] >= -0.2756855973456875f && tensor_input[0][0] <= -0.2608557426543125f);
	__ESBMC_assume(tensor_input[0][1] >= -0.2564051073456875f && tensor_input[0][1] <= -0.24157525265431254f);
	__ESBMC_assume(tensor_input[0][2] >= -0.025460287345687477f && tensor_input[0][2] <= -0.010630432654312521f);
	__ESBMC_assume(tensor_input[0][3] >= -0.029694082345687475f && tensor_input[0][3] <= -0.01486422765431252f);

	entry(tensor_input, tensor_output);

	__ESBMC_assert(!((tensor_output[0][1] <= tensor_output[0][0])));

	return 0;
}
