#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &board, int i, int j, char ch)
{
    for (int k = 0; k < 9; k++)
    {
        if (board[i][k] == ch)
            return false;
        if (board[k][j] == ch)
            return false;

        if (board[3 * (i / 3) + k / 3][3 * (j / 3) + k % 3] == ch)
            return false;
    }

    return true;
}
bool solve(vector<vector<char>> &board, int rows, int cols)
{
    int num = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {

                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board, rows, cols))
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>> &board)
{
    int rows = board.size();
    int cols = board[0].size();

    solve(board, rows, cols);
}

int main()
{

    return 0;
}