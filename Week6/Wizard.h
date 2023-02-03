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
    Wizard();

private:
    int knowledge;
    int magicCount;
    Magic **magicInventory; // s an array of Magic objects The array name contain a pointer to the first element in the array.  first element of the array is a pointer hence **
    string name;
    int skill;
};

#endif