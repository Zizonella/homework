/* Create a new C++ console project within Visual Studio.
Within the main function create a statically declared array named scores, to store 100
player scores (of type int).
Within a loop assign each a random score between 0 and 100.
Record the number of scores that lie within the following ranges within a second array
named ranges that contains 4 elements
• Novice 0..40
• Intermediate 41..60
• Advanced 61..80
• Hardcore 81..100
and display the number of values within each range.
Note: As local variables are not automatically initialised with a default value, you will
have to explicitly initialise the elements of ranges.
*/

#include <iostream>
#include <ctime>
using namespace std;

string ranges(int result)
{
    string range = "";
    if (result >= 0 && result <= 40)
    {
        range = "novice";
    }
    if (result >= 41 && result <= 60)
    {
        range = "intermediate";
    }
    if (result >= 61 && result <= 80)
    {
        range = "advanced";
    }
    if (result >= 81 && result <= 100)
    {
        range = "hardcore";
    }
    return range;
}

int main()
{
    int scores[100];
    int noviceCounter = 0;
    int intermediateCounter = 0;
    int advancedCounter = 0;
    int hardcoreCounter = 0;

    for (int i = 0; i < 100; i++)
    {
        scores[i] = 1 + (rand() % 100);
        if (ranges(scores[i]) == "novice")
        {
            noviceCounter++;
        }
        if (ranges(scores[i]) == "itermediate")
        {
            intermediateCounter++;
        }
        if (ranges(scores[i]) == "advanced")
        {
            advancedCounter++;
        }
        if (ranges(scores[i]) == "hardcore")
        {
            hardcoreCounter++;
        }

        cout << scores[i] << " Which is in the following range: " << ranges(scores[i]) << endl;
        cout << "Novices we have: " << noviceCounter << endl;
        cout << "Intermediates we have: " << intermediateCounter << endl;
        cout << "Advanced users we have: " << advancedCounter << endl;
        cout << "Hardcore users we have: " << hardcoreCounter << endl;
    }
}
