#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

bool isValid(vector<vector<char>> &board, char ch, int r, int c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[r][i] == ch)
            return false;
        if (board[i][c] == ch)
            return false;
        if (board[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == ch)
            return false;
    }
    return true;
}

bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char ch = '1'; ch <= '9'; ch++)
                {
                    if (isValid(board, ch, i, j))
                    {
                        if (solve(board))
                            return 1;
                        else
                            board[i][j] = '.';
                    }
                }
            }
            return 0;
        }
    }
    return 1;
}

void solveSudoku(vector<vector<char>> &board)
{
    solve(board);
}

int main()
{

    return 0;
}