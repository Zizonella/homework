#include <iostream>
#include <string>
#include "Person.h"
#include "Soldier.h"

using namespace std;

int main()
{
    Person *person; // first you need a pointer to the object
    person = new Person;

    person->Crawl();
    person->Stand();
    person->Walk();
    person->Run();

    Soldier *soldier;
    soldier = new Soldier(new Weapon()); // part 3 we need to add the weapon
    soldier->Stand();
    soldier->FiringWeapon(person);

    // Exercise 5
    cout << "New firing weapon" << endl;
    soldier->FiringWeapon(3, person);
    cout << "Health is now: " << person->health << endl;
    return 0;
}
