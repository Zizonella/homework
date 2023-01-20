
#pragma once
#include "Location.h"

class GameObject
{
public:
    Location *location;
    GameObject(int id, Location *location);
    GameObject(GameObject &objet);

    ~GameObject();
    int id;
    static int numberOfInstances;

private:
    GameObject();
};
