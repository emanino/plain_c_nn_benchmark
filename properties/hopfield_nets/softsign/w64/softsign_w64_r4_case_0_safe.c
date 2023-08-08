#include <verifier_functions.h>

#include <math.h>
#include "../keras2c/k2c_include.h"
#include "../hopfield_nets/hop_softsign_w64_r4.h"

int main()
{
    float input_array[256] = {0.0f}, output_array[256] = {0.0f};
	k2c_tensor input_tensor = {&input_array[0],2,256,{4,64,1,1,1}};
	k2c_tensor output_tensor = {&output_array[0],2,256,{4,64,1,1,1}};
	
	input_array[0] = nondet_float();
	input_array[1] = nondet_float();
	input_array[2] = nondet_float();
	input_array[3] = nondet_float();
	input_array[4] = nondet_float();
	input_array[5] = nondet_float();
	input_array[6] = nondet_float();
	input_array[7] = nondet_float();
	input_array[8] = nondet_float();
	input_array[9] = nondet_float();
	input_array[10] = nondet_float();
	input_array[11] = nondet_float();
	input_array[12] = nondet_float();
	input_array[13] = nondet_float();
	input_array[14] = nondet_float();
	input_array[15] = nondet_float();
	input_array[16] = nondet_float();
	input_array[17] = nondet_float();
	input_array[18] = nondet_float();
	input_array[19] = nondet_float();
	input_array[20] = nondet_float();
	input_array[21] = nondet_float();
	input_array[22] = nondet_float();
	input_array[23] = nondet_float();
	input_array[24] = nondet_float();
	input_array[25] = nondet_float();
	input_array[26] = nondet_float();
	input_array[27] = nondet_float();
	input_array[28] = nondet_float();
	input_array[29] = nondet_float();
	input_array[30] = nondet_float();
	input_array[31] = 1.0f;
	input_array[32] = 1.0f;
	input_array[33] = 1.0f;
	input_array[34] = 1.0f;
	input_array[35] = 1.0f;
	input_array[36] = 1.0f;
	input_array[37] = 1.0f;
	input_array[38] = 1.0f;
	input_array[39] = 1.0f;
	input_array[40] = 1.0f;
	input_array[41] = 1.0f;
	input_array[42] = 1.0f;
	input_array[43] = 1.0f;
	input_array[44] = 1.0f;
	input_array[45] = 1.0f;
	input_array[46] = 1.0f;
	input_array[47] = 1.0f;
	input_array[48] = 1.0f;
	input_array[49] = 1.0f;
	input_array[50] = 1.0f;
	input_array[51] = 1.0f;
	input_array[52] = 1.0f;
	input_array[53] = 1.0f;
	input_array[54] = 1.0f;
	input_array[55] = 1.0f;
	input_array[56] = 1.0f;
	input_array[57] = 1.0f;
	input_array[58] = 1.0f;
	input_array[59] = 1.0f;
	input_array[60] = 1.0f;
	input_array[61] = 1.0f;
	input_array[62] = 1.0f;
	input_array[63] = 1.0f;
	
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
	__VERIFIER_assume(input_array[15] >= -1.0f && input_array[15] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[16] >= -1.0f && input_array[16] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[17] >= -1.0f && input_array[17] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[18] >= -1.0f && input_array[18] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[19] >= -1.0f && input_array[19] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[20] >= -1.0f && input_array[20] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[21] >= -1.0f && input_array[21] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[22] >= -1.0f && input_array[22] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[23] >= -1.0f && input_array[23] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[24] >= -1.0f && input_array[24] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[25] >= -1.0f && input_array[25] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[26] >= -1.0f && input_array[26] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[27] >= -1.0f && input_array[27] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[28] >= -1.0f && input_array[28] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[29] >= -1.0f && input_array[29] <= 1.0f); /* full input domain */
	__VERIFIER_assume(input_array[30] >= -1.0f && input_array[30] <= 1.0f); /* full input domain */
	
	hop_softsign_w64_r4(&input_tensor,&output_tensor);
	
	__VERIFIER_assert(isgreaterequal(output_array[254], 0.0f), ""); /* Expected result: verification successful */

    return 0;
}
