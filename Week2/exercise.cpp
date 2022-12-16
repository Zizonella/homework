#include <iostream>
#include "GlobalVar.h"
#include <ctime>
using namespace std;

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

bool hasWon(const char symbol, const char board[3][3], int win[3][2]) // adding const will make it sure it is not mutable
{
    int row = 0;
    int col = 0;
    bool match = false;
    for (int game = 0; game < 8; game++)
    {
        for (int j = 0; j < 3; j++)
        {
            row = winningStates[game][j][0];
            col = winningStates[game][j][1];
            if (board[row][col] == symbol)
            {
                win[j][0] = row;
                win[j][1] = col;
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
    srand(time(NULL)); // better to use a time based seed
    char board[3][3];
    bool gameOver = false;

    int row = 0;
    int col;
    char player = PLAYER_1;
    int count = 0;
    int win[3][2];

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
        gameOver = hasWon(player, board, win);
        if (gameOver)
        {
            string result = (player == 'O') ? "Player 1" : "Player 2";
            cout << endl
                 << "And the winner is " << result << endl
                 << "and the winning combination is: " << endl;
        }
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
            gameOver = true;
        }
        cout << endl;
        Display(board);
    }
    return 0;
}
