#include <math.h>

void entry(const float tensor_dense_input[1][8], float tensor_dense_2[1][8]);

int main()
{
	float tensor_dense_input[1][8];
	float tensor_dense_2[1][8];

	tensor_dense_input[0][0] = nondet_float();
	tensor_dense_input[0][1] = nondet_float();
	tensor_dense_input[0][2] = nondet_float();
	tensor_dense_input[0][3] = nondet_float();
	tensor_dense_input[0][4] = nondet_float();
	tensor_dense_input[0][5] = nondet_float();
	tensor_dense_input[0][6] = nondet_float();
	tensor_dense_input[0][7] = nondet_float();

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.5146426962119536f && tensor_dense_input[0][0] <= -0.38454497561438333f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -1.0069593688396157f && tensor_dense_input[0][1] <= -0.8768616482420454f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.454279256642393f && tensor_dense_input[0][2] <= -0.3241815360448228f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -0.5106164881982838f && tensor_dense_input[0][3] <= -0.38051876760071357f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.4349511397012149f && tensor_dense_input[0][4] <= 0.5650488602987851f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06504886029878511f && tensor_dense_input[0][5] <= 0.06504886029878511f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.5250761237065046f && tensor_dense_input[0][6] <= -0.39497840310893434f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.26094402849239995f && tensor_dense_input[0][7] <= -0.13084630789482976f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
