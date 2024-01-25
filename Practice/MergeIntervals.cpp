#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    // Code here
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        if (ans[ans.size() - 1][1] > intervals[i][0])
        {
            ans[ans.size() - 1][1] = max(ans[ans.size() - 1][1], intervals[i][1]);
        }
        else
        {
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}