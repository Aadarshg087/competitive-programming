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

// bool checkPalindrome1(string s)
// {
//     int i = 0;
//     int j = s.size() - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//             return false;
//         i++;
//         j--;
//     }

//     return true;
// }

// void solve(string &s, int n, int i, string t, vector<string> temp, vector<vector<string>> &ans)
// {
//     // Base condition
//     if (i >= n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     // Recurrence Relation
//     temp.push_back(s[i]);
//     solve(s, n, i + 1, t, temp, ans);
//     t += s[i];
//     if (checkPalindrome(t))
//     {
//         temp.push_back(t);
//         solve(s, n, i + 1, t, temp, ans);
//     }
//     else
//     {
//     }
// }
// vector<vector<string>> partition(string s)
// {
//     int n = s.size();
//     vector<vector<string>> ans;
//     vector<string> temp;
//     string t = "";
//     solve(s, n, 0, t, temp, ans);
//     return ans;
// }

// Approach -----------------------------
/*
- We are gonna run a for loop and check for the plaindomr and move ahead
-
*/

int t[17][17]; // Memoization
bool checkPalindrome(string &s, int i, int j)
{
    while (i < j)
    {
        if (t[i][j] != -1)
        {
            return t[i][j];
        }
        if (s[i++] != s[j--])
            return t[i - 1][j + 1] = false;
    }

    return t[i][j] = true;
}

void solve(string &s, int i, vector<string> temp, vector<vector<string>> &ans)
{
    // Base case
    if (i >= s.size())
    {
        ans.push_back(temp);
        return;
    }

    // Recurrence Relations
    for (int j = i; j < s.size(); j++)
    {
        if (checkPalindrome(s, i, j))
        {
            temp.push_back(s.substr(i, j - i + 1));
            solve(s, j + 1, temp, ans);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    int n = s.size();
    vector<vector<string>> ans;
    vector<string> temp;
    memset(t, -1, sizeof(t));
    solve(s, 0, temp, ans);
    return ans;
}

int main()
{

    return 0;
}