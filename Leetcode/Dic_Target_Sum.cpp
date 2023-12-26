#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t[31][1001];
int MOD = 1e9 + 7;
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