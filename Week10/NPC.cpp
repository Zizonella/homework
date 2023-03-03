#include <iostream>
// #include <new.h>
using namespace std;

class NPC
{
public:
    int id;
    NPC() {}
    NPC(int id) : id(id) {}
    ~NPC()
    {
        cout << "NPC " << id << " deleted" << endl;
    }
};

void MemoryErrorHandler()
{
    std::cerr << "Ran out of memory" << std::endl;
    exit(1);
};

class AIManager
{
private:
    NPC **npcs;
    int count;
    int size;

public:
    AIManager(int size) : size(size)
    {
        assert(size > 0); // exercise 2b
        npcs = new NPC *[size];
        count = 0;
    }

    ~AIManager() // making sure we are deleting each element in the array and at the end the array too.
    {
        for (int n = 0; n < count; n++)
        {
            delete npcs[n];
        }
        delete[] npcs;
        std::cout << "Destructored" << endl;
    }

    int Add(int id)
    {
        assert(id != 0);      // exercise 2a
        assert(count < size); // exercise 2b
        for (int i = 0; i < count; i++)
        {
            if (npcs[i]->id == id)
            {
                return 0;
            }
        }

        NPC *temp = new NPC(id);

        npcs[count++] = temp;

        return id;
    }
    void Display()
    {
        for (int n = 0; n < count; n++)
            cout << "NPC ID: " << npcs[n]->id << endl;
    }
};
int main()
{
    AIManager *ai = new AIManager(10);
    ai->Add(1);
    ai->Add(2);
    ai->Add(3);
    ai->Display();

    delete ai;
    set_new_handler(MemoryErrorHandler);
    return 0;
}