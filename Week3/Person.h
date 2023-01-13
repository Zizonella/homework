/* This is where we need to add the includes that can be used in the corresponding cpp class*/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>

#pragma once

using namespace std;

class Person
{
public:
    Person();
    ~Person();
    void Crawl();
    void Stand();
    void Walk();
    void Run();

private:
};
// int main()
// {
//     Person *person; // first you need a pointer to the object
//     Soldier *soldier;
//     person = new Person;
//     soldier = new Soldier;

//     person->Crawl();
//     person->Stand();
//     person->Walk();
//     person->Run();

//     // soldier->Stand();
//     // soldier->FiringWeapon();
//     return 0;
// }

#endif