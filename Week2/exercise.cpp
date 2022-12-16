#include <iostream>
#include "GlobalVar.h"
// #include "globalVariabiable.cpp"
using namespace std;

// for some reason couldn't reach those. Import problem? It was a typo :(
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

// Exercise 2
void SetValue(int row, int col, char symbol, char board[3][3])
{
    board[row][col] = symbol;
}

bool IsFree(const int row, const int col, const char board[3][3])
{
    return (board[row][col] == '-'); // if it is / then it means it is empty i.e. free
}

bool hasWon(char symbol, char board[3][3])
{
    int row = 0;
    int col = 0;
    bool match = false;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            row = winningStates[i][j][0];
            col = winningStates[i][j][1];
            if (board[row][col] == symbol)
            {
                match = true;
            }
            else
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // int randomNumber = rand();
    srand(time(NULL));
    char board[3][3];
    bool gameOver = false;

    int row = 0;
    int col;
    char player = PLAYER_1;
    int count = 0;

    Initialise(board);
    Display(board);

    while (!gameOver)
    {
        do
        {
            row = rand() % 3;
            col = rand() % 3;
        } while (!IsFree(row, col, board));
        SetValue(row, col, player, board);
        if (player == PLAYER_1)
        {
            player = PLAYER_2;
        }
        else
        {
            player = PLAYER_1;
        }
        count += 1;
        if (count == 9)
        {
            gameOver = hasWon(player, board);
            Display(board);
        }
    }
}
