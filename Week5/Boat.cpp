#include "Boat.h"

Boat::Boat(int id, int damage) : Vehicle(id, damage){};

void Boat::Display()
{
    // Vehicle::Display();

    cout << "Boat and the ID is: " << id << endl;
}