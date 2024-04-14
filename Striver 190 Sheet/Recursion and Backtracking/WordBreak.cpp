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

// ---------------------- Actual Solution -------------------------------

int t[301];
bool solve(string &s, unordered_set<string> &st, int i)
{
    if (i == s.size())
        return 1;

    for (int l = 1; l <= s.size(); l++)
    {
        string temp = s.substr(i, l);
        if (st.find(temp) != st.end() && solve(s, st, i + l))
        {
            return t[i] = 1;
        }
    }
    return t[i] = 0;
}

bool wordBreak(string s, vector<string> &wordDict)
{
    int n = s.size();
    unordered_set<string> st;
    memset(t, -1, sizeof(t));
    for (string l : wordDict)
        st.insert(l);
    int i = 0;
    return solve(s, st, i);
}

// ------------------------------------- My first Attempt -------------------------------------
// Not able to memoize

bool solve(string s, unordered_set<string> &st, string temp, int i)
{
    // Base case
    if (i >= s.size())
    {
        return 1;
    }
    // Recurrence Relation
    temp += s[i];
    bool p = 0, q = 0;
    q = solve(s, st, temp, i + 1);
    if (st.find(temp) != st.end())
    {
        temp = "";
        p = solve(s, st, temp, i + 1);
    }
    if (i == s.size() - 1 && p)
        return false;
    else if (i == s.size() - 1)
        return false;
    return p || q;
}

bool wordBreak(string s, vector<string> &wordDict)
{
    int n = s.size();
    unordered_set<string> st;
    string temp = "";
    int i = 0;
    return solve(s, st, temp, i);
}

int main()
{

    return 0;
}