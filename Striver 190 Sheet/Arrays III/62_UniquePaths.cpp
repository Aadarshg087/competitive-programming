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

int solve(int m, int n, int i, int j, vector<vector<int>> &t)
{
    // Base case
    if (i == m - 1 && j == n - 1)
        return 1;

    if (t[i][j] != -1)
        return t[i][j];
    // Relation
    int ans = 0;
    if (i + 1 < m)
        ans = solve(m, n, i + 1, j, t);
    if (j + 1 < n)
        ans += solve(m, n, i, j + 1, t);
    return t[i][j] = ans;
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> t(101, vector<int>(101, -1));
    return solve(m, n, 0, 0, t);
}

int main()
{

    return 0;
}