#ifndef VEHICLE
#define VEHICLE

#include <string>


// Base class

using namespace std;

class Vehicle {
  public:
  Vehicle(){};
  void SetBrand(string parBrand);
  string  GetBrand();
  virtual void honk()=0;
  private:
    string brand;
 
};
#endif