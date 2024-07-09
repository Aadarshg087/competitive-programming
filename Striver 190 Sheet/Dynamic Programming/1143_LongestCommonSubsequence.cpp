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

int solve(string text1, string text2, int i, int j)
{
    // Base case
    if (j == text2.size() || i == text1.size())
        return 0;

    int a = 0;
    int b = 0;
    int c = 0;
    if (text1[i] == text2[j])
    {
        a = 1 + solve(text1, text2, i + 1, j + 1); // pick
        b = 1 + solve(text1, text2, i + 1, j);     // not pick
    }
    else
        c = solve(text1, text2, i + 1, j);
    return max({a, b, c});
}

int longestCommonSubsequence(string text1, string text2)
{
    if (text1.size() < text2.size())
        return solve(text2, text1, 0, 0);
    else
        return solve(text1, text2, 0, 0);
}

int main()
{

    return 0;
}