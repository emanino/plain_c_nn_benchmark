#include <math.h> 
 #include <string.h> 
#include "./include/k2c_include.h" 
#include "./include/k2c_tensor_include.h" 

 


void hop_softsign_w4_r3(k2c_tensor* simple_rnn_21_input_input, k2c_tensor* simple_rnn_21_output) { 

int simple_rnn_21_go_backwards = 0;
int simple_rnn_21_return_sequences = 1;
float simple_rnn_21_fwork[8] = {0}; 
float simple_rnn_21_state[4] = {0}; 
float simple_rnn_21_kernel_array[16] = {
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_21_kernel = {&simple_rnn_21_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_21_recurrent_kernel_array[16] = {
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_21_recurrent_kernel = {&simple_rnn_21_recurrent_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_21_bias_array[4] = {0}; 
k2c_tensor simple_rnn_21_bias = {&simple_rnn_21_bias_array[0],1,4,{4,1,1,1,1}}; 

 
k2c_simpleRNN(simple_rnn_21_output,simple_rnn_21_input_input,simple_rnn_21_state,&simple_rnn_21_kernel, 
	&simple_rnn_21_recurrent_kernel,&simple_rnn_21_bias,simple_rnn_21_fwork, 
	simple_rnn_21_go_backwards,simple_rnn_21_return_sequences,k2c_softsign); 

 } 

void hop_softsign_w4_r3_initialize() { 

} 

void hop_softsign_w4_r3_terminate() { 

} 

