#include <iostream>

#pragma once

using namespace std;
class Vehicle
{
public:
    Vehicle(){};
    void Display();
    Vehicle(int id, int damage);

protected:
    int id;

private:
    int damage;
};
