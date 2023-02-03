#include "VehicleManager.h"

VehicleManager::VehicleManager(int size) : maxVehicles(size)
{
    count = 0;
    vehicles = new Vehicle *[maxVehicles];
}
bool VehicleManager::Add(Vehicle *vehicle)
{
    if (count < maxVehicles)
    {
        vehicles[count] = vehicle;
        count++;
        return true;
    }
    else
    {
        return false;
    }
}

VehicleManager::~VehicleManager()
{
}

VehicleManager::VehicleManager()
{
    // cout << "Testing purposes" << endl;
}

void VehicleManager::Display()
{
    for (int i = 0; i < count; i++)
    {
        vehicles[i]->Display();
    }
}

Vehicle **VehicleManager::GetList()
{
    return vehicles;
}

int VehicleManager::GetCount()
{
    return count;
}