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

int count(string &s, char ch, int i, int n)
{
    int count = 0;
    while (i < n && s[i] == ch)
    {
        i++;
        count++;
    }
    return count;
}

string countAndSay(int n)
{
    string ans = "1";
    while (ans.size() < n)
    {
        string temp = "";
        int i = 0;
        while (i < ans.size())
        {
            int occ = count(ans, ans[i], i, n);
            temp += to_string(occ);
            temp.push_back(ans[i]);
            i += occ;
        }
        ans = temp;
    }
    return ans;
}

int main()
{

    return 0;
}