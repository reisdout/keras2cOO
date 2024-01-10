#pragma once 
#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 


class CNNModel : public Model{
public:
CNNModel(){};
~CNNModel(){};
void keras2c_model(const k2c_tensor* conv2d_2_input_1_input, k2c_tensor* dense_5_1_output); 
void keras2c_model_Round0000001(const k2c_tensor* , k2c_tensor*);
void keras2c_model_initialize(); 
void keras2c_model_terminate(); 
};
