#include <math.h>
#include "../keras2c/k2c_include.h"
#include "../hopfield_nets/hop_softsign_w8_r4.h"

int main()
{
    float input_array[32] = {0.0f}, output_array[32] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,32,{4,8,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,32,{4,8,1,1,1}};
	
	input_array[0] = nondet_float();
	input_array[1] = nondet_float();
	input_array[2] = nondet_float();
	input_array[3] = 1.0f;
	input_array[4] = 1.0f;
	input_array[5] = 1.0f;
	input_array[6] = 1.0f;
	input_array[7] = 1.0f;
	
	__ESBMC_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[1] >= -1.0f && input_array[1] <= 1.0f); /* full input domain */
	__ESBMC_assume(input_array[2] >= -1.0f && input_array[2] <= 1.0f); /* full input domain */
	
	hop_softsign_w8_r4(&input_tensor,&output_tensor);
	
	__ESBMC_assert(isgreaterequal(output_array[31], 0.88f), ""); /* Expected result: verification failure */

    return 0;
}
