#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    string res = "";
    int n = s.size();
    int j = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == n - 1)
        {
            string temp = s.substr(j);
            reverse(temp.begin(), temp.end());
            res += temp;
        }
        if (s[i] == ' ')
        {
            string temp = s.substr(j, i - j);
            reverse(temp.begin(), temp.end());
            res += temp + " ";
            j = i + 1;
        }
    }
    return res;
}

int main()
{

    return 0;
}