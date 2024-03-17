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

// Brute force - O(N^2) Barely passed the question
int numSubarraysWithSum(vector<int> &nums, int goal)
{
    int n = nums.size();
    vector<int> pre(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = pre[i - 1] + nums[i - 1];
    }

    int count = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (nums[i] == goal)
            count++;
        for (int j = i + 1; j < n + 1; j++)
        {
            if (nums[j] - nums[i] == goal)
            {
                count++;
            }
        }
    }

    return count;
}

// Better solution
int numSubarraysWithSum(vector<int> nums, int goal)
{
    int n = nums.size();
    vector<int> pre(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = pre[i - 1] + nums[i - 1];
    }
}

int main()
{

    return 0;
}