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

void solve(vector<int> &nums, vector<int> temp, vector<vector<int>> &ans, vector<int> t)
{
    // base case
    if (temp.size() == nums.size())
    {
        ans.push_back(temp);
        return;
    }

    if (i >= nums.size())
        return;

    // Recurrence Relatiom
    for (int j = 0; j < nums.size(); j++)
    {
        if (t[j] == -11)
            continue;
        temp.push_back(nums[j]);
        t[j] = -11;
        solve(nums, temp, ans, t);
        temp.pop_back();
        t[j] = nums[j];
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    int n = nums.size();
    vector<int> temp;
    vector<vector<int>> ans;
    vector<int> t(nums.begin(), nums.end());
    solve(nums, temp, ans, t);
    return ans;
}

int main()
{

    return 0;
}