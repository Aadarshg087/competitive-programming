#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int t[71][71][71];
int solve(vector<vector<int>> &grid, int row, int c1, int c2)
{
    // Base case
    if (row >= m)
        return 0;

    int cherry = grid[row][c1];
    if (c1 != c2)
        cherry += grid[row][c2];

    if (t[row][c1][c2] != -1)
        return t[row][c1][c2];

    // Relation
    int ans = 0;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int newRow = row + 1;
            int newCol1 = c1 + i;
            int newCol2 = c2 + j;

            if (newCol1 < n && newCol1 >= 0 && newCol2 >= 0 && newCol2 < n)
            {
                ans = max(ans, solve(grid, newRow, newCol1, newCol2));
            }
        }
    }

    return t[row][c1][c2] = cherry + ans;
}

int cherryPickup(vector<vector<int>> &grid)
{
    m = grid.size();
    n = grid[0].size();
    memset(t, -1, sizeof(t));
    return solve(grid, 0, 0, n - 1);
}

int main()
{

    return 0;
}