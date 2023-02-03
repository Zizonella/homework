#include "Spellwords.h"

Spellwords::Spellwords(string name, int knowledge, int skill, int maxMagic, string weapon)
{
}

Spellwords::~Spellwords()
{
}
void Spellwords::Display()
{
    Wizard::Display();
    cout << "Weapon" << weapon << endl;
}