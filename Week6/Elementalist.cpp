#include "Elementalist.h"

Elementalist::Elementalist(string name, int knowledge, int skill, int maxMagic, TElements specialism)
{
}

Elementalist::~Elementalist()
{
}

void Elementalist::Display()
{
    Wizard::Display();
    switch (specialism)
    {
    case earth:
        cout << "Earth";
        break;
    case wind:
        cout << "Wind";
        break;
    case fire:
        cout << "Fire";
        break;
    case water:
        cout << "Water";
        break;
    default:
        cout << "undefined element" << endl;
    }
}