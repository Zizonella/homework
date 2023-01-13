/* This is where we need to add the includes that can be used in the corresponding cpp class*/
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
