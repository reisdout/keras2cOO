#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "keras2c_model.h" 


float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
/*float test1_conv2d_22_input_1_input_array[9] = {
-1.19966212e+00f,-1.05412170e+00f,+4.32279602e-01f,+1.85256779e+00f,-2.61646320e-01f,
-3.58627720e-01f,-2.06028974e-01f,-8.23286025e-01f,+1.41803799e+00f,}; 
*/
float test1_conv2d_22_input_1_input_array[9] ={0.10858772,0.43363177,0.94129555,0.72319206,0.69356146,0.93117409,0.0556843,0.11762462,0.93522267};

k2c_tensor test1_conv2d_22_input_1_input = {&test1_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 

/*float keras_dense_45_1_test1_array[1] = {
+6.07801676e-01f,}; 
*/
float keras_dense_45_1_test1_array[1] = {
0.5328561,};

k2c_tensor keras_dense_45_1_test1 = {&keras_dense_45_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test1_array[1] = {0}; 
k2c_tensor c_dense_45_1_test1 = {&c_dense_45_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_conv2d_22_input_1_input_array[9] = {
+1.92574588e+00f,-1.24116105e+00f,+1.17822022e+00f,+5.21651144e-02f,+1.44301444e+00f,
+1.18781980e+00f,+2.85035149e-01f,-9.31800606e-02f,-1.36941515e+00f,}; 
k2c_tensor test2_conv2d_22_input_1_input = {&test2_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test2_array[1] = {
+5.03026724e-01f,}; 
k2c_tensor keras_dense_45_1_test2 = {&keras_dense_45_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test2_array[1] = {0}; 
k2c_tensor c_dense_45_1_test2 = {&c_dense_45_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_conv2d_22_input_1_input_array[9] = {
-4.63311753e-01f,+1.92242439e+00f,+6.10329632e-01f,+1.55786904e+00f,+1.74237708e-01f,
+1.09424659e+00f,-1.28871416e+00f,+1.58909880e+00f,-1.57044375e+00f,}; 
k2c_tensor test3_conv2d_22_input_1_input = {&test3_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test3_array[1] = {
+4.78802741e-01f,}; 
k2c_tensor keras_dense_45_1_test3 = {&keras_dense_45_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test3_array[1] = {0}; 
k2c_tensor c_dense_45_1_test3 = {&c_dense_45_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_conv2d_22_input_1_input_array[9] = {
-2.94264208e-01f,+9.20437635e-02f,-1.02804929e+00f,-1.15416753e+00f,-6.08272185e-02f,
-1.29485392e+00f,+1.79310688e+00f,+3.83204748e-01f,+1.25245422e+00f,}; 
k2c_tensor test4_conv2d_22_input_1_input = {&test4_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test4_array[1] = {
+4.35943127e-01f,}; 
k2c_tensor keras_dense_45_1_test4 = {&keras_dense_45_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test4_array[1] = {0}; 
k2c_tensor c_dense_45_1_test4 = {&c_dense_45_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_conv2d_22_input_1_input_array[9] = {
+6.94849432e-01f,+1.91436748e+00f,-2.90089387e-01f,-7.14938036e-01f,-1.25751369e+00f,
+1.20195460e+00f,-1.93039463e+00f,+1.06690704e+00f,-1.99760409e+00f,}; 
k2c_tensor test5_conv2d_22_input_1_input = {&test5_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test5_array[1] = {
+5.54057002e-01f,}; 
k2c_tensor keras_dense_45_1_test5 = {&keras_dense_45_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test5_array[1] = {0}; 
k2c_tensor c_dense_45_1_test5 = {&c_dense_45_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_conv2d_22_input_1_input_array[9] = {
+2.14139871e-01f,-9.27256405e-01f,+1.14680422e+00f,+1.28884895e+00f,+1.71786241e+00f,
+1.69664127e+00f,-9.06521293e-01f,+6.48776394e-01f,-1.93653479e+00f,}; 
k2c_tensor test6_conv2d_22_input_1_input = {&test6_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test6_array[1] = {
+4.94200081e-01f,}; 
k2c_tensor keras_dense_45_1_test6 = {&keras_dense_45_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test6_array[1] = {0}; 
k2c_tensor c_dense_45_1_test6 = {&c_dense_45_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_conv2d_22_input_1_input_array[9] = {
-1.70710786e+00f,-1.05442032e+00f,+1.33033346e+00f,+5.73745982e-01f,+1.40576367e+00f,
+1.44367640e+00f,+3.30135243e-02f,+1.02713497e-01f,-1.83024876e+00f,}; 
k2c_tensor test7_conv2d_22_input_1_input = {&test7_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test7_array[1] = {
+5.02986431e-01f,}; 
k2c_tensor keras_dense_45_1_test7 = {&keras_dense_45_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test7_array[1] = {0}; 
k2c_tensor c_dense_45_1_test7 = {&c_dense_45_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_conv2d_22_input_1_input_array[9] = {
+1.57810019e+00f,-1.73368627e+00f,+1.88547512e+00f,-1.12805201e+00f,-1.24518943e+00f,
-1.36975025e+00f,-8.16291464e-01f,-1.15405204e+00f,-1.20699187e-01f,}; 
k2c_tensor test8_conv2d_22_input_1_input = {&test8_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test8_array[1] = {
+5.53220749e-01f,}; 
k2c_tensor keras_dense_45_1_test8 = {&keras_dense_45_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test8_array[1] = {0}; 
k2c_tensor c_dense_45_1_test8 = {&c_dense_45_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_conv2d_22_input_1_input_array[9] = {
+1.77047311e-02f,+9.97228256e-01f,+1.36057268e+00f,+1.07283706e+00f,+1.87507880e+00f,
+3.70560257e-01f,+1.50075280e-01f,+1.20818498e+00f,-1.59681210e+00f,}; 
k2c_tensor test9_conv2d_22_input_1_input = {&test9_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test9_array[1] = {
+4.50859725e-01f,}; 
k2c_tensor keras_dense_45_1_test9 = {&keras_dense_45_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test9_array[1] = {0}; 
k2c_tensor c_dense_45_1_test9 = {&c_dense_45_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_conv2d_22_input_1_input_array[9] = {
+8.43546206e-02f,+3.68404772e-01f,+1.64308666e+00f,-5.04809426e-01f,-5.25020741e-01f,
+4.51037370e-01f,-4.08855341e-01f,-9.50513849e-01f,-7.75327934e-01f,}; 
k2c_tensor test10_conv2d_22_input_1_input = {&test10_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test10_array[1] = {
+5.47271729e-01f,}; 
k2c_tensor keras_dense_45_1_test10 = {&keras_dense_45_1_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test10_array[1] = {0}; 
k2c_tensor c_dense_45_1_test10 = {&c_dense_45_1_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
keras2c_model_initialize(); 
clock_t t0 = clock(); 
keras2c_model(&test1_conv2d_22_input_1_input,&c_dense_45_1_test1); 
printf("1D? %zu\n", c_dense_45_1_test1.ndim);
printf("output?: %f\n",c_dense_45_1_test1.array[0]);


//===================================MRS=============================
/*
float test1_conv2d_22_input_1_input_array[9] = {
-1.19966212e+00f,-1.05412170e+00f,+4.32279602e-01f,+1.85256779e+00f,-2.61646320e-01f,
-3.58627720e-01f,-2.06028974e-01f,-8.23286025e-01f,+1.41803799e+00f,}; 
k2c_tensor test1_conv2d_22_input_1_input = {&test1_conv2d_22_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_45_1_test1_array[1] = {
+6.07801676e-01f,}; 
k2c_tensor keras_dense_45_1_test1 = {&keras_dense_45_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_45_1_test1_array[1] = {0}; 
k2c_tensor c_dense_45_1_test1 = {&c_dense_45_1_test1_array[0],1,1,{1,1,1,1,1}}; 

*/



k2c_tensor myInput,myOutput;

float kerasarray[] = {+3152505e-08f,+111155e-08f,+94939271e-08f,+10858772e-08f,+43363177e-08f,+94129555e-08f,+72319206e-08f,+69356146e-08f,+93117409e-08f};
float  kerasprevision = 0.46552965;

/*
[[[0.03152505]
  [0.00111155]
  [0.94939271]]

 [[0.10858772]
  [0.43363177]
  [0.94129555]]

 [[0.72319206]
  [0.69356146]
  [0.93117409]]]
*/



//float kerasarray[] = {0.10858772,0.43363177,0.94129555,0.72319206,0.69356146,0.93117409,0.0556843,0.11762462,0.93522267};
//float  kerasprevision =0.5328561;

//float kerasarray[] = {0.03460024,0.10421212,0.93522267,0.47518336,0.47817113,0.94534413,0.17758868,0.76031619,0.93319838};

//float  kerasprevision =0.5068154;

myInput.array = kerasarray;
myInput.ndim = 3;
myInput.numel = 9;
myInput.shape[0] = 3;
myInput.shape[1] = 3;
myInput.shape[2] = 1;
myInput.shape[3] = 1;
myInput.shape[4] = 1;


float myfloatOutput[1] = {0};
myOutput.array=myfloatOutput;
myOutput.ndim=1;
myOutput.numel=1;
myOutput.shape[0]=1;
myOutput.shape[1]=1;
myOutput.shape[2]=1;
myOutput.shape[3]=1;
myOutput.shape[4]=1;



keras2c_model(&myInput,&myOutput); 

printf("Certo? (%f,%f,%e)\n", kerasprevision, myOutput.array[0],fabsf(kerasprevision-myOutput.array[0]));

 



keras2c_model(&test2_conv2d_22_input_1_input,&c_dense_45_1_test2); 
keras2c_model(&test3_conv2d_22_input_1_input,&c_dense_45_1_test3); 
keras2c_model(&test4_conv2d_22_input_1_input,&c_dense_45_1_test4); 
keras2c_model(&test5_conv2d_22_input_1_input,&c_dense_45_1_test5); 
keras2c_model(&test6_conv2d_22_input_1_input,&c_dense_45_1_test6); 
keras2c_model(&test7_conv2d_22_input_1_input,&c_dense_45_1_test7); 
keras2c_model(&test8_conv2d_22_input_1_input,&c_dense_45_1_test8); 
keras2c_model(&test9_conv2d_22_input_1_input,&c_dense_45_1_test9); 
keras2c_model(&test10_conv2d_22_input_1_input,&c_dense_45_1_test10); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_45_1_test1,&c_dense_45_1_test1); 
printf("Erro calculo interno: %e",errors[0]);
errors[1] = maxabs(&keras_dense_45_1_test2,&c_dense_45_1_test2); 
errors[2] = maxabs(&keras_dense_45_1_test3,&c_dense_45_1_test3); 
errors[3] = maxabs(&keras_dense_45_1_test4,&c_dense_45_1_test4); 
errors[4] = maxabs(&keras_dense_45_1_test5,&c_dense_45_1_test5); 
errors[5] = maxabs(&keras_dense_45_1_test6,&c_dense_45_1_test6); 
errors[6] = maxabs(&keras_dense_45_1_test7,&c_dense_45_1_test7); 
errors[7] = maxabs(&keras_dense_45_1_test8,&c_dense_45_1_test8); 
errors[8] = maxabs(&keras_dense_45_1_test9,&c_dense_45_1_test9); 
errors[9] = maxabs(&keras_dense_45_1_test10,&c_dense_45_1_test10); 
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

