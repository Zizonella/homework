#include "GameObject.h"
#include "HealthKit.h"

#include <iostream>

using namespace std;
int main()
{
    // static GameObject obj1;
    // int g; // for testing

    // cout << "The ID is: " << obj1.id + g << endl; // just like Java use .
    /* The value displayed will be 0, because it was called from main?
    but g will have a different value every time we print it, this is because the computer will
    assign some unused memory to g*/

    // Exercise 2
    static GameObject obj2(45, new Location(1, 1, 1));
    cout << "The second ID is: " << obj2.id << endl; // just like Java use .
    static GameObject obj3(50, new Location(2, 2, 2));
    static GameObject obj4(55, new Location(3, 3, 3));

    cout << "Number of instances: " << obj2.numberOfInstances << endl;
    obj2.location->Display();
    obj3.location->Display();
    obj4.location->Display();

    GameObject obj5 = obj2; // this is a shallow copy
    obj5.location->Display();
    obj2.location->Display();
    obj5.location->Set(6, 2, 1);
    obj5.location->Display();
    obj2.location->Display();
    static HealthKit healthKit(1, new Location(9, 8, 7));
     return 0;
}