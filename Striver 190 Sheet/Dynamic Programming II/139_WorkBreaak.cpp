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

bool solve(string &s, int i, unordered_set<string> &st, vector<int> &dp)
{
    if (i == s.size())
        return 1;

    for (int l = 1; l + i < s.size(); l++)
    {
        string temp = s.substring(i, l);
        if (st.find(temp) != st.end() && solve(s, l + 1, st, dp))
        {
            return 1;
        }
    }
    return 0;
}

bool wordBreak(string s, vector<string> &wordDict)
{
    unordered_set<string> st;
    for (string s : wordDict)
        st.insert(s);
    int n = s.size();
    vector<int> dp(n + 1, -1);
    return solve(s, 0, st, dp);
}

int main()
{

    return 0;
}