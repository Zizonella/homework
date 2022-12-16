#include <iostream>
#include "GlobalVar.h"
using namespace std;

// for some reason couldn't reach those. Import problem?
// extern const char PLAYER_1;
// extern const char PLAYER_2;
// extern char board[3][3];

void Initialise(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}
void Display(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "\t" << board[i][j];
        }
    }
}

int main()
{
    cout << "this test" << endl;
    Initialise(board);
    Display(board);
}

// Exercise 2
void SetValue(int row, int col, char symbol, char board[3][3])
{
    board[row][col] = symbol;
}

bool IsFree(const int row, const int col, const char board[3][3])
{
    return (board[row][col] == '-'); // if it is / then it means it is empty i.e. free
}
