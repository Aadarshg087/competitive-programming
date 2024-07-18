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

int solve(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &dp)
{
    // Base case
    if (i + 1 == grid.size() && j + 1 == grid[0].size())
        return grid[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    // Recurrence Relation
    int a = INT_MAX;
    int b = INT_MAX;
    if (i + 1 < grid.size())
        a = grid[i][j] + solve(grid, i + 1, j, dp);

    if (j + 1 < grid[0].size())
        b = grid[i][j] + solve(grid, i, j + 1, dp);
    return dp[i][j] = min(a, b);
}

int minPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return solve(grid, 0, 0, dp);
}

int main()
{

    return 0;
}