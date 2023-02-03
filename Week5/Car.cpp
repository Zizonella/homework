#include "Car.h"

Car::Car(int id, int damage) : Vehicle(id, damage){};

void Car::Display()
{
    // Vehicle::Display();
    cout << "Car and the ID is: " << id << endl;
}