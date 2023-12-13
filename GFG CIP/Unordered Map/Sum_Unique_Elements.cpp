#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long unique_elements(vector<long> nums)
{
    // Your code here
    unordered_map<long, long> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second == 1)
            cout << i.first << " ";
    }
}

int main()
{

    return 0;
}