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
// s = " the   sky is blue   ";

// Basic Approach -----------------------------
/*
- First I clean up the string from the side spaces and extra spaces in between
- Then I traversed from the back and reversed each string added it to the res string
- Took care of the excpetion of the last string separately
- returned the res string
- T.C - O(N) + O(N * n) + O(n)
- S.C - O(N)

*/
string reverseWords(string s)
{
    bool spaces = 0;
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && spaces)
        {
            ans += s[i];
            spaces = 0;
        }
        else if (s[i] != ' ')
        {
            ans += s[i];
            spaces = 1;
        }
    }
    if (ans[ans.size() - 1] == ' ')
    {
        ans.pop_back();
    }

    string temp = "";
    string res = "";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (ans[i] == ' ')
        {
            reverse(temp.begin(), temp.end());
            res += temp;
            res += " ";
            temp = "";
        }
        else
        {
            temp += ans[i];
        }
    }
    reverse(temp.begin(), temp.end());
    res += temp;
    return res;
}

int main()
{

    return 0;
}