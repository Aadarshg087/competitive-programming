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

int lengthOfSubstring(string s)
{
    // Sliding window
    int i = 0;
    int n = s.size();
    if (n == 0)
        return 0;
    int temp = 0;
    map<char, int> mp;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp.insert({s[i], i});
        }
        else
        {
            int p = i - mp[s[i]];
            ans = max(ans, p);
            mp[s[i]] = i;
        }
    }
    return ans;
}

int main()
{

    return 0;
}