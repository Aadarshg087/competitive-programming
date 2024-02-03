#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool solve(string p, string s, int i, int j)
{
    // Base case
    if (i == s.size() && j == p.size())
    {
        return true;
    }
    if (i != s.size() && j == p.size())
    {
        return false;
    }

    // Recursive call
    bool ans = false;
    if (p[j] != '?' && p[j] != '*' && p[j] != s[i])
    {
        return false;
    }
    else if (p[j] == '?')
    {
        ans = solve(p, s, i + 1, j + 1);
    }
    else if (p[j] == '*')
    {
        ans = solve(p, s, i, j) | solve(p, s, i + 1, j) | solve(p, s, i + 1, j + 1) | solve(p, s, i, j + 1);
    }
    else
    {
        // The normal character matches with p
        ans = solve(p, s, i + 1, j + 1);
    }
    return ans;
}

int main()
{
    string p = "a*b";
    string s = "abcde";
    // if (solve(p, s, 0, 0))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    //     cout << "NO" << endl;

    return 0;
}