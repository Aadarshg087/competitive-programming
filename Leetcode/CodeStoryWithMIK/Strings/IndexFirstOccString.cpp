#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int m = haystack.size();
    int n = needle.size();

    for (int i = 0; i <= m - n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }

            if (j == n - 1)
                return i;
        }
    }
    return -1;
}

int strStr(string haystack, string needle)
{
    if (needle.size() > haystack.size())
    {
        return -1;
    }

    return haystack.find(needle);
}

int main()
{

    return 0;
}