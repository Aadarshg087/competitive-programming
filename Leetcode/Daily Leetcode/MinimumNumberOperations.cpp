#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  Better Approach -----------------------
int minOperations(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int res = 0;
    for (auto i : mp)
    {
        if (i.second < 2)
            return -1;
        res += ceil((double)i.second / 3);
    }
    return res;
}

int minOperations(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int res = 0;
    for (auto i : mp)
    {
        if (i.second < 2)
        {
            return -1;
        }
        res += i.second / 3;
        if (i.second % 3 == 1)
        {
            res--;
            res += 2;
        }
        else if (i.second % 3 == 2)
        {
            res++;
        }
    }
    return res;
}

int main()
{

    return 0;
}