#include "Person.h"
#include "Weapon.h"

#pragma once
using namespace std;

class Soldier : public Person
{
public:
    Soldier(Weapon *tool);
    ~Soldier();
    void FiringWeapon(Person *person);
    void FiringWeapon(int burstRounds, Person *person);

private:
    Weapon *weapon;
};
