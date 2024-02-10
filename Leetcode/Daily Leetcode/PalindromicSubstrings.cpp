#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int memo[1001];
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int solve(string s, int i, string temp)
{
    if (i == s.size())
        return 0;

    int ans = 0;
    string t = "";
    int count = 0;
    for (int j = i; j < s.size(); j++)
    {
        t += s[j];
        if (isPalindrome(t))
        {
            count++;
        }
    }
    ans = count + solve(s, i + 1, temp);
    return ans;
}

int countSubstrings(string s)
{
    string temp = "";
    return solve(s, 0, temp);
}

int main()
{
    string s = "aba";
    cout << countSubstrings(s) << endl;

    return 0;
}