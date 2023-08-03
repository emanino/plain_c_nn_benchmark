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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.34020272006048163f && tensor_dense_input[0][0] <= -0.3182832729870613f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.8845955537675063f && tensor_dense_input[0][1] <= -0.862676106694086f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.0866701829574319f && tensor_dense_input[0][2] <= 0.10858963003085223f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.0109597235367103f && tensor_dense_input[0][3] <= -0.9890402764632898f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.48904027646328996f && tensor_dense_input[0][4] <= 0.5109597235367103f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.010959723536710245f && tensor_dense_input[0][5] <= 0.010959723536710103f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.0010692180899504154f && tensor_dense_input[0][6] <= 0.022988665163370763f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.4888955600838018f && tensor_dense_input[0][7] <= 0.5108150071572222f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
