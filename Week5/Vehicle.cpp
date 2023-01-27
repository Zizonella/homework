#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(int id, int damage) : id(id), damage(damage){};

void Vehicle::Display()
{
    cout << "Vehicle and the ID is: " << id << endl;
}