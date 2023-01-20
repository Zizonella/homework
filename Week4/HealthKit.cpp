#include "HealthKit.h"

HealthKit::HealthKit(int id, Location *location) : GameObject(id, location)
{
    //^ pass to the parent's constructor
    cout << "HealthKit contructor Invoked" << endl;
}

HealthKit::~HealthKit()
{
}