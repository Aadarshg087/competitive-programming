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

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    int n = strs.size();
    int t = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, (int)strs[i].size());
    }
    while (t < mini)
    {
        ans += strs[0][t];
        for (int i = 0; i < n; i++)
        {
            cout << strs[i][t] << endl;
            if (t >= strs[i].size() || ans.back() != strs[i][t])
            {
                ans.pop_back();
                return ans;
            }
        }
        t++;
    }
    return ans;
}

int main()
{

    return 0;
}