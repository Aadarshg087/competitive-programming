#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
vector<string>
solve(int n, string res, int open, int close)
{
    if (res.size() == 2 * n)
    {
        ans.push_back(res);
    }

    if (open < n)
    {
        res += "(";
        solve(n, res, open + 1, close);
    }
    if (close < open)
    {
        res += ")";
        solve(n, res, open, close);
    }
    return vector<string> ans;
}

vector<string> generateParenthesis(int n)
{
    return solve(n, s, 0, 0);
}

int main()
{

    return 0;
}