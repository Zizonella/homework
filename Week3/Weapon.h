#include "Person.h"

#include <iostream>

#pragma once

using namespace std;

class Weapon
{
public:
    Weapon();

    ~Weapon();
    bool Fire(Person *person);
    bool Fire(int burstRounds, Person *person);
    void Reload();

private:
    int rounds;
};
