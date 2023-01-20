#include "Location.h"

Location::Location()
{
}

Location::Location(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
void Location::Display()
{
    // cout << "X: " << Location::x << "Y: " << Location::y << "Z: " << Location::z << endl;
    cout << "X: " << x << "Y: " << y << "Z: " << z << endl;
}

void Location::Set(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Location::~Location()
{
}