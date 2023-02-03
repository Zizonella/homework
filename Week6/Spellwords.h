#ifndef SPELLWORDS_H
#define SPELLWORDS_H
#include "Wizard.h"

#pragma once

class Spellwords : public Wizard
{
public:
    Spellwords(string name, int knowledge, int skill, int maxMagic, string weapon);
    ~Spellwords();

private:
    string weapon;
};

#endif