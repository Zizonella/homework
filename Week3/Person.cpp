#include "Person.h"

Person::Person(void)
{
}

Person::~Person(void)
{
}
void Person::Crawl()
{
    PossibleStates possibleStates;
    possibleStates = crawl;
    cout << "Crawling" << endl;
}
void Person::Stand()
{
    PossibleStates possibleStates;
    possibleStates = stand;
    cout << "Standing" << endl;
}
void Person::Walk()
{
    PossibleStates possibleStates;
    possibleStates = walk;
    cout << "Walking" << endl;
}

void Person::Run()
{
    PossibleStates possibleStates;
    possibleStates = run;
    cout << "Running" << endl;
}
