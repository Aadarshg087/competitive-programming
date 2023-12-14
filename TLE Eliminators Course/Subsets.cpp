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
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            if (j == ans[i].size() - 1)
                cout << ans[i][j];
            else
                cout << ans[i][j] << ",";
        }
        cout << "], ";
    }
    cout << "]";
}

void helper() {}

vector<vector<int>> subsets(vector<int> &nums)
{
    // ------------ 1st Approach Kinda --------------------------
    // vector<vector<int>> ans;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     vector<int> temp;
    //     temp.push_back(nums[i]);
    //     ans.push_back(temp);
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         vector<int> temp1;
    //         temp1.push_back(nums[i]);
    //         temp1.push_back(nums[j]);
    //         ans.push_back(temp);
    //     }
    // }
    // vector<int> temp = {};
    // ans.push_back(temp);
    // return ans;

    // -------------------- 2nd Approach ------------------------------
    if (nums.size() == 0)
    {
        vector<int> temp(0);
        vector<vector<int>> ans;
        ans.push_back(temp);
        return ans;
    }
    vector<int> temp;
    nums.erase(nums.begin());
    vector<vector<int>> ans = subsets(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        temp = ans[i];
        temp.push_back(nums[0]);
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
    // temp.push_back(nums[0]);
    // ans.push_back(temp);
}

void solve()
{
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
    vector<vector<int>> v = subsets(nums);
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