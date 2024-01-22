#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char> s1;
    stack<char> s2;
    for (int i = 0; i < s.size(); i++)
    {
        if (s1.empty() && s[i] == '#')
            continue;
        if (s[i] != '#')
            s1.push(s[i]);
        if (s[i] == '#')
            s1.pop();
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (s2.empty() && t[i] == '#')
            continue;
        if (t[i] != '#')
            s2.push(t[i]);
        if (t[i] == '#')
            s2.pop();
    }
    return s1 == s2;
}

int main()
{

    return 0;
}