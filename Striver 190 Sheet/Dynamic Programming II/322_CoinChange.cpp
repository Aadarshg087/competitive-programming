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

int solve(vector<int> &coins, int i, int amount, vector<vector<int>> &dp)
{
    // Base case
    if (i == 0)
    {
        if (amount % coins[i] == 0)
            return amount / coins[i];
        else
            return 1e9;
    }
    if (dp[i][amount] != -1)
        return dp[i][amount];

    // Recurrence Relation
    int notTake = solve(coins, i - 1, amount, dp);
    int take = INT_MAX;
    if (amount - coins[i] >= 0)
        take = 1 + solve(coins, i, amount - coins[i], dp);
    return dp[i][amount] = min(take, notTake);
}
int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    int ans = solve(coins, n - 1, amount, dp);
    if (ans >= 1e9)
        return -1;
    else
        return ans;
}

int main()
{

    return 0;
}