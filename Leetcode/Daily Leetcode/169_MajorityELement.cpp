#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n / 2];
}

int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int mini = 0;
    int minF = 0;
    for (auto i : mp)
    {
        if (i.second > minF)
        {
            mini = i.first;
            minF = i.second;
        }
    }
    return mini;
}

int main()
{

    return 0;
}