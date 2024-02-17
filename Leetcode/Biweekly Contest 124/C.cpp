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

int solve(vector<int> &nums, int l1, int l2, int sum)
{
    if (l1 >= l2)
        return 0;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    if (nums[l1] + nums[l1 + 1] == sum)
    {
        count1 = 1 + solve(nums, l1 + 2, l2, sum);
    }
    if (nums[l1] + nums[l2] == sum)
    {
        count2 = 1 + solve(nums, l1 + 1, l2 - 1, sum);
    }
    if (nums[l2] + nums[l2 - 1] == sum)
    {
        count3 = 1 + solve(nums, l1, l2 - 2, sum);
    }

    return max(count1, max(count2, count3));
}

// int solve(vector<int> &nums, int l1, int l2, int sum1, int sum2, int sum3)
// {
//     if (l1 >= l2)
//         return 0;

//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     if (nums[l1] + nums[l2] == sum1 || nums[l1] + nums[l2] == sum2 || nums[l1] + nums[l2] == sum3)
//     {
//         count1 = 1 + solve(nums, l1 + 1, l2 - 1, sum1, sum2, sum3);
//     }
//     if (nums[l1] + nums[l1 + 1] == sum1 || nums[l1] + nums[l1 + 1] == sum2 || nums[l1] + nums[l1 + 1] == sum3)
//     {
//         count2 = 1 + solve(nums, l1 + 2, l2, sum1, sum2, sum3);
//     }
//     if (nums[l2] + nums[l2 - 1] == sum1 || nums[l2] + nums[l2 - 1] == sum2 || nums[l2] + nums[l2 - 1] == sum3)
//     {
//         count3 = 1 + solve(nums, l1, l2 - 2, sum1, sum2, sum3);
//     }

//     return max(count1, max(count2, count3));
// }

int maxOperations(vector<int> &nums)
{
    int n = nums.size();
    int l1 = 0;
    int l2 = n - 1;
    int count = 0;
    int sum1 = nums[l1] + nums[l1 + 1];
    int sum2 = nums[l2 - 1] + nums[l2];
    int sum3 = nums[l1] + nums[l2];
    // int ans = solve(nums, l1, l2, sum1, sum2, sum3);
    int count1 = solve(nums, l1 + 2, l2, sum1);
    int count2 = solve(nums, l1, l2 - 2, sum2);
    int count3 = solve(nums, l1 + 1, l2 - 1, sum3);
    int ans = max(count1, max(count2, count3));
    return (ans == 0) ? 1 : ans + 1;
}

int main()
{
    vector<int> nums{1, 7, 4, 5};
    cout << maxOperations(nums) << endl;
    return 0;
}