#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include "Vehicle.h"

#pragma once

class VehicleManager
{
public:
    VehicleManager(int size);
    VehicleManager();
    ~VehicleManager();
    void Display();
    int GetCount();
    Vehicle **GetList();
    bool Add(Vehicle *vehicle);

private:
    int count;
    int maxVehicles;
    Vehicle **vehicles;
};

#endif