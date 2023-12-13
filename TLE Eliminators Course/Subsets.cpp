#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void printVector(vector<vector<int>> ans)
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

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> v = {};
    vector<vector<int>> ans;
    ans.push_back(v);
    for (int i = 0; i < (int)nums.size(); i++)
    {
        v.push_back(nums[i]);
        ans.push_back(v);
        v.clear();
        for (int j = i + 1; j < nums.size(); j++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            ans.push_back(v);
            v.clear();
        }
    }
    printVector(ans);
    return ans;
}

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    subsets(nums);
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