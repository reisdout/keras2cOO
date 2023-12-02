#include "../include/Vehicle.h"

#include <iostream>

void Vehicle::honk() 
{
      cout << "Tuut, tuut! \n" ;
}

void Vehicle::SetBrand(string paBrand)
{
      this->brand = paBrand ;
}

string Vehicle::GetBrand()
{
    return this->brand;
}