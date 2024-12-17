#pragma once

#include "./k2c_include.h" 

class Model {

public:
    Model(){};
    ~Model(){};
    // pure virtual functions
    virtual void keras2c_model(const k2c_tensor* dense_68_input_1_input, k2c_tensor* dense_70_1_output)=0;
    virtual void keras2c_model_Round0000001(const k2c_tensor* , k2c_tensor*)=0; 
    virtual void keras2c_model_initialize()=0; 
    virtual void keras2c_model_terminate()=0; 

};
 