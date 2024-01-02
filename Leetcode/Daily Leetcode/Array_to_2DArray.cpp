#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<vector<int>> ans;
    ans.push_back({});
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) == mp.end())
        {
            ans[0].push_back(nums[i]);
            mp[nums[i]]++;
        }
        else
        {
            auto it = mp.find(nums[i]);
            if (it->second >= ans.size())
                ans.push_back({});
            ans[it->second].push_back(nums[i]);
            mp[nums[i]]++;
        }
    }
    return ans;
}

int main()
{

    return 0;
}