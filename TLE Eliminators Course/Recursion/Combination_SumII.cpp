#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> helper(vector<int> &s, int target, int sum, vector<int> temp)
{
    if (sum == target)
    {
        vector<vector<int>> ans;
        ans.push_back(temp);
        return ans;
    }
    // if (s.empty())
    // {
    //     return;
    // }
    vector<vector<int>> ans;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        auto new_s = s;
        if (sum + *i <= target)
        {
            sum += *i;
            temp.push_back(*i);
            new_s.erase(i);
            ans = helper(new_s, target, sum, temp);
        }
    }
    return ans;
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<int> temp;
    return helper(candidates, target, 0, temp);
}

int main()
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum2(candidates, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}