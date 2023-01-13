#include "Soldier.h"

Soldier::Soldier(Weapon *tool)
{
}

Soldier::~Soldier()
{
}
void Soldier::FiringWeapon()
{
    Weapon *weapon;
    weapon = new Weapon();
    if (possibleStates != crawl)
    {
        weapon->Fire();
    }

    // cout << "Firing Weapon" << endl;
}