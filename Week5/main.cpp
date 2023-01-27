#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include <iostream>

using namespace std;

int main()
{
    // Vehicle *V1 = new Vehicle(1, 30);
    // Boat *B1 = new Boat(2, 50);
    // Car *C1 = new Car(3, 40);
    // V1->Display();
    // B1->Display();
    // C1->Display();

    // Exercise 3
    Vehicle *vehicles[5];
    vehicles[0] = new Car(1, 35);
    vehicles[1] = new Boat(2, 55);
    vehicles[2] = new Vehicle(3, 30);
    vehicles[3] = new Car(4, 35);
    vehicles[4] = new Boat(5, 25);

    for (int i = 0; i < 5; i++)
    {
        vehicles[i]->Display();
    }
}