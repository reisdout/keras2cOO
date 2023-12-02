#include <stdio.h> 
#include <math.h> 
#include <time.h> 
#include "./include/k2c_include.h" 
#include "keras2c_model.h" 

float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
struct timeval GetTimeStamp(); 
 
float test1_lstm_24_input_1_input_array[9] = {
-9.26489403e-01f,-9.30843350e-01f,-6.71520213e-01f,+1.33125404e+00f,-7.04340422e-01f,
-8.53704248e-01f,-4.61105867e-01f,+1.43852536e+00f,+1.97068813e+00f,}; 
k2c_tensor test1_lstm_24_input_1_input = {&test1_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test1_array[1] = {
+1.70582477e-02f,}; 
k2c_tensor keras_client_0_13_test1 = {&keras_client_0_13_test1_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test1_array[1] = {0}; 
k2c_tensor c_client_0_13_test1 = {&c_client_0_13_test1_array[0],1,1,{1,1,1,1,1}}; 
float test2_lstm_24_input_1_input_array[9] = {
-4.79404490e-01f,+1.58368568e+00f,+8.00110972e-01f,+1.93971490e+00f,+1.35418455e+00f,
+9.92133280e-01f,-1.93947223e+00f,+2.49827063e-01f,+1.56751005e+00f,}; 
k2c_tensor test2_lstm_24_input_1_input = {&test2_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test2_array[1] = {
+9.99994457e-01f,}; 
k2c_tensor keras_client_0_13_test2 = {&keras_client_0_13_test2_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test2_array[1] = {0}; 
k2c_tensor c_client_0_13_test2 = {&c_client_0_13_test2_array[0],1,1,{1,1,1,1,1}}; 
float test3_lstm_24_input_1_input_array[9] = {
+1.66772116e+00f,-1.57168895e+00f,+1.10966249e+00f,-1.60988395e+00f,+1.13516116e+00f,
+1.64405100e+00f,+1.38083007e+00f,-1.22064358e+00f,-1.06691028e+00f,}; 
k2c_tensor test3_lstm_24_input_1_input = {&test3_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test3_array[1] = {
+3.01894761e-04f,}; 
k2c_tensor keras_client_0_13_test3 = {&keras_client_0_13_test3_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test3_array[1] = {0}; 
k2c_tensor c_client_0_13_test3 = {&c_client_0_13_test3_array[0],1,1,{1,1,1,1,1}}; 
float test4_lstm_24_input_1_input_array[9] = {
+1.30162383e+00f,+1.64083408e+00f,-4.96501713e-01f,+1.17731058e+00f,+5.37484867e-02f,
-3.28940907e-01f,+1.30770222e+00f,+1.12111635e+00f,+1.14959579e+00f,}; 
k2c_tensor test4_lstm_24_input_1_input = {&test4_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test4_array[1] = {
+3.50721052e-06f,}; 
k2c_tensor keras_client_0_13_test4 = {&keras_client_0_13_test4_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test4_array[1] = {0}; 
k2c_tensor c_client_0_13_test4 = {&c_client_0_13_test4_array[0],1,1,{1,1,1,1,1}}; 
float test5_lstm_24_input_1_input_array[9] = {
+8.05601252e-01f,-1.53187690e-01f,-3.17791715e-01f,-1.36791270e+00f,-1.43516989e+00f,
-3.68107726e-01f,-1.45665684e+00f,+2.57830033e-01f,-3.45185235e-01f,}; 
k2c_tensor test5_lstm_24_input_1_input = {&test5_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test5_array[1] = {
+5.56715750e-05f,}; 
k2c_tensor keras_client_0_13_test5 = {&keras_client_0_13_test5_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test5_array[1] = {0}; 
k2c_tensor c_client_0_13_test5 = {&c_client_0_13_test5_array[0],1,1,{1,1,1,1,1}}; 
float test6_lstm_24_input_1_input_array[9] = {
-5.85610414e-01f,+9.15700064e-01f,+9.58891766e-02f,-1.85443905e+00f,+7.90611522e-01f,
-1.88482434e+00f,+1.09856794e+00f,+1.64776715e+00f,-1.08053707e+00f,}; 
k2c_tensor test6_lstm_24_input_1_input = {&test6_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test6_array[1] = {
+9.62783361e-07f,}; 
k2c_tensor keras_client_0_13_test6 = {&keras_client_0_13_test6_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test6_array[1] = {0}; 
k2c_tensor c_client_0_13_test6 = {&c_client_0_13_test6_array[0],1,1,{1,1,1,1,1}}; 
float test7_lstm_24_input_1_input_array[9] = {
+1.17042658e+00f,+1.27578675e+00f,-7.48621267e-01f,+1.62875552e+00f,-1.92959494e+00f,
+1.61626950e+00f,-5.65222564e-01f,-1.33008905e+00f,+3.14162747e-01f,}; 
k2c_tensor test7_lstm_24_input_1_input = {&test7_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test7_array[1] = {
+4.08132701e-06f,}; 
k2c_tensor keras_client_0_13_test7 = {&keras_client_0_13_test7_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test7_array[1] = {0}; 
k2c_tensor c_client_0_13_test7 = {&c_client_0_13_test7_array[0],1,1,{1,1,1,1,1}}; 
float test8_lstm_24_input_1_input_array[9] = {
+2.25709114e-01f,+1.79241946e+00f,-1.39778788e+00f,-2.42550015e-02f,-1.91823112e+00f,
+1.91256871e+00f,+5.42181898e-01f,-8.57123234e-02f,-9.79038340e-01f,}; 
k2c_tensor test8_lstm_24_input_1_input = {&test8_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test8_array[1] = {
+1.81455869e-06f,}; 
k2c_tensor keras_client_0_13_test8 = {&keras_client_0_13_test8_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test8_array[1] = {0}; 
k2c_tensor c_client_0_13_test8 = {&c_client_0_13_test8_array[0],1,1,{1,1,1,1,1}}; 
float test9_lstm_24_input_1_input_array[9] = {
+4.77927598e-01f,+1.68074278e+00f,+1.16592163e+00f,+5.65102031e-01f,+1.42851462e+00f,
-6.92826646e-01f,+1.14904909e+00f,+1.36925353e+00f,+1.53125826e+00f,}; 
k2c_tensor test9_lstm_24_input_1_input = {&test9_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test9_array[1] = {
+9.65978205e-01f,}; 
k2c_tensor keras_client_0_13_test9 = {&keras_client_0_13_test9_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test9_array[1] = {0}; 
k2c_tensor c_client_0_13_test9 = {&c_client_0_13_test9_array[0],1,1,{1,1,1,1,1}}; 
float test10_lstm_24_input_1_input_array[9] = {
-1.60281545e-01f,+1.49129340e+00f,-1.36768695e+00f,+8.19353353e-01f,+8.82126119e-01f,
+5.95449734e-01f,-8.95499431e-01f,-1.93072230e+00f,-1.46322657e-01f,}; 
k2c_tensor test10_lstm_24_input_1_input = {&test10_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
float keras_client_0_13_test10_array[1] = {
+1.09462446e-04f,}; 
k2c_tensor keras_client_0_13_test10 = {&keras_client_0_13_test10_array[0],1,1,{1,1,1,1,1}}; 
float c_client_0_13_test10_array[1] = {0}; 
k2c_tensor c_client_0_13_test10 = {&c_client_0_13_test10_array[0],1,1,{1,1,1,1,1}}; 
int main(){
 float errors[10];
 size_t num_tests = 10; 
size_t num_outputs = 1; 
keras2c_model_initialize();


//===================================================================================
#define NUMTESTE 20

k2c_tensor myInput,myOutput;

float kerasarray[NUMTESTE][9] ={{0.65501175,0.67588174,0.85425101,0.56352266,0.55621223,0.9291498,0.03155329,0.03149462,0.88461538},
                                {0.56352266,0.55621223,0.9291498,0.03155329,0.03149462,0.88461538,0.32538603,0.37631673,0.94331984},
                                {0.03155329,0.03149462,0.88461538,0.32538603,0.37631673,0.94331984,0.55511585,0.44135229,0.93522267},
                                {0.32538603,0.37631673,0.94331984,0.55511585,0.44135229,0.93522267,0.53900254,0.64567665,0.92307692},
                                {0.55511585,0.44135229,0.93522267,0.53900254,0.64567665,0.92307692,0.03210959,0.00352612,0.93319838},
                                {0.53900254,0.64567665,0.92307692,0.03210959,0.00352612,0.93319838,0.3680289,0.86928026,0.94129555},
                                {0.03210959,0.00352612,0.93319838,0.3680289,0.86928026,0.94129555,0.3039542,0.29426897,0.93117409},
                                {0.3680289,0.86928026,0.94129555,0.3039542,0.29426897,0.93117409,0.6457895,0.67724669,0.85425101},
                                {0.3039542,0.29426897,0.93117409,0.6457895,0.67724669,0.85425101,0.04668712,0.17646818,0.9291498},
                                {0.6457895,0.67724669,0.85425101,0.04668712,0.17646818,0.9291498,0.27943566,0.28029994,0.93927126},
                                {0.04668712,0.17646818,0.9291498,0.27943566,0.28029994,0.93927126,0.07447438,0.07433622,0.9291498},
                                {0.27943566,0.28029994,0.93927126,0.07447438,0.07433622,0.9291498,0.37345783,0.35216179,0.97975709},
                                {0.07447438,0.07433622,0.9291498,0.37345783,0.35216179,0.97975709,0.15853535,0.00705526,0.89068826},
                                {0.37345783,0.35216179,0.97975709,0.15853535,0.00705526,0.89068826,0.03154572,0.03148927,0.8562753},
                                {0.15853535,0.00705526,0.89068826,0.03154572,0.03148927,0.8562753,0.03154556,0.03148832,0.93927126},
                                {0.03154572,0.03148927,0.8562753,0.03154556,0.03148832,0.93927126,0.62510528,0.59482266,0.86842105},
                                {0.03154556,0.03148832,0.93927126,0.62510528,0.59482266,0.86842105,0.43998044,0.48919616,0.8582996},
                                {0.62510528,0.59482266,0.86842105,0.43998044,0.48919616,0.8582996,0.03962083,0.03954716,0.93522267},
                                {0.43998044,0.48919616,0.8582996,0.03962083,0.03954716,0.93522267,0.03154524,0.00405856,0.93724696},
                                {0.03962083,0.03954716,0.93522267,0.03154524,0.00405856,0.93724696,0.35445813,0.3382337,0.87246964}
                                };




float  kerasprevision[NUMTESTE] = {0.09087843,
                                   0.90842015,
                                   0.3239425,
                                   0.288754,
                                   0.99481535,
                                   0.85941803,
                                   0.8518011,
                                   0.01508485,
                                   0.98192215,
                                   0.8880469,
                                   0.9851031,
                                   0.9933365,
                                   0.03627208,
                                   0.00256925,
                                   0.99862915,
                                   0.02791551,
                                   0.0051941,
                                   0.99431455,
                                   0.99649554,
                                   0.00908093
                                   };





//float kerasarray[] = {0.10858772,0.43363177,0.94129555,0.72319206,0.69356146,0.93117409,0.0556843,0.11762462,0.93522267};
//float  kerasprevision =0.5328561;

//float kerasarray[] = {0.03460024,0.10421212,0.93522267,0.47518336,0.47817113,0.94534413,0.17758868,0.76031619,0.93319838};

//float  kerasprevision =0.5068154;

printf("###(  keras , keras2c,  erro  )\n");

for(int i=0; i<NUMTESTE;i++)
{

        myInput.array = kerasarray[i];
        myInput.ndim = 2;//-------------------------------------------------------------------------------|
        myInput.numel = 9;//------------------------------------------------------------------------------|-|
                        //                                                                                | |
                        //k2c_tensor test9_lstm_24_input_1_input = {&test9_lstm_24_input_1_input_array[0],2,9,{3,3,1,1,1}}; 
                        //                     só olhar o padrão nas primeiras linhas                          | | | | |
        myInput.shape[0] = 3;//--------------------------------------------------------------------------------| | | | |
        myInput.shape[1] = 3;//----------------------------------------------------------------------------------| | | |
        myInput.shape[2] = 1;//------------------------------------------------------------------------------------| | |
        myInput.shape[3] = 1;//--------------------------------------------------------------------------------------| |
        myInput.shape[4] = 1;//----------------------------------------------------------------------------------------|


        float myfloatOutput[1] = {0};
        myOutput.array=myfloatOutput;
        myOutput.ndim=1;//-------------------------------------------------------------------------------|
        myOutput.numel=1;//------------------------------------------------------------------------------|-|
                                       //k2c_tensor c_client_0_13_test1 = {&c_client_0_13_test1_array[0],1,1,{1,1,1,1,1}}; 
        myOutput.shape[0]=1;//                                                                                | | | | |
        myOutput.shape[1]=1;//--------------------------------------------------------------------------------| | | | |
        myOutput.shape[2]=1;//------------------------------------------------------------------------------------| | |
        myOutput.shape[3]=1;//--------------------------------------------------------------------------------------| |
        myOutput.shape[4]=1;//----------------------------------------------------------------------------------------|



        keras2c_model(&myInput,&myOutput); 

        printf("%3d(%f,%f,%e)\n", i,kerasprevision[i], myOutput.array[0],fabsf(kerasprevision[i]-myOutput.array[0]));

}



//===================================================================================






clock_t t0 = clock(); 
keras2c_model(&test1_lstm_24_input_1_input,&c_client_0_13_test1); 
keras2c_model(&test2_lstm_24_input_1_input,&c_client_0_13_test2); 
keras2c_model(&test3_lstm_24_input_1_input,&c_client_0_13_test3); 
keras2c_model(&test4_lstm_24_input_1_input,&c_client_0_13_test4); 
keras2c_model(&test5_lstm_24_input_1_input,&c_client_0_13_test5); 
keras2c_model(&test6_lstm_24_input_1_input,&c_client_0_13_test6); 
keras2c_model(&test7_lstm_24_input_1_input,&c_client_0_13_test7); 
keras2c_model(&test8_lstm_24_input_1_input,&c_client_0_13_test8); 
keras2c_model(&test9_lstm_24_input_1_input,&c_client_0_13_test9); 
keras2c_model(&test10_lstm_24_input_1_input,&c_client_0_13_test10); 

clock_t t1 = clock(); 
//printf("Average time over 10 tests: %e s \n", 
 //((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
errors[0] = maxabs(&keras_client_0_13_test1,&c_client_0_13_test1); 
errors[1] = maxabs(&keras_client_0_13_test2,&c_client_0_13_test2); 
errors[2] = maxabs(&keras_client_0_13_test3,&c_client_0_13_test3); 
errors[3] = maxabs(&keras_client_0_13_test4,&c_client_0_13_test4); 
errors[4] = maxabs(&keras_client_0_13_test5,&c_client_0_13_test5); 
errors[5] = maxabs(&keras_client_0_13_test6,&c_client_0_13_test6); 
errors[6] = maxabs(&keras_client_0_13_test7,&c_client_0_13_test7); 
errors[7] = maxabs(&keras_client_0_13_test8,&c_client_0_13_test8); 
errors[8] = maxabs(&keras_client_0_13_test9,&c_client_0_13_test9); 
errors[9] = maxabs(&keras_client_0_13_test10,&c_client_0_13_test10); 
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

