
#include <iostream>
#include <ctime>

#include <string>
#include "MyVars.h"
#include <time.h>

using namespace std;

// namespace firstJob
// {
//     int globalSalary = 20000;
// }

// namespace secondJob
// {
//     int globalSalary = 15000;
// }

int main()
{

    // Exercises 1,2,3,4:
    int DAYS = 365;
    int age;
    int *pAge = 0;
    pAge = &age;
    cout << "the address of the pointer is: " << pAge << endl;
    string name;
    string &nameReference = name;
    cout << "age:";
    cin >> age;
    cout << "This will output both the age: " << age << " and the pointer: " << *pAge << endl;
    cout << "and enter the name" << endl;
    cin >> name;
    cout << "Age:" << age * DAYS << " in days "
         << "Name:" << name << endl;

    nameReference = "reassignedName";
    cout << "reference name: " << nameReference << " and original name: " << name << endl;
    int lenght = surname().length();
    cout << "surname length: " << lenght << endl;
    char firstLetter = surname()[0];
    char lastLetter = surname()[surname().length() - 1];

    cout << "surname first letter: " << firstLetter << endl;
    cout << "surname last letter: " << lastLetter << endl;

    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
    int minutes = result / 60;
    int hours = minutes / 60;
    cout << "This means that: " << result << " in H:M:S format is equivalent to: " << endl
         << int(hours) << " hours " << int(minutes % 60)
         << " mins " << int(result % 60) << " secs.";

    return 0;
}

/* QUIZ ANSWERS
Exercise 8
1: i = 30;
2: a value of type "char *" cannot be used to initialize an entity of type "float *"C/C++(144)
*/