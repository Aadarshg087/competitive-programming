#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int> &nums)
{
    map<int, int> mp;
    int maxFreq = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        int num = mp[nums[i]];
        maxFreq = max(maxFreq, num);
    }

    int sum = 0;

    for (auto i : mp)
    {
        if (i.second == maxFreq)
            sum += i.second;
    }
    return sum;
}

int main()
{

    return 0;
}