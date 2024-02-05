#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int k, int i)
{
    // Base case
    if (i == arr.size())
        return 0;

    // Recursive Calls
    int currMax = -1;
    int res = 0;
    for (int j = i; j < arr.size() && j - i + 1 <= k; j++)
    {
        currMax = max(currMax, arr[j]);
        int sum = (j - i + 1) * currMax;
        int ans = sum + solve(arr, k, j + 1);
        res = max(res, ans);
    }
    return res;
}

int maxSumAfterPartitioning(vector<int> &arr, int k)
{
    return solve(arr, k, 0);
}

int main()
{

    return 0;
}