#include <verifier_functions.h>

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

	__VERIFIER_assume(tensor_dense_input[0][0] >= -0.6461692332387257f && tensor_dense_input[0][0] <= -0.5081928373352405f);
	__VERIFIER_assume(tensor_dense_input[0][1] >= -0.5631057255197734f && tensor_dense_input[0][1] <= -0.42512932961628824f);
	__VERIFIER_assume(tensor_dense_input[0][2] >= -1.0689881979517426f && tensor_dense_input[0][2] <= -0.9310118020482574f);
	__VERIFIER_assume(tensor_dense_input[0][3] >= -0.6476233571793093f && tensor_dense_input[0][3] <= -0.5096469612758241f);
	__VERIFIER_assume(tensor_dense_input[0][4] >= 0.4310118020482575f && tensor_dense_input[0][4] <= 0.5689881979517427f);
	__VERIFIER_assume(tensor_dense_input[0][5] >= -0.06898819795174267f && tensor_dense_input[0][5] <= 0.06898819795174259f);
	__VERIFIER_assume(tensor_dense_input[0][6] >= 0.25060871910391225f && tensor_dense_input[0][6] <= 0.38858511500739745f);
	__VERIFIER_assume(tensor_dense_input[0][7] >= -0.4535110329154426f && tensor_dense_input[0][7] <= -0.3155346370119574f);

	entry(tensor_dense_input, tensor_dense_2);

	__VERIFIER_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}
