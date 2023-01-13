#ifndef SOLDIER_H
#define SOLDIER_H
#include "Person.h"

#pragma once
using namespace std;

class Soldier : public Person
{
public:
    Soldier();
    ~Soldier();
    void FiringWeapon()
    {
        cout << "Firing Weapon" << endl;
    }

private:
};

#endif