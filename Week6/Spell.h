#ifndef SPELL_H
#define SPELL_H
#include "Magic.h"

#pragma once

class Spell : public Magic

{
public:
    Spell(string words);
    ~Spell();

private:
    string words;
};

#endif