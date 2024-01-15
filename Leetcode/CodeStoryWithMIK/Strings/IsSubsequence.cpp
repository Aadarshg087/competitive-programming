#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    if (s.empty())
        return true;
    int i = 0;
    for (int j = 0; j < t.size(); j++)
    {
        if (s[i] == t[j])
        {
            if (i == s.size() - 1)
                return true;
            i++;
        }
    }
    return false;
}

int main()
{

    return 0;
}