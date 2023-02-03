#ifndef WIZARD_H
#define WIZARD_H
#include "Magic.h"

#pragma once

class Wizard
{
public:
    Wizard(string name, int knowledge, int skill, int maxMagic);
    ~Wizard();
    void AddMagic(Magic *magic);
    void Display();

private:
    int knowledge;
    int magicCount;
    Magic *magicInventory;
    string name;
    int skill;
};

#endif