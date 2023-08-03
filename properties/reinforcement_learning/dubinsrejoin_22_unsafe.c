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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.3934410356900916f && tensor_dense_input[0][0] <= -0.26504495735745137f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -0.9378338693971162f && tensor_dense_input[0][1] <= -0.8094377910644761f);
	__ESBMC_assume(tensor_dense_input[0][2] >= 0.033431867327821954f && tensor_dense_input[0][2] <= 0.16182794566046216f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.0641980391663202f && tensor_dense_input[0][3] <= -0.9358019608336798f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43580196083368f && tensor_dense_input[0][4] <= 0.5641980391663202f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.06419803916632018f && tensor_dense_input[0][5] <= 0.06419803916632004f);
	__ESBMC_assume(tensor_dense_input[0][6] >= -0.05216909753965952f && tensor_dense_input[0][6] <= 0.0762269807929807f);
	__ESBMC_assume(tensor_dense_input[0][7] >= 0.43565724445419185f && tensor_dense_input[0][7] <= 0.5640533227868321f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][0] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][1] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][3]) && (tensor_dense_2[0][5] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][4]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][4])))));

	return 0;
}
