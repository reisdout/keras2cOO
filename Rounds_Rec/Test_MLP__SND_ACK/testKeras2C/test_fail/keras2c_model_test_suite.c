#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "keras2c_model.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_input_layer_8_input_array[2] = {
+4.12266380e-01f,+8.12170981e-01f,}; 
k2c_tensor test1_input_layer_8_input = {&test1_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test1_array[1] = {
+9.97987151e-01f,}; 
k2c_tensor keras_keras_tensor_449_test1 = {&keras_keras_tensor_449_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test1_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test1 = {&c_keras_tensor_449_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_input_layer_8_input_array[2] = {
-1.00890255e+00f,-4.11359311e-01f,}; 
k2c_tensor test2_input_layer_8_input = {&test2_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test2_array[1] = {
+8.18800930e-11f,}; 
k2c_tensor keras_keras_tensor_449_test2 = {&keras_keras_tensor_449_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test2_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test2 = {&c_keras_tensor_449_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_input_layer_8_input_array[2] = {
-1.07839877e+00f,-1.03645878e-01f,}; 
k2c_tensor test3_input_layer_8_input = {&test3_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test3_array[1] = {
+5.16211873e-09f,}; 
k2c_tensor keras_keras_tensor_449_test3 = {&keras_keras_tensor_449_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test3_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test3 = {&c_keras_tensor_449_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_input_layer_8_input_array[2] = {
+1.10677574e-01f,-1.36573403e+00f,}; 
k2c_tensor test4_input_layer_8_input = {&test4_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test4_array[1] = {0}; 
k2c_tensor keras_keras_tensor_449_test4 = {&keras_keras_tensor_449_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test4_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test4 = {&c_keras_tensor_449_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_input_layer_8_input_array[2] = {
+1.08360850e+00f,+1.79349838e+00f,}; 
k2c_tensor test5_input_layer_8_input = {&test5_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test5_array[1] = {
+1.00000000e+00f,}; 
k2c_tensor keras_keras_tensor_449_test5 = {&keras_keras_tensor_449_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test5_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test5 = {&c_keras_tensor_449_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_input_layer_8_input_array[2] = {
-1.88911368e+00f,-1.20000391e+00f,}; 
k2c_tensor test6_input_layer_8_input = {&test6_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test6_array[1] = {
+3.29487833e-08f,}; 
k2c_tensor keras_keras_tensor_449_test6 = {&keras_keras_tensor_449_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test6_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test6 = {&c_keras_tensor_449_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_input_layer_8_input_array[2] = {
+8.56119848e-01f,-1.35475052e+00f,}; 
k2c_tensor test7_input_layer_8_input = {&test7_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test7_array[1] = {0}; 
k2c_tensor keras_keras_tensor_449_test7 = {&keras_keras_tensor_449_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test7_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test7 = {&c_keras_tensor_449_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_input_layer_8_input_array[2] = {
+1.78629108e+00f,-1.88868808e+00f,}; 
k2c_tensor test8_input_layer_8_input = {&test8_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test8_array[1] = {0}; 
k2c_tensor keras_keras_tensor_449_test8 = {&keras_keras_tensor_449_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test8_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test8 = {&c_keras_tensor_449_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_input_layer_8_input_array[2] = {
-2.71739432e-01f,+1.96222076e+00f,}; 
k2c_tensor test9_input_layer_8_input = {&test9_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test9_array[1] = {
+1.00000000e+00f,}; 
k2c_tensor keras_keras_tensor_449_test9 = {&keras_keras_tensor_449_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test9_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test9 = {&c_keras_tensor_449_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_input_layer_8_input_array[2] = {
-1.69599894e+00f,-8.52402410e-01f,}; 
k2c_tensor test10_input_layer_8_input = {&test10_input_layer_8_input_array[0],1,2,{2,1,1,1,1}}; 
float keras_keras_tensor_449_test10_array[1] = {
+5.64834490e-09f,}; 
k2c_tensor keras_keras_tensor_449_test10 = {&keras_keras_tensor_449_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_keras_tensor_449_test10_array[1] = {0}; 
k2c_tensor c_keras_tensor_449_test10 = {&c_keras_tensor_449_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
keras2c_model_initialize(); 
clock_t t0 = clock(); 
keras2c_model(&test1_input_layer_8_input,&c_keras_tensor_449_test1); 
keras2c_model(&test2_input_layer_8_input,&c_keras_tensor_449_test2); 
keras2c_model(&test3_input_layer_8_input,&c_keras_tensor_449_test3); 
keras2c_model(&test4_input_layer_8_input,&c_keras_tensor_449_test4); 
keras2c_model(&test5_input_layer_8_input,&c_keras_tensor_449_test5); 
keras2c_model(&test6_input_layer_8_input,&c_keras_tensor_449_test6); 
keras2c_model(&test7_input_layer_8_input,&c_keras_tensor_449_test7); 
keras2c_model(&test8_input_layer_8_input,&c_keras_tensor_449_test8); 
keras2c_model(&test9_input_layer_8_input,&c_keras_tensor_449_test9); 
keras2c_model(&test10_input_layer_8_input,&c_keras_tensor_449_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_keras_tensor_449_test1,&c_keras_tensor_449_test1); 
errors[1] = maxabs(&keras_keras_tensor_449_test2,&c_keras_tensor_449_test2); 
errors[2] = maxabs(&keras_keras_tensor_449_test3,&c_keras_tensor_449_test3); 
errors[3] = maxabs(&keras_keras_tensor_449_test4,&c_keras_tensor_449_test4); 
errors[4] = maxabs(&keras_keras_tensor_449_test5,&c_keras_tensor_449_test5); 
errors[5] = maxabs(&keras_keras_tensor_449_test6,&c_keras_tensor_449_test6); 
errors[6] = maxabs(&keras_keras_tensor_449_test7,&c_keras_tensor_449_test7); 
errors[7] = maxabs(&keras_keras_tensor_449_test8,&c_keras_tensor_449_test8); 
errors[8] = maxabs(&keras_keras_tensor_449_test9,&c_keras_tensor_449_test9); 
errors[9] = maxabs(&keras_keras_tensor_449_test10,&c_keras_tensor_449_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
keras2c_model_terminate(); 
if (maxerror > 1e-05) { 
return 1;} 
return 0;
} 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2){ 

    float x = 0; 

    float y = 0; 

    for(size_t i=0; i<tensor1->numel; i++){

    y = fabsf(tensor1->array[i]-tensor2->array[i]);
    if (y>x) {x=y;}}
    return x;}

