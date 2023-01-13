#include "Person.h"
#include "Weapon.h"

#pragma once
using namespace std;

class Soldier : public Person
{
public:
    Soldier(Weapon *tool);
    ~Soldier();
    void FiringWeapon();

private:
    Weapon *weapon;
};
