#include <iostream>

#pragma once

using namespace std;
class Vehicle
{
public:
    Vehicle(){};
    virtual void Display(); // the virtual keyword is used to define a virtual function declared within the base class (Vehicle) and is re-defined (overridden) by a derived class (Boat, Car).
    Vehicle(int id, int damage);

protected:
    int id;
    int damage;
};
