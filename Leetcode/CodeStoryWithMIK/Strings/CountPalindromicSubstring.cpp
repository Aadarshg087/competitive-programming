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

// Brute Force using two for loops ---------------------
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
int countSubstrings(string s)
{
    int n = s.size();
    string temp = "";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        temp = "";
        for (int j = i; j < n; j++)
        {
            temp += s[j];
            if (isPalindrome(temp))
                count++;
        }
    }
    return count;
}

// Better Approach ---------------
int t[1001][1001];
bool isPalindrome(int i, int j, string &s)
{
    if (i > j)
        return true;
    if (t[i][j] != -1)
        return t[i][j];

    if (s[i] != s[j])
        return t[i][j] = false;
    return t[i][j] = isPalindrome(i + 1, j - 1, s);
}

int countSubstrings(string s)
{
    int n = s.size();
    memset(t, -1, sizeof(t));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isPalindrome(i, j, s))
                count++;
        }
    }
    return count;
}

// Optimal Approach --------------------
int t[1001][1001];
int countSubstrings(string s)
{
    memset(t, 0, sizeof(t));
    int n = s.size();
    int count = 0;
    for (int L = 1; L <= n; L++)
    {
        for (int i = 0; i + L - 1 < n; i++)
        {
            int j = i + L - 1;
            if (i == j)
                t[i][j] = true;
            else if (i + 1 == j && s[i] == s[j])
                return t[i][j] = true;
            else
            {
                if (s[i] == s[j] && t[i + 1][j - 1] == 1)
                    t[i][j] = true;
            }

            if (t[i][j])
                count++;
        }
    }
    return count;
}
int main()
{

    return 0;
}