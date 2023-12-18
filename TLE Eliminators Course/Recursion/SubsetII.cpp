#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void printVector(vector<vector<int>> &ans)
{
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            if (j == ans[i].size() - 1)
                cout << ans[i][j];
            else
                cout << ans[i][j] << ",";
        }
        cout << " ] , ";
    }
    cout << "]";
}

vector<vector<int>> helper(vector<int> nums, int i, int n)
{
    vector<vector<int>> ans;
    if (i == n)
    {
        vector<int> temp = {};
        ans.push_back(temp);
        return ans;
    }
    ans = helper(nums, i + 1, n);
    int s = ans.size();
    vector<vector<int>> extra;
    for (int j = 0; j < s; j++)
    {
        vector<int> temp = ans[j];
        extra.push_back(ans[j]);
        temp.push_back(nums[i]);
        if (find(ans.begin(), ans.end(), temp) == ans.end())
        {
            ans.push_back(temp);
        }
    }

    return ans;
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    int n = nums.size();
    auto it = unique(nums.begin(), nums.begin() + n);
    nums.resize(distance(nums.begin(), it));
    int i = 0;
    n = nums.size();
    return helper(nums, i, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    vector<int> nums = {4, 4, 4, 1, 4};
    vector<vector<int>> v = subsetsWithDup(nums);
    printVector(v);

    return 0;
}