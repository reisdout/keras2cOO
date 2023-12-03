#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "keras2c_model.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_conv2d_30_input_1_input_array[9] = {
+6.74676460e-01f,-1.02925575e+00f,-9.56738780e-01f,+4.47297386e-01f,+1.01320697e-01f,
-1.78491033e+00f,+1.58164486e+00f,-1.30894961e+00f,+6.72843883e-01f,}; 
k2c_tensor test1_conv2d_30_input_1_input = {&test1_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test1_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test1 = {&keras_dense_61_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test1_array[1] = {0}; 
k2c_tensor c_dense_61_1_test1 = {&c_dense_61_1_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_conv2d_30_input_1_input_array[9] = {
-5.29888034e-01f,-1.47620289e+00f,-3.41705923e-01f,-1.92273063e+00f,-7.08568115e-01f,
-1.85543277e+00f,-1.06063713e+00f,+1.32391414e+00f,-1.17931718e+00f,}; 
k2c_tensor test2_conv2d_30_input_1_input = {&test2_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test2_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test2 = {&keras_dense_61_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test2_array[1] = {0}; 
k2c_tensor c_dense_61_1_test2 = {&c_dense_61_1_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_conv2d_30_input_1_input_array[9] = {
-1.54098204e+00f,+1.43783017e+00f,+8.74635371e-01f,+1.07418989e+00f,+5.54394120e-01f,
+5.68900440e-01f,-1.03072104e+00f,-6.15207956e-01f,-2.21810188e-01f,}; 
k2c_tensor test3_conv2d_30_input_1_input = {&test3_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test3_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test3 = {&keras_dense_61_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test3_array[1] = {0}; 
k2c_tensor c_dense_61_1_test3 = {&c_dense_61_1_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_conv2d_30_input_1_input_array[9] = {
+1.43572657e+00f,-1.92004781e+00f,+1.47959237e+00f,-1.32607385e+00f,-1.70378980e+00f,
-4.77634864e-01f,+1.77804500e-01f,+4.05965271e-01f,+1.52897754e+00f,}; 
k2c_tensor test4_conv2d_30_input_1_input = {&test4_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test4_array[1] = {
+1.00000000e+00f,}; 
k2c_tensor keras_dense_61_1_test4 = {&keras_dense_61_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test4_array[1] = {0}; 
k2c_tensor c_dense_61_1_test4 = {&c_dense_61_1_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_conv2d_30_input_1_input_array[9] = {
+6.50665746e-01f,+1.48250142e+00f,-1.40410784e+00f,+1.89662198e+00f,-7.23833232e-01f,
-2.10140462e-01f,+4.23216052e-02f,+1.37519887e+00f,+7.25216917e-01f,}; 
k2c_tensor test5_conv2d_30_input_1_input = {&test5_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test5_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test5 = {&keras_dense_61_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test5_array[1] = {0}; 
k2c_tensor c_dense_61_1_test5 = {&c_dense_61_1_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_conv2d_30_input_1_input_array[9] = {
-1.31813519e+00f,+1.53459976e+00f,-6.62125223e-01f,+1.63201801e+00f,-1.02440262e+00f,
-1.38139385e+00f,+7.42782948e-01f,+1.65013521e+00f,-8.23495916e-01f,}; 
k2c_tensor test6_conv2d_30_input_1_input = {&test6_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test6_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test6 = {&keras_dense_61_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test6_array[1] = {0}; 
k2c_tensor c_dense_61_1_test6 = {&c_dense_61_1_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_conv2d_30_input_1_input_array[9] = {
-1.98155759e+00f,-2.26066399e-01f,-9.15734623e-01f,-1.60115624e+00f,-1.41807505e+00f,
-3.50081483e-01f,+1.73181443e+00f,-1.83992438e+00f,+7.89699631e-01f,}; 
k2c_tensor test7_conv2d_30_input_1_input = {&test7_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test7_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test7 = {&keras_dense_61_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test7_array[1] = {0}; 
k2c_tensor c_dense_61_1_test7 = {&c_dense_61_1_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_conv2d_30_input_1_input_array[9] = {
-1.74207591e+00f,-1.91947737e+00f,-3.58765326e-01f,-1.42806219e-01f,-1.34354935e+00f,
-6.83127144e-01f,-1.00869087e+00f,-6.97548982e-01f,+1.22593527e+00f,}; 
k2c_tensor test8_conv2d_30_input_1_input = {&test8_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test8_array[1] = {
+1.00000000e+00f,}; 
k2c_tensor keras_dense_61_1_test8 = {&keras_dense_61_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test8_array[1] = {0}; 
k2c_tensor c_dense_61_1_test8 = {&c_dense_61_1_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_conv2d_30_input_1_input_array[9] = {
-3.04935139e-02f,+1.32216251e+00f,+1.11825789e+00f,+6.39898666e-01f,-1.82610819e+00f,
+1.91056458e+00f,+1.67000730e+00f,+1.88475793e-01f,-4.10470680e-01f,}; 
k2c_tensor test9_conv2d_30_input_1_input = {&test9_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test9_array[1] = {0}; 
k2c_tensor keras_dense_61_1_test9 = {&keras_dense_61_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test9_array[1] = {0}; 
k2c_tensor c_dense_61_1_test9 = {&c_dense_61_1_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_conv2d_30_input_1_input_array[9] = {
-3.93812914e-01f,-1.11570902e-01f,-1.99761208e+00f,+8.36024398e-01f,-1.30509461e+00f,
+1.77998619e+00f,-1.78809280e+00f,+7.66003994e-01f,+1.68036997e+00f,}; 
k2c_tensor test10_conv2d_30_input_1_input = {&test10_conv2d_30_input_1_input_array[0],3,9,{3,3,1,1,1}}; 
float keras_dense_61_1_test10_array[1] = {
+1.00000000e+00f,}; 
k2c_tensor keras_dense_61_1_test10 = {&keras_dense_61_1_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_dense_61_1_test10_array[1] = {0}; 
k2c_tensor c_dense_61_1_test10 = {&c_dense_61_1_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
keras2c_model_initialize(); 

//===================================================================================
#define NUMTESTE 20

k2c_tensor myInput,myOutput;

float kerasarray[NUMTESTE][9] ={{0.03154793,0.00112366,0.94129555,0.03210959,0.00352612,0.93319838,0.52058012,0.13857344,0.95748988},
                                {0.03210959,0.00352612,0.93319838,0.52058012,0.13857344,0.95748988,0.03806186,0.04001033,0.92105263},
                                {0.52058012,0.13857344,0.95748988,0.03806186,0.04001033,0.92105263,0.03202978,0.00544095,0.94534413},
                                {0.03806186,0.04001033,0.92105263,0.03202978,0.00544095,0.94534413,0.03154524,0.03148659,0.88663968},
                                {0.03202978,0.00544095,0.94534413,0.03154524,0.03148659,0.88663968,0.1935001 ,0.82663167,0.87449393},
                                {0.03154524,0.03148659,0.88663968,0.1935001 ,0.82663167,0.87449393,0.05678144,0.06272129,0.94129555},
                                {0.1935001 ,0.82663167,0.87449393,0.05678144,0.06272129,0.94129555,0.4547168 ,0.11150709,0.91902834},
                                {0.05678144,0.06272129,0.94129555,0.4547168 ,0.11150709,0.91902834,0.42593177,0.52146992,0.92712551},
                                {0.4547168 ,0.11150709,0.91902834,0.42593177,0.52146992,0.92712551,0.0315454 ,0.01511405,0.93117409},
                                {0.42593177,0.52146992,0.92712551,0.0315454 ,0.01511405,0.93117409,0.3803347 ,0.37767065,0.90283401},
                                {0.0315454 ,0.01511405,0.93117409,0.3803347 ,0.37767065,0.90283401,0.34185107,0.00917149,0.98178138},
                                {0.3803347 ,0.37767065,0.90283401,0.34185107,0.00917149,0.98178138,0.53748837,0.52376529,0.86639676},
                                {0.34185107,0.00917149,0.98178138,0.53748837,0.52376529,0.86639676,0.54620274,0.32750149,0.96153846},
                                {0.53748837,0.52376529,0.86639676,0.54620274,0.32750149,0.96153846,0.36449898,0.34639502,0.86032389},
                                {0.54620274,0.32750149,0.96153846,0.36449898,0.34639502,0.86032389,0.5396366 ,0.56015277,0.98582996},
                                {0.36449898,0.34639502,0.86032389,0.5396366 ,0.56015277,0.98582996,0.52864781,0.5469473 ,0.98987854},
                                {0.5396366 ,0.56015277,0.98582996,0.52864781,0.5469473 ,0.98987854,0.5348433 ,0.53157082,0.86234818},
                                {0.52864781,0.5469473 ,0.98987854,0.5348433 ,0.53157082,0.86234818,0.42493336,0.16594694,0.91902834},
                                {0.5348433 ,0.53157082,0.86234818,0.42493336,0.16594694,0.91902834,0.53746471,0.50812433,0.87044534},
                                {0.42493336,0.16594694,0.91902834,0.53746471,0.50812433,0.87044534,0.13228466,0.16697497,0.93117409}
                                };




float  kerasprevision[NUMTESTE] = {0.07900496,
                                   0.9640825,
                                   0.9999773,
                                   0.00043669,
                                   2.9226687e-06,
                                   0.99997276,
                                   0.00204071,
                                   0.21367303,
                                   0.99955136,
                                   0.02418783,
                                   0.9901481,
                                   8.361206e-05,
                                   0.06876914,
                                   5.250013e-07,
                                   0.9242712,
                                   0.9559127,
                                   1.3346447e-05,
                                   0.00034013,
                                   0.00020421,
                                   0.99479043
                                   };





//float kerasarray[] = {0.10858772,0.43363177,0.94129555,0.72319206,0.69356146,0.93117409,0.0556843,0.11762462,0.93522267};
//float  kerasprevision =0.5328561;

//float kerasarray[] = {0.03460024,0.10421212,0.93522267,0.47518336,0.47817113,0.94534413,0.17758868,0.76031619,0.93319838};

//float  kerasprevision =0.5068154;

printf("###(  keras , keras2c,  erro  )\n");

for(int i=0; i<NUMTESTE;i++)
{

        myInput.array = kerasarray[i];
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

        printf("%3d(%f,%f,%e)\n", i,kerasprevision[i], myOutput.array[0],fabsf(kerasprevision[i]-myOutput.array[0]));

}



//===================================================================================


clock_t t0 = clock(); 
keras2c_model(&test1_conv2d_30_input_1_input,&c_dense_61_1_test1); 
keras2c_model(&test2_conv2d_30_input_1_input,&c_dense_61_1_test2); 
keras2c_model(&test3_conv2d_30_input_1_input,&c_dense_61_1_test3); 
keras2c_model(&test4_conv2d_30_input_1_input,&c_dense_61_1_test4); 
keras2c_model(&test5_conv2d_30_input_1_input,&c_dense_61_1_test5); 
keras2c_model(&test6_conv2d_30_input_1_input,&c_dense_61_1_test6); 
keras2c_model(&test7_conv2d_30_input_1_input,&c_dense_61_1_test7); 
keras2c_model(&test8_conv2d_30_input_1_input,&c_dense_61_1_test8); 
keras2c_model(&test9_conv2d_30_input_1_input,&c_dense_61_1_test9); 
keras2c_model(&test10_conv2d_30_input_1_input,&c_dense_61_1_test10); 

clock_t t1 = clock(); 
//printf("Average time over 10 tests: %e s \n", 
 //((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_dense_61_1_test1,&c_dense_61_1_test1); 
errors[1] = maxabs(&keras_dense_61_1_test2,&c_dense_61_1_test2); 
errors[2] = maxabs(&keras_dense_61_1_test3,&c_dense_61_1_test3); 
errors[3] = maxabs(&keras_dense_61_1_test4,&c_dense_61_1_test4); 
errors[4] = maxabs(&keras_dense_61_1_test5,&c_dense_61_1_test5); 
errors[5] = maxabs(&keras_dense_61_1_test6,&c_dense_61_1_test6); 
errors[6] = maxabs(&keras_dense_61_1_test7,&c_dense_61_1_test7); 
errors[7] = maxabs(&keras_dense_61_1_test8,&c_dense_61_1_test8); 
errors[8] = maxabs(&keras_dense_61_1_test9,&c_dense_61_1_test9); 
errors[9] = maxabs(&keras_dense_61_1_test10,&c_dense_61_1_test10); 
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

