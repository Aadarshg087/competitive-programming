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

void solve(vector<vector<string>> &board, int m, int n, int i, int j)
{
    // Base Case
    if (i == m - 1 || j == n - 1)
    {
        return;
    }
    
    // Recurrence Relation
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> board(n, vector<string>(n));
    vector<vector<string>> ans;
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < m; i++)
    {
        ans.push_back(solve(board, m, n, 0, i));
    }
    return ans;
}

int main()
{

    return 0;
}