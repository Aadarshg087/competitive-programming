#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    mp.insert({0, 1});
    int sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (mp.find(sum - k) != mp.end())
        {
            auto it = mp.find(sum - k);
            res += it->second;
            it->second++;
        }
        mp[sum]++;
    }
    return res;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    subarraySum(v, 3);

    return 0;
}