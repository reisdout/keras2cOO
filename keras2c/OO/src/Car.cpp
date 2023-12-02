#include "../include/Car.h"
#include <iostream>

Car::Car(string parMarca)
{
    this->SetBrand(parMarca);
}

void Car::honk()
{
    cout <<"Fusca WROOOOOOOOOOOOMMMM" << endl;
}