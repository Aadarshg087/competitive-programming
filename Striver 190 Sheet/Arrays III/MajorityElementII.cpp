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
//  Basic Approach
// T.C - O(n) and S.C - O(n)
vector<int> majorityElementII(vector<int> nums)
{
    int n = nums.size();
    // sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    vector<int> ans;
    for (auto i : mp)
        if (i.second > (n / 3))
            ans.push_back(i.first);

    return ans;
}

int main()
{

    return 0;
}