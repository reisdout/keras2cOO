#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "keras2c_model.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_dense_68_input_1_input_array[3] = {
+4.51775948e-01f,-3.56429958e-01f,+9.93329312e-01f,}; 
k2c_tensor test1_dense_68_input_1_input = {&test1_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test1_array[1] = {
+9.48265851e-01f,}; 
k2c_tensor keras_dense_70_1_test1 = {&keras_dense_70_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test1_array[1] = {0}; 
k2c_tensor c_dense_70_1_test1 = {&c_dense_70_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_dense_68_input_1_input_array[3] = {
+1.90931978e+00f,+1.14131751e+00f,-1.23901988e+00f,}; 
k2c_tensor test2_dense_68_input_1_input = {&test2_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test2_array[1] = {0}; 
k2c_tensor keras_dense_70_1_test2 = {&keras_dense_70_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test2_array[1] = {0}; 
k2c_tensor c_dense_70_1_test2 = {&c_dense_70_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_dense_68_input_1_input_array[3] = {
-1.83673505e+00f,+1.30552177e-01f,-1.04633697e-01f,}; 
k2c_tensor test3_dense_68_input_1_input = {&test3_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test3_array[1] = {
+6.63303079e-10f,}; 
k2c_tensor keras_dense_70_1_test3 = {&keras_dense_70_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test3_array[1] = {0}; 
k2c_tensor c_dense_70_1_test3 = {&c_dense_70_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_dense_68_input_1_input_array[3] = {
-1.39397882e+00f,+7.00228111e-01f,-5.42151881e-01f,}; 
k2c_tensor test4_dense_68_input_1_input = {&test4_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test4_array[1] = {
+3.42496248e-15f,}; 
k2c_tensor keras_dense_70_1_test4 = {&keras_dense_70_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test4_array[1] = {0}; 
k2c_tensor c_dense_70_1_test4 = {&c_dense_70_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_dense_68_input_1_input_array[3] = {
+6.25895789e-01f,-1.38190018e+00f,+1.26922591e+00f,}; 
k2c_tensor test5_dense_68_input_1_input = {&test5_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test5_array[1] = {
+9.99982953e-01f,}; 
k2c_tensor keras_dense_70_1_test5 = {&keras_dense_70_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test5_array[1] = {0}; 
k2c_tensor c_dense_70_1_test5 = {&c_dense_70_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_dense_68_input_1_input_array[3] = {
+1.72473736e+00f,+1.98136322e+00f,-1.50407235e+00f,}; 
k2c_tensor test6_dense_68_input_1_input = {&test6_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test6_array[1] = {0}; 
k2c_tensor keras_dense_70_1_test6 = {&keras_dense_70_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test6_array[1] = {0}; 
k2c_tensor c_dense_70_1_test6 = {&c_dense_70_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_dense_68_input_1_input_array[3] = {
-1.22306879e+00f,-3.00461227e-02f,+3.57808545e-01f,}; 
k2c_tensor test7_dense_68_input_1_input = {&test7_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test7_array[1] = {
+2.73886212e-06f,}; 
k2c_tensor keras_dense_70_1_test7 = {&keras_dense_70_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test7_array[1] = {0}; 
k2c_tensor c_dense_70_1_test7 = {&c_dense_70_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_dense_68_input_1_input_array[3] = {
-1.73667832e-01f,-8.72971352e-01f,-7.88588221e-01f,}; 
k2c_tensor test8_dense_68_input_1_input = {&test8_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test8_array[1] = {0}; 
k2c_tensor keras_dense_70_1_test8 = {&keras_dense_70_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test8_array[1] = {0}; 
k2c_tensor c_dense_70_1_test8 = {&c_dense_70_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_dense_68_input_1_input_array[3] = {
-9.98092022e-01f,-6.14715123e-01f,-2.39690086e-01f,}; 
k2c_tensor test9_dense_68_input_1_input = {&test9_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test9_array[1] = {
+1.39618525e-12f,}; 
k2c_tensor keras_dense_70_1_test9 = {&keras_dense_70_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test9_array[1] = {0}; 
k2c_tensor c_dense_70_1_test9 = {&c_dense_70_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_dense_68_input_1_input_array[3] = {
+1.47401249e+00f,-4.48634071e-01f,-1.24697823e+00f,}; 
k2c_tensor test10_dense_68_input_1_input = {&test10_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test10_array[1] = {0}; 
k2c_tensor keras_dense_70_1_test10 = {&keras_dense_70_1_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test10_array[1] = {0}; 
k2c_tensor c_dense_70_1_test10 = {&c_dense_70_1_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
keras2c_model_initialize();
//===================================================================================

/***********************Linhas Guia**************************/
/* Para mais detalhes verificar na LSTM*/
/*float test1_dense_68_input_1_input_array[3] = {
+4.51775948e-01f,-3.56429958e-01f,+9.93329312e-01f,}; 
k2c_tensor test1_dense_68_input_1_input = {&test1_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
float keras_dense_70_1_test1_array[1] = {
+9.48265851e-01f,}; 
k2c_tensor keras_dense_70_1_test1 = {&keras_dense_70_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_70_1_test1_array[1] = {0}; 
k2c_tensor c_dense_70_1_test1 = {&c_dense_70_1_test1_array[0],1,1,{1,1,1,1,1}}; */

#define NUMTESTE 20

k2c_tensor myInput,myOutput;

float kerasarray[NUMTESTE][3] ={{0.34607658,0.8471641,0.88461536},
                                {0.07397943,0.05546552,0.9392713},
                                {0.03154556,0.00609445,0.88866395},
                                {0.03423448,0.00624618,0.9372469},
                                {0.24825948,0.23142174,0.9615384},
                                {0.03226006,0.06410623,0.8562753},
                                {0.05676125,0.11398052,0.9251012},
                                {0.3504803,0.34982705,0.92712545},
                                {0.5209555,0.6000636,0.95546556},
                                {0.03154682,0.03149462,0.93117404},
                                {0.4907967,0.47373784,0.93319833},
                                {0.13473004,0.12939872,0.8765182},
                                {0.38282362,0.23075421,0.9392713},
                                {0.358018,0.61572343,0.9919028},
                                {0.12006561,0.1534984,0.8825911},
                                {0.40851563,0.7163719,0.979757},
                                {0.5386587,0.50438213,0.9251012},
                                {0.15529582,0.64911336,0.8562753},
                                {0.03244964,0.00310354,0.9453441},
                                {0.8013233,0.84047633,0.8562753}
                                };




float  kerasprevision[NUMTESTE] = {0.08693514,
                                   0.96083295,
                                   0.25547132,
                                   0.9643034,
                                   0.9796477,
                                   0.0210398,
                                   0.90623903,
                                   0.50482726,
                                   0.8169838,
                                   0.94521517,
                                   0.3632805,
                                   0.05183066,
                                   0.60677016,
                                   0.9985879,
                                   0.10593946,
                                   0.9946059,
                                   0.15288067,
                                   0.03036362,
                                   0.98268235,
                                   0.00015479
                                   };





//float kerasarray[] = {0.10858772,0.43363177,0.94129555,0.72319206,0.69356146,0.93117409,0.0556843,0.11762462,0.93522267};
//float  kerasprevision =0.5328561;

//float kerasarray[] = {0.03460024,0.10421212,0.93522267,0.47518336,0.47817113,0.94534413,0.17758868,0.76031619,0.93319838};

//float  kerasprevision =0.5068154;

printf("###(  keras , keras2c,  erro  )\n");

for(int i=0; i<NUMTESTE;i++)
{

        myInput.array = kerasarray[i];
        myInput.ndim = 1;
        myInput.numel = 3;
        myInput.shape[0] = 3;
        myInput.shape[1] = 1;
        myInput.shape[2] = 1;  //k2c_tensor test1_dense_68_input_1_input = {&test1_dense_68_input_1_input_array[0],1,3,{3,1,1,1,1}}; 
        myInput.shape[3] = 1;
        myInput.shape[4] = 1;


        float myfloatOutput[1] = {0};
        myOutput.array=myfloatOutput;
        myOutput.ndim=1;
        myOutput.numel=1;
        myOutput.shape[0]=1;
        myOutput.shape[1]=1;
        myOutput.shape[2]=1;      // k2c_tensor c_dense_70_1_test1 = {&c_dense_70_1_test1_array[0],1,1,{1,1,1,1,1}}; 

        myOutput.shape[3]=1;
        myOutput.shape[4]=1;



        keras2c_model(&myInput,&myOutput); 

        printf("%3d(%f,%f,%e)\n", i,kerasprevision[i], myOutput.array[0],fabsf(kerasprevision[i]-myOutput.array[0]));

}



//===================================================================================




clock_t t0 = clock(); 
keras2c_model(&test1_dense_68_input_1_input,&c_dense_70_1_test1); 
keras2c_model(&test2_dense_68_input_1_input,&c_dense_70_1_test2); 
keras2c_model(&test3_dense_68_input_1_input,&c_dense_70_1_test3); 
keras2c_model(&test4_dense_68_input_1_input,&c_dense_70_1_test4); 
keras2c_model(&test5_dense_68_input_1_input,&c_dense_70_1_test5); 
keras2c_model(&test6_dense_68_input_1_input,&c_dense_70_1_test6); 
keras2c_model(&test7_dense_68_input_1_input,&c_dense_70_1_test7); 
keras2c_model(&test8_dense_68_input_1_input,&c_dense_70_1_test8); 
keras2c_model(&test9_dense_68_input_1_input,&c_dense_70_1_test9); 
keras2c_model(&test10_dense_68_input_1_input,&c_dense_70_1_test10); 

clock_t t1 = clock(); 
//printf("Average time over 10 tests: %e s \n", 
 //((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_70_1_test1,&c_dense_70_1_test1); 
errors[1] = maxabs(&keras_dense_70_1_test2,&c_dense_70_1_test2); 
errors[2] = maxabs(&keras_dense_70_1_test3,&c_dense_70_1_test3); 
errors[3] = maxabs(&keras_dense_70_1_test4,&c_dense_70_1_test4); 
errors[4] = maxabs(&keras_dense_70_1_test5,&c_dense_70_1_test5); 
errors[5] = maxabs(&keras_dense_70_1_test6,&c_dense_70_1_test6); 
errors[6] = maxabs(&keras_dense_70_1_test7,&c_dense_70_1_test7); 
errors[7] = maxabs(&keras_dense_70_1_test8,&c_dense_70_1_test8); 
errors[8] = maxabs(&keras_dense_70_1_test9,&c_dense_70_1_test9); 
errors[9] = maxabs(&keras_dense_70_1_test10,&c_dense_70_1_test10); 
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
//printf("Max absolute error for 10 tests: %e \n", maxerror);
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

