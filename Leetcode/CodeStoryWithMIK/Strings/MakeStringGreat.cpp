#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string makeGood(string s)
{
    // look for capital letter followed by small letter and vice versa
    // If occurs remove them
    int i = 0;
    while (i < s.size() - 1)
    {
        int diff = abs(s[i] - s[i + 1]);
        if (diff == 32)
        {
            if (i == 0)
            {
                if (s.size() == 2)
                    return "";
                s = s.substr(i + 2);
            }
            else
            {
                s = s.substr(0, i) + s.substr(i + 2);
                i--;
            }
        }
        else
            i++;
    }

    // string ans = "";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == '0')
    //         continue;
    //     ans += s[i];
    // }
    return s;
}

int main()
{

    return 0;
}