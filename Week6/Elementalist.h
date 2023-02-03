#ifndef ELEMENTALIST_H
#define ELEMENTALIST_H
#include "Wizard.h"

#pragma once

class Elementalist : public Wizard
{
public:
    enum TElements
    {
        earth,
        wind,
        fire,
        water
    };
    Elementalist(string name, int knowledge, int skill, int maxMagic, TElements specialism);
    ~Elementalist();
    void Display();

private:
    TElements specialism;
};

#endif