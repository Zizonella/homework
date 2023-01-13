#include <iostream>
#include <string>
#include "Person.h"
#include "Soldier.h"

int main()
{
    Person *person; // first you need a pointer to the object
    person = new Person;

    person->Crawl();
    person->Stand();
    person->Walk();
    person->Run();

    Soldier *soldier;
    soldier = new Soldier;
    soldier->Stand();
    soldier->FiringWeapon();
    return 0;
}
