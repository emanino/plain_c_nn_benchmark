#include <verifier_functions.h>

#include <math.h>
#include <keras2c/k2c_include.h>
#include <c_networks/softsign/w32/hop_softsign_w32_r3.h>

int main()
{
    float input_array[96] = {0.0f}, output_array[96] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,96,{3,32,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,96,{3,32,1,1,1}};
	
	input_array[0] = __VERIFIER_nondet_float();
	input_array[1] = __VERIFIER_nondet_float();
	input_array[2] = __VERIFIER_nondet_float();
	input_array[3] = __VERIFIER_nondet_float();
	input_array[4] = __VERIFIER_nondet_float();
	input_array[5] = __VERIFIER_nondet_float();
	input_array[6] = __VERIFIER_nondet_float();
	input_array[7] = __VERIFIER_nondet_float();
	input_array[8] = __VERIFIER_nondet_float();
	input_array[9] = __VERIFIER_nondet_float();
	input_array[10] = __VERIFIER_nondet_float();
	input_array[11] = __VERIFIER_nondet_float();
	input_array[12] = __VERIFIER_nondet_float();
	input_array[13] = __VERIFIER_nondet_float();
	input_array[14] = __VERIFIER_nondet_float();
	input_array[15] = 1.0f;
	input_array[16] = 1.0f;
	input_array[17] = 1.0f;
	input_array[18] = 1.0f;
	input_array[19] = 1.0f;
	input_array[20] = 1.0f;
	input_array[21] = 1.0f;
	input_array[22] = 1.0f;
	input_array[23] = 1.0f;
	input_array[24] = 1.0f;
	input_array[25] = 1.0f;
	input_array[26] = 1.0f;
	input_array[27] = 1.0f;
	input_array[28] = 1.0f;
	input_array[29] = 1.0f;
	input_array[30] = 1.0f;
	input_array[31] = 1.0f;
	
	__VERIFIER_assume(input_array[0] >= -1.0f && input_array[0] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[1] >= -1.0f && input_array[1] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[2] >= -1.0f && input_array[2] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[3] >= -1.0f && input_array[3] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[4] >= -1.0f && input_array[4] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[5] >= -1.0f && input_array[5] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[6] >= -1.0f && input_array[6] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[7] >= -1.0f && input_array[7] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[8] >= -1.0f && input_array[8] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[9] >= -1.0f && input_array[9] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[10] >= -1.0f && input_array[10] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[11] >= -1.0f && input_array[11] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[12] >= -1.0f && input_array[12] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[13] >= -1.0f && input_array[13] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[14] >= -1.0f && input_array[14] <= 1.0f); /* full input domain */
	
	hop_softsign_w32_r3(&input_tensor,&output_tensor);
	
	__VERIFIER_assert(isgreaterequal(output_array[65], 0.95f)); /* Expected result: verification failure */

    return 0;
}
