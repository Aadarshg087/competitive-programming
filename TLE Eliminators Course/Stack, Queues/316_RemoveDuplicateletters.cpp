#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicateLetters(string s)
{
    map<char, int> mp1;
    for (int i = 0; i < s.size(); i++)
    {
        mp1.insert({s[i], i});
    }

    // cbacdcbc
     
}

int main()
{

    return 0;
}