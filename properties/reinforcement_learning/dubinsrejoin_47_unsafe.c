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

	__ESBMC_assume(tensor_dense_input[0][0] >= -0.4736706660905919f && tensor_dense_input[0][0] <= -0.34325663630402176f);
	__ESBMC_assume(tensor_dense_input[0][1] >= -1.0505011543552791f && tensor_dense_input[0][1] <= -0.9200871245687089f);
	__ESBMC_assume(tensor_dense_input[0][2] >= -0.9733796672200788f && tensor_dense_input[0][2] <= -0.8429656374335087f);
	__ESBMC_assume(tensor_dense_input[0][3] >= -1.065207014893285f && tensor_dense_input[0][3] <= -0.9347929851067149f);
	__ESBMC_assume(tensor_dense_input[0][4] >= 0.43479298510671505f && tensor_dense_input[0][4] <= 0.5652070148932852f);
	__ESBMC_assume(tensor_dense_input[0][5] >= -0.0652070148932851f && tensor_dense_input[0][5] <= 0.06520701489328505f);
	__ESBMC_assume(tensor_dense_input[0][6] >= 0.2184191267912991f && tensor_dense_input[0][6] <= 0.34883315657786923f);
	__ESBMC_assume(tensor_dense_input[0][7] >= -0.5199001643927935f && tensor_dense_input[0][7] <= -0.38948613460622333f);

	entry(tensor_dense_input, tensor_dense_2);

	__ESBMC_assert(!((((tensor_dense_2[0][1] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][2] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][3] <= tensor_dense_2[0][0]) && (tensor_dense_2[0][4] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][6] <= tensor_dense_2[0][5]) && (tensor_dense_2[0][7] <= tensor_dense_2[0][5])))));

	return 0;
}