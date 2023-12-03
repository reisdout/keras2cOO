#pragma once 
#include "../Model/include/k2c_tensor_include.h"
#include "../Model/Model.h" 

class LSTMModel : public Model{
    public:
    LSTMModel(){};
    ~LSTMModel(){};
    void keras2c_model(const k2c_tensor* lstm_24_input_1_input, k2c_tensor* client_0_13_output); 
    void keras2c_model_initialize(); 
    void keras2c_model_terminate(); 
};
