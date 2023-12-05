#pragma once 
#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 

class CNN_ACK_RTTModel : public Model{
public:
CNN_ACK_RTTModel(){};
~CNN_ACK_RTTModel(){};
void keras2c_model(const k2c_tensor* , k2c_tensor* );
void keras2c_model_initialize(); 
void keras2c_model_terminate(); 
};
