
#pragma once
#include <iostream>

using namespace std;
class Location
{
public:
    int x;
    int y;
    int z;

    Location();
    ~Location();
    void Display();
    Location(int x, int y, int z);
    void Set(int x, int y, int z);

private:
};
