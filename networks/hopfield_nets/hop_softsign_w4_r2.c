#include <math.h> 
 #include <string.h> 
#include "k2c_include.h" 
#include "k2c_tensor_include.h" 

 


void hop_softsign_w4_r2(k2c_tensor* simple_rnn_7_input_input, k2c_tensor* simple_rnn_7_output) { 

int simple_rnn_7_go_backwards = 0;
int simple_rnn_7_return_sequences = 1;
float simple_rnn_7_fwork[8] = {0}; 
float simple_rnn_7_state[4] = {0}; 
float simple_rnn_7_kernel_array[16] = {
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_7_kernel = {&simple_rnn_7_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_7_recurrent_kernel_array[16] = {
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_7_recurrent_kernel = {&simple_rnn_7_recurrent_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_7_bias_array[4] = {0}; 
k2c_tensor simple_rnn_7_bias = {&simple_rnn_7_bias_array[0],1,4,{4,1,1,1,1}}; 

 
k2c_simpleRNN(simple_rnn_7_output,simple_rnn_7_input_input,simple_rnn_7_state,&simple_rnn_7_kernel, 
	&simple_rnn_7_recurrent_kernel,&simple_rnn_7_bias,simple_rnn_7_fwork, 
	simple_rnn_7_go_backwards,simple_rnn_7_return_sequences,k2c_softsign); 

 } 

void hop_softsign_w4_r2_initialize() { 

} 

void hop_softsign_w4_r2_terminate() { 

} 

