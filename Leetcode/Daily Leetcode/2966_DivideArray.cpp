#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> divideArray(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int n = nums.size();
    for (int i = 0; i < n - 2; i += 3)
    {
        if (abs(nums[i] - nums[i + 1]) <= k && abs(nums[i + 1] - nums[i + 2]) <= k && abs(nums[i] - nums[i + 2]) <= k)
        {
            temp.push_back(nums[i]);
            temp.push_back(nums[i + 1]);
            temp.push_back(nums[i + 2]);
            ans.push_back(temp);
            temp.clear();
        }

        else
        {
            vector<vector<int>> a;
            return a;
        }
    }
    return ans;
}

int main()
{

    return 0;
}