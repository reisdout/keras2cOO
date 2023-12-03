#include <math.h> 
 #include <string.h> 
#include "./include/k2c_include.h" 
#include "./include/k2c_tensor_include.h" 

 


void keras2c_model(k2c_tensor* lstm_24_input_1_input, k2c_tensor* client_0_13_output) { 

float lstm_24_output_array[9] = {0}; 
k2c_tensor lstm_24_1_output = {&lstm_24_output_array[0],2,9,{3,3,1,1,1}}; 
float lstm_24_fwork[24] = {0}; 
int lstm_24_go_backwards = 0;
int lstm_24_return_sequences = 1;
float lstm_24_state[6] = {0}; 
float lstm_24_kernel_array[36] = {
+6.65799737e-01f,+1.50157297e+00f,+4.06030750e+00f,-6.47513986e-01f,+1.33494186e+00f,
+4.44655085e+00f,+2.05832624e+00f,+1.59611249e+00f,+2.25419617e+00f,-2.95792967e-01f,
+2.53720939e-01f,+4.02951300e-01f,-2.91545272e-01f,+8.24735940e-01f,+9.38223824e-02f,
+8.82028416e-03f,+6.85749710e-01f,-7.13573337e-01f,-9.95516926e-02f,-3.33011532e+00f,
-1.16874032e-01f,+3.29514965e-02f,-1.25136268e+00f,+2.98025198e-02f,+9.65796053e-01f,
-9.41047192e-01f,+8.25686753e-01f,-5.31542158e+00f,+3.02041709e-01f,+5.06732321e+00f,
-2.62783790e+00f,+4.46585603e-02f,+2.47677898e+00f,+1.26810288e+00f,+1.04488289e+00f,
+2.58962131e+00f,}; 
k2c_tensor lstm_24_kernel = {&lstm_24_kernel_array[0],2,36,{12, 3, 1, 1, 1}}; 
float lstm_24_recurrent_kernel_array[36] = {
+1.96960521e+00f,+1.64175808e+00f,+2.75920153e+00f,-8.82189941e+00f,-6.19097710e-01f,
-8.90906811e+00f,+5.16270876e-01f,+5.34702480e-01f,+1.94431758e+00f,-3.11937541e-01f,
+1.41555238e+00f,-1.48578668e+00f,+1.14860523e+00f,-7.41930664e-01f,+9.76558402e-02f,
-5.79043090e-01f,+1.99073642e-01f,-3.05554897e-01f,-1.02687024e-01f,-2.13730955e+00f,
-2.65853014e-02f,+3.55196834e-01f,+1.23844457e+00f,+3.33002567e-01f,-1.16666958e-01f,
+1.21076323e-01f,-3.75683904e-01f,+2.71782488e-01f,+5.30053854e-01f,+3.02667427e+00f,
-7.17021823e-01f,-1.11884415e+00f,-7.14225721e+00f,+1.55547354e-02f,-1.00918347e-02f,
+5.91783345e-01f,}; 
k2c_tensor lstm_24_recurrent_kernel = {&lstm_24_recurrent_kernel_array[0],2,36,{12, 3, 1, 1, 1}}; 
float lstm_24_bias_array[12] = {
+1.41935158e+00f,+1.36830413e+00f,+2.25607133e+00f,-2.78940916e-01f,+1.68839455e+00f,
+3.55071723e-01f,-5.48472106e-01f,-4.42936152e-01f,-4.30338115e-01f,+9.50440288e-01f,
+1.08839166e+00f,+2.83765531e+00f,}; 
k2c_tensor lstm_24_bias = {&lstm_24_bias_array[0],1,12,{12, 1, 1, 1, 1}}; 

 
float lstm_25_output_array[2] = {0}; 
k2c_tensor lstm_25_1_output = {&lstm_25_output_array[0],1,2,{2,1,1,1,1}}; 
float lstm_25_fwork[16] = {0}; 
int lstm_25_go_backwards = 0;
int lstm_25_return_sequences = 0;
float lstm_25_state[4] = {0}; 
float lstm_25_kernel_array[24] = {
-1.67313838e+00f,+1.15210843e+00f,-8.89813483e-01f,-3.09778333e+00f,-2.74562073e+00f,
-5.17053008e-01f,+1.97810829e+00f,+4.12558556e+00f,+4.15888429e-02f,-1.37617597e-02f,
-2.79069734e+00f,+1.76597166e+00f,-9.05368805e+00f,+8.30631733e+00f,+5.06540528e-03f,
+3.31808534e-03f,-3.45221162e+00f,+2.64517283e+00f,-2.55304217e-01f,+2.60019803e+00f,
-1.83134007e+00f,-3.16676331e+00f,-1.84225750e+00f,+9.70886648e-01f,}; 
k2c_tensor lstm_25_kernel = {&lstm_25_kernel_array[0],2,24,{12, 2, 1, 1, 1}}; 
float lstm_25_recurrent_kernel_array[16] = {
-1.85857987e+00f,-9.70237970e-01f,+2.91057229e+00f,+2.51203108e+00f,-1.28049493e-01f,
+2.53143311e-01f,-9.22986746e-01f,-1.05562377e+00f,-3.01007986e-01f,-1.32479385e-01f,
+4.16269712e-02f,-4.88986641e-01f,-2.58337712e+00f,-8.55689049e-01f,+3.08314013e+00f,
+2.60398126e+00f,}; 
k2c_tensor lstm_25_recurrent_kernel = {&lstm_25_recurrent_kernel_array[0],2,16,{8,2,1,1,1}}; 
float lstm_25_bias_array[8] = {
+2.98111320e+00f,+4.81175041e+00f,-3.95189255e-01f,-3.93679775e-02f,+1.48573490e-02f,
-1.44399107e-02f,+3.61033511e+00f,+4.20342970e+00f,}; 
k2c_tensor lstm_25_bias = {&lstm_25_bias_array[0],1,8,{8,1,1,1,1}}; 

 
float client_0_kernel_array[2] = {
-7.83691978e+00f,+8.29816055e+00f,}; 
k2c_tensor client_0_kernel = {&client_0_kernel_array[0],2,2,{2,1,1,1,1}}; 
float client_0_bias_array[1] = {
-6.51536584e-02f,}; 
k2c_tensor client_0_bias = {&client_0_bias_array[0],1,1,{1,1,1,1,1}}; 
float client_0_fwork[4] = {0}; 

 
k2c_lstm(&lstm_24_1_output,lstm_24_input_1_input,lstm_24_state,&lstm_24_kernel, 
	&lstm_24_recurrent_kernel,&lstm_24_bias,lstm_24_fwork, 
	lstm_24_go_backwards,lstm_24_return_sequences, 
	k2c_sigmoid,k2c_tanh); 
k2c_tensor dropout_24_1_output; 
dropout_24_1_output.ndim = lstm_24_1_output.ndim; // copy data into output struct 
dropout_24_1_output.numel = lstm_24_1_output.numel; 
memcpy(dropout_24_1_output.shape,lstm_24_1_output.shape,K2C_MAX_NDIM*sizeof(size_t));  
dropout_24_1_output.array = &lstm_24_1_output.array[0]; // rename for clarity 
k2c_lstm(&lstm_25_1_output,&dropout_24_1_output,lstm_25_state,&lstm_25_kernel, 
	&lstm_25_recurrent_kernel,&lstm_25_bias,lstm_25_fwork, 
	lstm_25_go_backwards,lstm_25_return_sequences, 
	k2c_sigmoid,k2c_tanh); 
k2c_tensor dropout_25_1_output; 
dropout_25_1_output.ndim = lstm_25_1_output.ndim; // copy data into output struct 
dropout_25_1_output.numel = lstm_25_1_output.numel; 
memcpy(dropout_25_1_output.shape,lstm_25_1_output.shape,K2C_MAX_NDIM*sizeof(size_t));  
dropout_25_1_output.array = &lstm_25_1_output.array[0]; // rename for clarity 
k2c_dense(client_0_13_output,&dropout_25_1_output,&client_0_kernel, 
	&client_0_bias,k2c_sigmoid,client_0_fwork); 

 } 

void keras2c_model_initialize() { 

} 

void keras2c_model_terminate() { 

} 

