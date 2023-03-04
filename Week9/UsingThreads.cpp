#include <thread>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

double sum1 = 0;
double sum2 = 0;

struct myclass
{
    bool operator()(int i, int j)
    {
        return (i < j);
    }
} myobject;

vector<int> myvector;

void task1()
{
    cout << "starting task 1" << endl;
    double c = 0;
    while (c < 2500000)
    {
        {
            c++;
            sum1 += c;
        }
    }
    cout << "finished task 1" << endl;
}

void task2()
{
    cout << "starting task 2" << endl;
    double c = 0;
    while (c < 25000000)
    {
        {
            c++;
            sum1 += c;
        }
    }
    cout << "finished task 2" << endl;
}

void task3()
{
    cout << "starting task 3" << endl;
    std::sort(myvector.begin(), myvector.end(), myobject);
    cout << "finished task 2" << endl;
}

int main(void)
{
    myvector.assign(7, 10);

    thread t1(task1);
    thread t2(task2);
    thread t3(task3);
    thread::id id1 = t1.get_id();
    thread::id id2 = t2.get_id();
    thread::id id3 = t3.get_id();

    // check if thread is joinable
    if (t1.joinable())
    {
        t1.join();
        cout << "t1 id= " << id1 << endl;
    }

    if (t2.joinable())
    {
        t2.join();
        cout << "t2 id= " << id2 << endl;
    }

    if (t3.joinable())
    {
        t3.join();
        cout << "t3 id= " << id3 << endl;
        for (int i = 0; i < myvector.size(); i++)
        {
            cout << myvector[i] << endl;
        }
    }
    cout << "sum1 = " << sum1 << " sum2 = " << sum2 << endl;
}