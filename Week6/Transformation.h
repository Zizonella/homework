#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H
#include "Magic.h"
#include <string>
using namespace std;

#pragma once

class Transformation : public Magic
{
public:
    Transformation(string creature);
    ~Transformation();
    void Display();

private:
    string creature;
};

#endif