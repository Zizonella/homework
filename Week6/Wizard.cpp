#include "Wizard.h"

Wizard::Wizard(string name, int knowledge, int skill, int maxMagic)
{
    magicCount = 0;
    magicInventory = new Magic *[maxMagic];
}
void Wizard::Display()
{
    cout << "Name: " << name << endl
         << "Knowledge: " << knowledge << endl
         << "Skill: " << skill << endl;
    for (int i = 0; i < magicCount; i++)
    {
        magicInventory[i]->Display();
    }
}

void Wizard::AddMagic(Magic *magic)
{
}

Wizard::~Wizard()
{
}