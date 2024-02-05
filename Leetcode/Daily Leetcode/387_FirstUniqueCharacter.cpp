#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

int firstUniqChar(string s)
{
    unordered_map<char, int> mp;
    set<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s[i]) != mp.end() || st.find(s[i]) != st.end())
        {
            st.insert(s[i]);
            mp.erase(s[i]);
        }
        else
        {
            mp.insert({s[i], i});
        }
    }

    int minIndex = INT_MAX;
    for (auto i : mp)
    {
        minIndex = min(minIndex, i.second);
    }
    return minIndex == INT_MAX ? -1 : minIndex;
}

int main()
{
    string s;
    cin >> s;
    cout << firstUniqChar(s) << endl;

    return 0;
}