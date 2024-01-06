#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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