#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int t[51][51][51];
long long int solve(int m, int n, int r, int c, int maxMove)
{
    // checking the out of bound condtion
    if (r >= m || c >= n || r < 0 || c < 0)
        return 1;

    // Tracking the moves
    if (maxMove == 0)
        return 0;

    if (t[r][c][maxMove] != -1)
        return t[r][c][maxMove];

    // Making recursive calls to the adjacent cells
    int ans = ((solve(m, n, r + 1, c, maxMove - 1) % MOD) +
               (solve(m, n, r, c + 1, maxMove - 1) % MOD) +
               (solve(m, n, r - 1, c, maxMove - 1) % MOD) +
               (solve(m, n, r, c - 1, maxMove - 1) % MOD)) %
              MOD;
    return t[r][c][maxMove] = ans;
}
int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
{
    memset(t, -1, sizeof(t));
    return solve(m, n, startRow, startColumn, maxMove);
}

int main()
{
    return 0;
}