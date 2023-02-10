#include "Weapon.h"

Weapon::Weapon()
{
    rounds = 0;
}

Weapon::~Weapon()
{
}
void Weapon::Fire()
{
    if (rounds < 1)
        throw(NoAmmoException());
    cout << "Weapon Fired\n"
         << endl;
    rounds--;
}

void Weapon::Reload()
{
    rounds += 10;
    if (rounds >= 10)
    {
        throw(MagazineFullException());
        // rounds = 10;
    }

    cout << "Weapon Reloaded \n"
         << endl;
}