#include "Person.h"

Person::Person(void)
{
    health = 100;
}

Person::~Person(void)
{
}
void Person::Crawl()
{
    possibleStates = crawl;
    cout << "Crawling" << endl;
}
void Person::Stand()
{
    possibleStates = stand;
    cout << "Standing" << endl;
}
void Person::Walk()
{
    possibleStates = walk;
    cout << "Walking" << endl;
}

void Person::Run()
{
    possibleStates = run;
    cout << "Running" << endl;
}

// 6
void Person::Damage(int damage)
{
    health -= damage;
    cout << "Damaged! Ooopsie" << endl;
}
