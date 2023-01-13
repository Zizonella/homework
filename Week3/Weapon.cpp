#include "Weapon.h"

Weapon::Weapon()
{
    rounds = 10;
}

Weapon::~Weapon(void)
{
}

bool Weapon::Fire()
{
    if (rounds != 0)
    {
        cout << "Weapon fired" << endl;
        rounds--;
        return true;
    }
    return false;
}

void Weapon::Reload()
{
    cout << "Reloading" << endl;
    rounds += 10;
}
