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
// First try ----------------------

bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }

    return true;
}

void solve(string &s, int n, int i, string t, vector<string> temp, vector<vector<string>> &ans)
{
    // Base condition
    if (i >= n)
    {
        ans.push_back(temp);
        return;
    }

    // Recurrence Relation
    temp.push_back(s[i]);
    solve(s, n, i + 1, t, temp, ans);
    t += s[i];
    if (checkPalindrome(t))
    {
        temp.push_back(t);
        solve(s, n, i + 1, t, temp, ans);
    }
    else
    {
    }
}
vector<vector<string>> partition(string s)
{
    int n = s.size();
    vector<vector<string>> ans;
    vector<string> temp;
    string t = "";
    solve(s, n, 0, t, temp, ans);
    return ans;
}

int main()
{

    return 0;
}