#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}

vector<int> solve(vector<int> &nums, int i, int prevLCM, int maxE)
{
    if (i == nums.size())
        return {};

    vector<int> ans;
    vector<int> temp;
    if (lcm(nums[i], prevLCM) == maxE)
    {
        prevLCM = lcm(nums[i], prevLCM);
        maxE = max(maxE, nums[i]);
        temp = solve(nums, i + 1, prevLCM, maxE);
        temp.push_back(nums[i]);
    }
    else
    {
        temp = solve(nums, i + 1, prevLCM, maxE);
    }
    ans = temp;
    return ans;
}temp

vector<int> solve1(vector<int> nums, int i)
{
    if (i >= nums.size())
        return {};

    if (i == 0)
    {
    }
}

vector<int> largestDivisibleSubset(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int maxE = nums[0];
    // return solve(nums, 0, nums[0], maxE);
    return solve1(nums, 0);
}

// vector<int> largestDivisibleSubset(vector<int> &nums)
// {
//     vector<int> ans;
//     int n = nums.size();
//     vector<int> temp;
//     temp.push_back(nums[0]);
//     int maxE = nums[0];
//     int prevLCM = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         maxE = max(maxE, nums[i]);
//         if (lcm(nums[i], prevLCM) == maxE)
//         {
//             temp.push_back(nums[i]);
//             prevLCM = lcm(nums[i], prevLCM);
//         }
//         else
//         {
//             if (temp.size() > ans.size())
//                 ans = temp;
//             temp.push_back(nums[i]);
//             maxE = nums[i];
//             prevLCM = nums[i];
//         }
//     }
//     if (temp.size() > ans.size())
//         ans = temp;
//     return ans;
// }

int main()
{
    vector<int> v{2, 3, 4, 8};
    // vector<int> v{1, 2, 4, 8};
    vector<int> a = largestDivisibleSubset(v);
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}