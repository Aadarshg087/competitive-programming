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

// Brute Force Approach
bool isPalindrome(string s)
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
string longestPalindrome(string s)
{
    int n = s.size();
    string temp = "";
    string ans = "";
    if (isPalindrome(s))
        return s;
    for (int i = 0; i < n; i++)
    {
        temp = "";
        for (int j = i; j < n; j++)
        {
            temp += s[j];
            if (isPalindrome(temp) && temp.size() > ans.size())
            {
                ans = temp;
            }
        }
    }
    return ans;
}
// --------------------------------

// Now, trying to implement DP
int t[1001][1001];
bool PalindromeCheck(int i, int j, string &s)
{
    // Base
    if (i >= j)
        return true;

    if (t[i][j] != -1)
        return t[i][j];

    // Relation
    if (s[i] != s[j])
        return t[i][j] = false;
    return t[i][j] = PalindromeCheck(i + 1, j - 1, s);
}
string longestPalindrome1(string s)
{
    memset(t, -1, sizeof(t));
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j - i + 1 > (int)ans.size() && PalindromeCheck(i, j, s))
            {
                ans = s.substr(i, j - i + 1);
            }
        }
    }
    return ans;
}

int main()
{
    string s = "abcd";
    string temp = s.substr(1, 1);
    cout << temp << endl;

    return 0;
}