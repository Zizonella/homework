#ifndef POTION_H
#define POTION_H
#include "Magic.h"

#pragma once

class Potion : public Magic
{
public:
    Potion(int dose);
    ~Potion();

private:
    int dose;
};

#endif