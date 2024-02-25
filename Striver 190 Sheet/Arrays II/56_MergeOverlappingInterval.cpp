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
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    // sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    int n = intervals.size();
    for (int i = 1; i < n; i++)
    {
        if (ans[ans.size() - 1][1] >= intervals[i][0])
        {
            ans[ans.size() - 1][0] = min(ans[ans.size() - 1][0], intervals[i][0]);
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