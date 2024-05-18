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

// Basic Approach
/*
- Try all substrings and check for the palindrome
- one with the largest size, print it;

*/

bool checkPalindrome(string &s, int i, int j, vector<vector<int>> &t)
{
    while (i < j)
    {
        if (t[i][j] != -1)
            return t[i][j];

        if (t[i][j] != -1)
            return t[i][j];
        if (s[i++] != s[j--])
            return t[i][j] = false;
    }
    return t[i][j] = true;
}
string longestPalindrome(string s)
{
    int n = s.size();
    vector<vector<int>> t(1001, vector<int>(1001, -1));
    int maxi = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j - i + 1 > maxi && checkPalindrome(s, i, j, t))
            {
                ans = s.substr(i, j - i + 1);
                maxi = ans.size();
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}