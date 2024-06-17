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

/*
BETTER APPROACH
- We are keeping a track of char freq and if there exists any mismatch, simply return false
- one edge case in this approach, what if all element exist in second string and some extra characters also.
- So, for that we can compare sizes of both the strings
- T.C - O(n)
- S.C - O(26) + O(26)

*/

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    for (char ch : s)
    {
        mp1[ch]++;
    }

    for (char ch : t)
    {
        mp2[ch]++;
    }

    for (auto it : mp1)
    {
        auto it2 = mp2.find(it.first);
        if (it2 == mp2.end() || it.second != it2->second)
        {
            return false;
        }
    }
    return 1;
}

/*
BRUTE FORCE
- Simple compare them after sorting both of them
- T.C - O(nlogn)
- S.C - O(1)

*/

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
int main()
{

    return 0;
}