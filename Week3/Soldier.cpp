#include "Soldier.h"
#include "Person.h"

Soldier::Soldier(Weapon *weapon)
{
}

Soldier::~Soldier()
{
}
void Soldier::FiringWeapon(Person *person)
{
    Weapon *weapon;
    weapon = new Weapon();
    cout << "Am I crawling" << endl;
    if (possibleStates != crawl)
    {
        cout << "No" << endl;
        weapon->Fire(person);
    }

    // cout << "Firing Weapon" << endl;
}

void Soldier::FiringWeapon(int n, Person *person)
{
    Weapon *weapon;
    weapon = new Weapon();
    if (possibleStates != crawl)
    {
        for (int i = 0; i < n; i++)
        {
            weapon->Fire(person);
        }
    }

    // cout << "Firing Weapon" << endl;
}