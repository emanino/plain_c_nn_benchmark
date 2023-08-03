#include <math.h> 
 #include <string.h> 
#include "./include/k2c_include.h" 
#include "./include/k2c_tensor_include.h" 

 


void hop_tanh_w4_r1(k2c_tensor* simple_rnn_31_input_input, k2c_tensor* simple_rnn_31_output) { 

int simple_rnn_31_go_backwards = 0;
int simple_rnn_31_return_sequences = 1;
float simple_rnn_31_fwork[8] = {0}; 
float simple_rnn_31_state[4] = {0}; 
float simple_rnn_31_kernel_array[16] = {
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_31_kernel = {&simple_rnn_31_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_31_recurrent_kernel_array[16] = {
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_31_recurrent_kernel = {&simple_rnn_31_recurrent_kernel_array[0],2,16,{4,4,1,1,1}}; 
float simple_rnn_31_bias_array[4] = {0}; 
k2c_tensor simple_rnn_31_bias = {&simple_rnn_31_bias_array[0],1,4,{4,1,1,1,1}}; 

 
k2c_simpleRNN(simple_rnn_31_output,simple_rnn_31_input_input,simple_rnn_31_state,&simple_rnn_31_kernel, 
	&simple_rnn_31_recurrent_kernel,&simple_rnn_31_bias,simple_rnn_31_fwork, 
	simple_rnn_31_go_backwards,simple_rnn_31_return_sequences,k2c_tanh); 

 } 

void hop_tanh_w4_r1_initialize() { 

} 

void hop_tanh_w4_r1_terminate() { 

} 

