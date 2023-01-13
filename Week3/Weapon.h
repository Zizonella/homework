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
    bool Fire(int burstRounds);
    void Reload();

private:
int rounds;
};
