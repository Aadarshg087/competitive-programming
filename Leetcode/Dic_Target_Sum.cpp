#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t[31][1001];
int MOD = 1e9 + 7;
// Bottom up approach ------------------------------
int solve2(int n, int k, int target)
{
    t[0][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < target + 1; j++)
        {

            int ways = 0;
            for (int face = 1; face <= k; face++)
            {
                if (j >= face)
                {
                    ways = (ways + t[i - 1][j - face]) % MOD;
                }
            }
            t[i][j] = ways;
        }
    }
    return t[n][target];
}

// --- Memoization ---------------------

int solve(int n, int k, int target)
{
    if (target < 0)
    {
        return 0;
    }
    if (t[n][target] != -1)
    {
        return t[n][target];
    }

    if (target == 0 && n == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans = (ans + solve(n - 1, k, target - i)) % MOD;
    }

    return t[n][target] = ans;
}

int numRollsToTarget(int n, int k, int target)
{
    memset(t, -1, sizeof(t));
    return solve(n, k, target);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int target;
    cin >> target;

    cout << numRollsToTarget(n, k, target) << endl;

    return 0;
}