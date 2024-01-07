#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Min size of every array should be >=3
// Diff between every consecutive element should be same (can be anything)
// return 1 if found

int numberOfArithmeticSlices(vector<int> &nums)
{
    // array should min 3 size
    // diff should be same
    int n = nums.size();
    unordered_map<long, int> mp[n];

    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            long diff = (long)nums[i] - nums[j];

            auto it = mp[j].find(diff);
            int countJ = it == mp[j].end() ? 0 : it->second;

            mp[i][diff] += countJ + 1;
            result += countJ;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << numberOfArithmeticSlices(nums) << endl;

    return 0;
}