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

bool isValid(vector<vector<char>> &board, int a, int b, int r, int c, int p)
{
    for (int i = 1; i < r; i++)
    {
        if (board[i][b] == p)
            return false;
        if (board[a][i] == p)
            return false;
        // 3 x 3 box condition
    }

    return 1;
}

void solve(vector<vector<char>> &board, int r, int c, int a, int b)
{
    // Base case

    // Recurrence relation
    for (int i = a; i < r; i++)
    {
        for (int j = b; j < c; j++)
        {
            if (board[i][j] == '.')
            {
                bool b = 0;
                for (int p = 1; p <= 9; p++)
                {
                    if (isValid(board, r, c, i, j, p))
                    {
                        board[i][j] = p;
                        solve(board, r, c, i, j);
                        b = 1;
                    }
                }
                if (!b)
                    return;
            }
        }
    }
    return;
}
void solveSudoku(vector<vector<char>> &board)
{
    int r = board.size();
    int c = board[0].size();
    solve(board, r, c, 0, 0);
}

int main()
{

    return 0;
}