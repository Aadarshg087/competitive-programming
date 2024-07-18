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
bool solve(vector<int> &nums, int i, int currSum, int target, vector<vector<int>> &dp)
{
    if (i == nums.size())
        return 0;
    if (dp[i][currSum] != -1)
        return dp[i][currSum];

    if (currSum == target)
        return dp[i][currSum] = 1;
    bool notTake = solve(nums, i + 1, currSum, target, dp);
    bool take = solve(nums, i + 1, currSum + nums[i], target, dp);
    return dp[i][currSum] = take || notTake;
}

bool canPartition(vector<int> &nums)
{
    int i = 0;
    int remSum = 0;
    remSum = accumulate(nums.begin(), nums.end(), remSum);
    int currSum = 0;
    if (remSum & 1)
        return false;
    int target = remSum / 2;
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(remSum + 1, -1));
    return solve(nums, i, currSum, target, dp);
}

int main()
{

    return 0;
}