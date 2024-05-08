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

int solve(vector<int> &coins, int M, int V, int ans, int i, vector<vector<int>> &dp)
{
    // Base case
    if (V == 0)
    {
        return ans;
    }
    if (i >= M)
        return INT_MAX;

    if (dp[V][i] != -1)
        return dp[V][i];

    // Recurrence Relation
    // If eligible, then there is a choice to pick and not pick
    int res1 = solve(coins, M, V, ans, i + 1, dp);
    int res2 = INT_MAX;
    if (coins[i] <= V)
    {
        res2 = solve(coins, M, V - coins[i], ans + 1, i, dp);
    }

    return dp[V][i] = min(res1, res2);
}

int minCoins(vector<int> &coins, int M, int V)
{
    sort(coins.begin(), coins.end(), greater<int>());
    int ans = 0;
    int i = 0;
    vector<vector<int>> dp(1e6 + 1, vector<int>(1e6, -1));
    ans = solve(coins, M, V, ans, i, dp);
    if (ans == INT_MAX)
        return -1;
    return ans;
}

int main()
{

    return 0;
}