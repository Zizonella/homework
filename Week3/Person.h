/* This is where we need to add the includes that can be used in the corresponding cpp class*/
#include <iostream>

#pragma once

using namespace std;

class Person
{
public:
    enum PossibleStates
    {
        crawl,
        stand,
        walk,
        run
    }; // add enums for the possible states
    int health;
    Person();
    ~Person();
    void Crawl();
    void Stand();
    void Walk();
    void Run();
    void Damage(int damage);
    PossibleStates possibleStates;

private:
};
