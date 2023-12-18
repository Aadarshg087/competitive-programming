#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

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

vector<vector<int>> helper(vector<int> &nums, int i, int n)
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
    for (int j = 0; j < s; j++)
    {
        vector<int> temp = ans[j];
        temp.push_back(nums[i]);
        ans.push_back(temp);
    }

    return ans;
}

vector<vector<int>> subsets1(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    return helper(nums, i, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {1, 2, 3};
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cin >> nums[i];
    // }
    // printVector(nums);
    vector<vector<int>> v = subsets1(nums);
    printVector(v);

    // vector<vector<int>> ans;
    // vector<int> v1 = {};
    // vector<int> v2 = {2, 3};
    // vector<int> v3 = {1, 2, 3};
    // vector<int> v4 = {1};

    // ans.push_back(v1);
    // ans.push_back(v2);
    // ans.push_back(v3);
    // ans.push_back(v4);
    // printVector(ans);

    return 0;
}