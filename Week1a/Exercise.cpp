
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
    return 0;

    // cout << firstJob::globalSalary << endl;
    // cout << secondJob::globalSalary << endl;
}

// #include <iostream>
// #include <vector>

// int main()
// {
//     int n = 15, t1 = 0, t2 = 1, nextTerm = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             std::cout << t1 << ", ";
//             continue;
//         }
//         if (i == 1)
//         {
//             std::cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         std::cout << nextTerm << ", ";
//     }
//     return 0;
// }
