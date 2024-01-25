#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Bottum up -----------------------------
int longestCommonSubsequence(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    int t[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        t[i][0] = 0;
    }

    for (int j = 0; j < n + 1; j++)
    {
        t[0][j] = 0;
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }
    return t[m][n];
}

//  Memoization ------------ O(m*n) ---------------------
int t[1001][1001];
int solve(string &s1, string &s2, int i1, int i2)
{
    if (i1 >= s1.size())
        return 0;
    if (i2 >= s2.size())
        return 0;

    if (t[i1][i2] != -1)
        return t[i1][i2];

    int ans = 0;
    if (s1[i1] == s2[i2])
    {
        return t[i1][i2] = 1 + solve(s1, s2, i1 + 1, i2 + 1);
    }
    else
    {
        return t[i1][i2] = max(solve(s1, s2, i1 + 1, i2),
                               solve(s1, s2, i1, i2 + 1));
    }
}
int longestCommonSubsequence(string text1, string text2)
{
    memset(t, -1, sizeof(t));
    return solve(text1, text2, 0, 0);
}

int main()
{

    return 0;
}