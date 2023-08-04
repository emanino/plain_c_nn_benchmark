#include <math.h>
#include "../keras2c/k2c_include.h"
#include "../hopfield_nets/hop_tanh_w16_r4.h"

int main()
{
    float input_array[64] = {0.0f}, output_array[64] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,64,{4,16,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,64,{4,16,1,1,1}};
	
	input_array[0] = nondet_float();
	input_array[1] = nondet_float();
	input_array[2] = nondet_float();
	input_array[3] = nondet_float();
	input_array[4] = nondet_float();
	input_array[5] = nondet_float();
	input_array[6] = nondet_float();
	input_array[7] = 1.0f;
	input_array[8] = 1.0f;
	input_array[9] = 1.0f;
	input_array[10] = 1.0f;
	input_array[11] = 1.0f;
	input_array[12] = 1.0f;
	input_array[13] = 1.0f;
	input_array[14] = 1.0f;
	input_array[15] = 1.0f;
	
	__ESBMC_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[1] >= -1.0f && input_array[1] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[2] >= -1.0f && input_array[2] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[3] >= -1.0f && input_array[3] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[4] >= -1.0f && input_array[4] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[5] >= -1.0f && input_array[5] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[6] >= -1.0f && input_array[6] <= 1.0f); /* full input domain */
	
	hop_tanh_w16_r4(&input_tensor,&output_tensor);
	
	__ESBMC_assert(isgreaterequal(output_array[62], 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
