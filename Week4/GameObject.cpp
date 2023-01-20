#include "GameObject.h"

int GameObject::numberOfInstances = 0; // Exercise 4, we must initialise it outside of the constructor

GameObject::GameObject()
{
    id = 0;
}
GameObject::GameObject(int id, Location *location)
{
    this->id = id;
    this->location = location;
    numberOfInstances++;
    cout << "Game Object contructor Invoked" << endl;
}
/* potential use of intitalisation list:
GameObject::GameObject(int id):id(id)
{}
*/

GameObject::~GameObject()
{
}

GameObject::GameObject(GameObject &objet)
{
    location = new Location(objet.location->x, objet.location->y, objet.location->z);
}