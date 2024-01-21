#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n + 1, 0);
    ans[0] = 0;
    ans[1] = nums[0];
    for (int i = 2; i < n; i++)
    {
        int steal = nums[i - 1] + ans[i - 2];
        int skip = ans[i - 1];

        ans[i] = max(steal, skip);
    }
    return ans[n];
}

// Memoization Solution (Top Down Approach)
int arr[101];
int solve(vector<int> &nums, int i)
{
    if (i >= nums.size())
        return 0;

    // Memoization
    if (arr[i] != -1)
        return arr[i];

    // Making sure that we are not including adjacent houses
    int ans1 = nums[i] + solve(nums, i + 2);
    int ans2 = solve(nums, i + 1);

    return arr[i] = max(ans1, ans2);
}
int rob(vector<int> &nums)
{
    memset(arr, -1, sizeof(arr));
    int i = 0;
    return solve(nums, i);
}

int main()
{

    return 0;
}