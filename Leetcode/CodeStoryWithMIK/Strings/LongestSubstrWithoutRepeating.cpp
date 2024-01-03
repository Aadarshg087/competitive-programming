#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int count = 0;
    int maxCount = 0;
    string temp = "";
    int i = 0;

    // bbbb
    while (i < s.size())
    {
        if (temp.find(s[i]) == string::npos)
        {
            count++;
            temp += s[i];
            maxCount = max(maxCount, count);
            i++;
        }
        else
        {
            int j = s.find(s[i]);
            i = ++j;
            temp = s[i];
            count = 1;
        }
    }
    return maxCount;
}

int main()
{

    return 0;
}