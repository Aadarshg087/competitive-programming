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
int strStr(string haystack, string needle)
{
    int n = needle.size();
    for (int i = 0; i < haystack.size(); i++)
    {
        string s = haystack.substr(i, n);
        if (s == needle)
        {
            return i;
        }
    }
    return -1;
}
int strStr(string haystack, string needle)
{
    auto it = haystack.find(needle);
    return it == string::npos ? -1 : it;
}

int main()
{

    return 0;
}