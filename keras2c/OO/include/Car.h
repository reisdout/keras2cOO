#ifndef CAR
#define CAR

#include "Vehicle.h"

#include <string>


class Car: public Vehicle {
  public:
    Car(string parNarca);
    void honk();
    ~Car(){};

  
};

#endif