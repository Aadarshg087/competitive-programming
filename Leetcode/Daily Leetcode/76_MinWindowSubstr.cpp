#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ADOBECODEBANC
// ABC

/*
- We have to find all the letter in min substring
-


*/
string minWindow(string s, string t)
{
    if (t.size() > s.size())
    {
        return "";
    }
    else if (s.size() == t.size() && s == t)
    {
        return s;
    }
    unordered_map<char, int> mp;
    for (char c : t)
        mp[c]++;

    int reqCount = t.size();

    int n = s.size();
    int i = 0;
    int j = 0;
    int start_i = 0;
    int minWindowSize = INT_MAX;
    while (j < n)
    {
        char c = s[j];
        if (mp[c] > 0)
            reqCount--;
        mp[c]--;
        while (reqCount == 0)
        {
            int currWindowSize = j - i + 1;
            if (minWindowSize > currWindowSize)
            {
                minWindowSize = currWindowSize;
                start_i = i;
            }
            if (mp[s[i]] > 0)
                reqCount--;
            i++;
        }
        j++;
    }

    return minWindowSize == INT_MAX ? "" : s.substr(start_i, minWindowSize);
}

string minWindow(string s, string t)
{
    if (t.size() > s.size())
    {
        return "";
    }
    else if (t.size() == s.size())
    {
        return s;
    }

    unordered_map<char, int> mpt;
    for (int i = 0; i < t.size(); i++)
    {
        mpt[t[i]]++;
    }

    int n = s.size();
    unordered_map<char, int> mptemp;
    string res = "";
    for (int i = 0; i < n; i++)
    {
        mptemp = mpt;
        string temp = "";
        for (int j = i; j < n; j++)
        {
            temp += s[j];
            if (mptemp.find(s[j]) != mptemp.end())
            {
                auto it = mptemp.find(s[j]);
                it->second--;
                if (it->second == 0)
                    mptemp.erase(it);
            }
            if (mptemp.empty())
            {
                if (res.size() > temp.size())
                    res = temp;
                break;
            }
        }
    }

    return res;
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << minWindow(s, t) << endl;
    return 0;
}