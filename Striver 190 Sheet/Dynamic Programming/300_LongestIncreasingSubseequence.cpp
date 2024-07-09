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

int t[2501][2501];
int solve(int i, vector<int> &nums, int prev)
{
    if (i == nums.size())
        return 0;

    if (prev != -1 && t[i][prev] != -1)
        return t[i][prev];

    int a = 0;
    int b = 0;
    if (prev == -1 || nums[i] > nums[prev])
        a = 1 + solve(i + 1, nums, i);

    b = solve(i + 1, nums, prev);

    if (prev != -1)
        t[i][prev] = max(a, b);
    return max(a, b);
}

int lengthOfLIS(vector<int> &nums)
{
    int i = 0;
    int prev = -1;
    int size = 0;
    memset(t, -1, sizeof(t));
    return solve(i, nums, prev);
}

// A little better optimization
/*
- We are skipping the elements at every index and picking if eligible(if greater than the prev index element)
- this way we are creating all the combination for all solution
T.C - O(n*n)
S.C - O(n*n) + O(n) = dp matrix space + aux stack space
*/
int solve(int i, vector<int> &nums, int prev, vector<vector<int>> &dp)
{
    if (i == nums.size())
        return 0;

    if (dp[i][prev + 1] != -1)
        return dp[i][prev + 1];

    int a = 0;
    int b = 0;
    b = solve(i + 1, nums, prev);
    if (prev == -1 || nums[i] > nums[prev])
        a = 1 + solve(i + 1, nums, i);

    return dp[i][prev + 1] = max(a, b);
}

int lengthOfLIS(vector<int> &nums)
{
    int i = 0;
    int prev = -1;
    int size = 0;
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(i, nums, prev, dp);
}

int main()
{

    return 0;
}