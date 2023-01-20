#include "Weapon.h"

Weapon::Weapon()
{
    rounds = 10;
}

Weapon::~Weapon(void)
{
}

bool Weapon::Fire(Person *person)
{
    if (rounds != 0)
    {
        cout << "Weapon fired" << endl;
        person->Damage(1);
        rounds--;
        return true;
    }
    return false;
}

bool Weapon::Fire(int burstRound, Person *person)
{
    if (rounds != 0)
    {
        rounds -= burstRound;
        cout << "Automatic Weapon Fire" << endl;
        person->Damage(burstRound);

        return true;
    }
    else
        return false;
}

void Weapon::Reload()
{
    cout << "Reloading" << endl;
    rounds += 10;
}
