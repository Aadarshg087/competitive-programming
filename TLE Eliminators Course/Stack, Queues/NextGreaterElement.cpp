#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Force
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums2.size(); i++)
    {
        mp.insert({nums2[i], i});
    }

    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++)
    {
        auto it = mp.find(nums1[i]);
        int loc = it->second;
        bool check = false;
        for (int j = loc; j < nums2.size(); j++)
        {
            if (nums2[j] > nums2[loc])
            {
                ans.push_back(nums2[j]);
                check = true;
                break;
            }
        }
        if (!check)
        {
            ans.push_back(-1);
        }
    }

    return ans;
}

int main()
{

    return 0;
}