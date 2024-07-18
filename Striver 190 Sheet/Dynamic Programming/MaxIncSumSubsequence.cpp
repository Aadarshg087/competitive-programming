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
int t[1001][1001];
int solve(int arr[], int n, int i, int prev)
{
    if (i == n)
        return 0;
    if (prev != -1 && t[i][prev] != -1)
        return t[i][prev];
    int a = 0;
    if (prev == -1 || arr[i] > arr[prev])
        a = arr[i] + solve(arr, n, i + 1, i);
    return t[i][prev] = max(a, solve(arr, n, i + 1, prev));
}
int maxSumIS(int arr[], int n)
{
    // Your code goes here
    int i = 0;
    int prev = -1;
    memset(t, -1, sizeof(t));
    return solve(arr, n, i, prev);
}

// A better approach
/*



*/
int solve(int arr[], int n, int i, int prev, vector<vector<int>> &dp)
{
    if (i == n)
        return 0;
    if (dp[i][prev + 1] != -1)
        return dp[i][prev + 1];
    int a = 0;
    if (prev == -1 || arr[i] > arr[prev])
        a = arr[i] + solve(arr, n, i + 1, i, dp);
    return dp[i][prev + 1] = max(a, solve(arr, n, i + 1, prev, dp));
}
int maxSumIS(int arr[], int n)
{
    // Your code goes here
    int i = 0;
    int prev = -1;
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(arr, n, i, prev, dp);
}

int main()
{

    return 0;
}