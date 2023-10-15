#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string s1, string s2)
{
    //  Base case
    if (s1.length() == 0 || s2.length() == 0)
    {
        return 0;
    }
    int res1 = INT_MIN, res2 = INT_MIN;
    // Small Calculation
    if (s1[0] == s2[0])
    {
        int ans1 = 1 + longestCommonSubsequence(s1.substr(1), s2.substr(1));
        res1 = ans1;
    }
    else
    {
        // Recursive Call
        int ans1 = longestCommonSubsequence(s1, s2.substr(1));
        int ans2 = longestCommonSubsequence(s1.substr(1), s2);
        res2 = max(ans1, ans2);
    }

    return max(res1, res2);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << longestCommonSubsequence(s1, s2) << endl;

    return 0;
}