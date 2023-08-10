#include <verifier_functions.h>

#include <math.h> 
 #include <string.h> 
#include <keras2c/k2c_include.h> 
#include <keras2c/k2c_tensor_include.h> 

 


void hop_tanh_w16_r1(k2c_tensor* simple_rnn_29_input_input, k2c_tensor* simple_rnn_29_output) { 

int simple_rnn_29_go_backwards = 0;
int simple_rnn_29_return_sequences = 1;
float simple_rnn_29_fwork[32] = {0}; 
float simple_rnn_29_state[16] = {0}; 
float simple_rnn_29_kernel_array[256] = {
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+1.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,+0.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_29_kernel = {&simple_rnn_29_kernel_array[0],2,256,{16,16, 1, 1, 1}}; 
float simple_rnn_29_recurrent_kernel_array[256] = {
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,+1.00000000e+00f,
+1.00000000e+00f,}; 
k2c_tensor simple_rnn_29_recurrent_kernel = {&simple_rnn_29_recurrent_kernel_array[0],2,256,{16,16, 1, 1, 1}}; 
float simple_rnn_29_bias_array[16] = {0}; 
k2c_tensor simple_rnn_29_bias = {&simple_rnn_29_bias_array[0],1,16,{16, 1, 1, 1, 1}}; 

 
k2c_simpleRNN(simple_rnn_29_output,simple_rnn_29_input_input,simple_rnn_29_state,&simple_rnn_29_kernel, 
	&simple_rnn_29_recurrent_kernel,&simple_rnn_29_bias,simple_rnn_29_fwork, 
	simple_rnn_29_go_backwards,simple_rnn_29_return_sequences,k2c_tanh); 

 } 

void hop_tanh_w16_r1_initialize() { 

} 

void hop_tanh_w16_r1_terminate() { 

} 

