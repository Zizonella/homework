#ifndef WEAPON_H
#define WEAPON_H

#pragma once
#include <iostream>
#include "NoAmmoException.cpp"
#include "MagazineFullException.cpp"
using namespace std;

class Weapon
{
public:
    Weapon();
    ~Weapon();
    void Fire();
    void Reload();

private:
    int rounds;
    bool jammed;
    NoAmmoException ENoAmmo;
};

#endif