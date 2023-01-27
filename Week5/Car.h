#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car();
    Car(int id, int damage);
    void Display();

private:
};
