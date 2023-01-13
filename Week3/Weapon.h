#define WEAPON_H
#include <iostream>

#pragma once

using namespace std;

class Weapon
{
public:
    
    Weapon();
    ~Weapon();
    bool Fire();
    void Reload();

private:
int rounds;
};
